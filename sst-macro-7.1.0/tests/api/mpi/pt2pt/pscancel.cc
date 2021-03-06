/**
Copyright 2009-2017 National Technology and Engineering Solutions of Sandia, 
LLC (NTESS).  Under the terms of Contract DE-NA-0003525, the U.S.  Government 
retains certain rights in this software.

Sandia National Laboratories is a multimission laboratory managed and operated
by National Technology and Engineering Solutions of Sandia, LLC., a wholly 
owned subsidiary of Honeywell International, Inc., for the U.S. Department of 
Energy's National Nuclear Security Administration under contract DE-NA0003525.

Copyright (c) 2009-2017, NTESS

All rights reserved.

Redistribution and use in source and binary forms, with or without modification, 
are permitted provided that the following conditions are met:

    * Redistributions of source code must retain the above copyright
      notice, this list of conditions and the following disclaimer.

    * Redistributions in binary form must reproduce the above
      copyright notice, this list of conditions and the following
      disclaimer in the documentation and/or other materials provided
      with the distribution.

    * Neither the name of Sandia Corporation nor the names of its
      contributors may be used to endorse or promote products derived
      from this software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
"AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

Questions? Contact sst-macro-help@sandia.gov
*/

#include <sstmac/replacements/mpi.h>
#include <stdio.h>
#include <stdlib.h>
#include "mpitest.h"

namespace pscancel {
/**
static char MTEST_Descrip[] = "Test of various send cancel calls";
*/

int pscancel( int argc, char *argv[] )
{
    int errs = 0;
    int rank, size, source, dest;
    MPI_Comm      comm;
    MPI_Status    status;
    MPI_Request   req;
    static int bufsizes[4] = { 1, 100, 10000, 1000000 };
    char *buf;
    int  cs, flag, n;
#ifdef TEST_IRSEND
    int veryPicky = 0;   /** Set to 1 to test "quality of implementation" in
			    a tricky part of cancel */
#endif

    MTest_Init( &argc, &argv );

    comm = MPI_COMM_WORLD;
    MPI_Comm_rank( comm, &rank );
    MPI_Comm_size( comm, &size );

    source = 0;
    dest   = size - 1;

    for (cs=0; cs<4; cs++) {
	if (rank == 0) {
	    n = bufsizes[cs];
	    buf = (char *)malloc( n );
	    if (!buf) {
		fprintf( stderr, "Unable to allocate %d bytes\n", n );
		MPI_Abort( MPI_COMM_WORLD, 1 );
	    }
	    MPI_Send_init( buf, n, MPI_CHAR, dest, cs+n+1, comm, &req );
	    MPI_Start( &req );
	    MPI_Cancel( &req );
	    MPI_Wait( &req, &status );
	    MPI_Test_cancelled( &status, &flag );
	    if (!flag) {
		errs ++;
		printf( "Failed to cancel a persistent send request\n" );
		fflush(stdout);
	    }
	    else
	    {
		n = 0;
	    }
	    MPI_Request_free( &req );
	    /** Send the size, zero for successfully cancelled */
	    MPI_Send( &n, 1, MPI_INT, dest, 123, comm );
	    /** Send the tag so the message can be received */
	    n = cs+n+1;
	    MPI_Send( &n, 1, MPI_INT, dest, 123, comm );
	    free( buf );
	}
	else if (rank == dest)
	{
	    int nn, tag;
	    char *btemp;
	    MPI_Recv( &nn, 1, MPI_INT, 0, 123, comm, &status );
	    MPI_Recv( &tag, 1, MPI_INT, 0, 123, comm, &status );
	    if (nn > 0)
	    {
		/** If the message was not cancelled, receive it here */
		btemp = (char*)malloc( nn );
		if (!btemp)
		{
		    fprintf( stderr, "Unable to allocate %d bytes\n", nn);
		    MPI_Abort( MPI_COMM_WORLD, 1 );
		}
		MPI_Recv( btemp, nn, MPI_CHAR, 0, tag, comm, &status );
		free(btemp);
	    }
	}
	MPI_Barrier( comm );

	if (rank == 0) {
	    char *bsendbuf;
	    int bsendbufsize;
	    int bf, bs;
	    n = bufsizes[cs];
	    buf = (char *)malloc( n );
	    if (!buf) {
		fprintf( stderr, "Unable to allocate %d bytes\n", n );
		MPI_Abort( MPI_COMM_WORLD, 1 );
	    }
	    bsendbufsize = n + MPI_BSEND_OVERHEAD;
	    bsendbuf = (char *)malloc( bsendbufsize );
	    if (!bsendbuf) {
		fprintf( stderr, "Unable to allocate %d bytes for bsend\n", n );
		MPI_Abort( MPI_COMM_WORLD, 1 );
	    }
	    MPI_Buffer_attach( bsendbuf, bsendbufsize );
	    MPI_Bsend_init( buf, n, MPI_CHAR, dest, cs+n+2, comm, &req );
	    MPI_Start( &req );
	    MPI_Cancel( &req );
	    MPI_Wait( &req, &status );
	    MPI_Test_cancelled( &status, &flag );
	    if (!flag) {
		errs ++;
		printf( "Failed to cancel a persistent bsend request\n" );
		fflush(stdout);
	    }
	    else
	    {
		n = 0;
	    }
	    MPI_Request_free( &req );
	    /** Send the size, zero for successfully cancelled */
	    MPI_Send( &n, 1, MPI_INT, dest, 123, comm );
	    /** Send the tag so the message can be received */
	    n = cs+n+2;
	    MPI_Send( &n, 1, MPI_INT, dest, 123, comm );
	    free( buf );
	    MPI_Buffer_detach( &bf, &bs );
	    free( bsendbuf );
	}
	else if (rank == dest)
	{
	    int nn, tag;
	    char *btemp;
	    MPI_Recv( &nn, 1, MPI_INT, 0, 123, comm, &status );
	    MPI_Recv( &tag, 1, MPI_INT, 0, 123, comm, &status );
	    if (nn > 0)
	    {
		/** If the message was not cancelled, receive it here */
		btemp = (char*)malloc( nn );
		if (!btemp)
		{
		    fprintf( stderr, "Unable to allocate %d bytes\n", nn);
		    MPI_Abort( MPI_COMM_WORLD, 1 );
		}
		MPI_Recv( btemp, nn, MPI_CHAR, 0, tag, comm, &status );
		free(btemp);
	    }
	}
	MPI_Barrier( comm );

	/** Because this test is erroneous, we do not perform it unless
	   TEST_IRSEND is defined.  */
#ifdef TEST_IRSEND
	/** We avoid ready send to self because an implementation
	   is free to detect the error in delivering a message to
	   itself without a pending receive; we could also check
	   for an error return from the MPI_Irsend */
	if (rank == 0 && dest != rank) {
	    n = bufsizes[cs];
	    buf = (char *)malloc( n );
	    if (!buf) {
		fprintf( stderr, "Unable to allocate %d bytes\n", n );
		MPI_Abort( MPI_COMM_WORLD, 1 );
	    }
	    MPI_Rsend_init( buf, n, MPI_CHAR, dest, cs+n+3, comm, &req );
	    MPI_Start( &req );
	    MPI_Cancel( &req );
	    MPI_Wait( &req, &status );
	    MPI_Test_cancelled( &status, &flag );
	    /** This can be pretty ugly.  The standard is clear (Section 3.8)
	       that either a sent message is received or the 
	       sent message is successfully cancelled.  Since this message
	       can never be received, the cancel must complete
	       successfully.  

	       However, since there is no matching receive, this
	       program is erroneous.  In this case, we can't really
	       flag this as an error */
	    if (!flag && veryPicky) {
		errs ++;
		printf( "Failed to cancel a persistent rsend request\n" );
		fflush(stdout);
	    }
	    if (flag)
	    {
		n = 0;
	    }
	    MPI_Request_free( &req );
	    /** Send the size, zero for successfully cancelled */
	    MPI_Send( &n, 1, MPI_INT, dest, 123, comm );
	    /** Send the tag so the message can be received */
	    n = cs+n+3;
	    MPI_Send( &n, 1, MPI_INT, dest, 123, comm );
	    free( buf );
	}
	else if (rank == dest)
	{
	    int n, tag;
	    char *btemp;
	    MPI_Recv( &n, 1, MPI_INT, 0, 123, comm, &status );
	    MPI_Recv( &tag, 1, MPI_INT, 0, 123, comm, &status );
	    if (n > 0)
	    {
		/** If the message was not cancelled, receive it here */
		btemp = (char*)malloc( n );
		if (!btemp)
		{
		    fprintf( stderr, "Unable to allocate %d bytes\n", n);
		    MPI_Abort( MPI_COMM_WORLD, 1 );
		}
		MPI_Recv( btemp, n, MPI_CHAR, 0, tag, comm, &status );
		free(btemp);
	    }
	}
	MPI_Barrier( comm );
#endif

	if (rank == 0) {
	    n = bufsizes[cs];
	    buf = (char *)malloc( n );
	    if (!buf) {
		fprintf( stderr, "Unable to allocate %d bytes\n", n );
		MPI_Abort( MPI_COMM_WORLD, 1 );
	    }
	    MPI_Ssend_init( buf, n, MPI_CHAR, dest, cs+n+4, comm, &req );
	    MPI_Start( &req );
	    MPI_Cancel( &req );
	    MPI_Wait( &req, &status );
	    MPI_Test_cancelled( &status, &flag );
	    if (!flag) {
		errs ++;
		printf( "Failed to cancel a persistent ssend request\n" );
		fflush(stdout);
	    }
	    else
	    {
		n = 0;
	    }
	    MPI_Request_free( &req );
	    /** Send the size, zero for successfully cancelled */
	    MPI_Send( &n, 1, MPI_INT, dest, 123, comm );
	    /** Send the tag so the message can be received */
	    n = cs+n+4;
	    MPI_Send( &n, 1, MPI_INT, dest, 123, comm );
	    free( buf );
	}
	else if (rank == dest)
	{
	    int nn, tag;
	    char *btemp;
	    MPI_Recv( &nn, 1, MPI_INT, 0, 123, comm, &status );
	    MPI_Recv( &tag, 1, MPI_INT, 0, 123, comm, &status );
	    if (nn > 0)
	    {
		/** If the message was not cancelled, receive it here */
		btemp = (char*)malloc( nn );
		if (!btemp)
		{
		    fprintf( stderr, "Unable to allocate %d bytes\n", nn);
		    MPI_Abort( MPI_COMM_WORLD, 1 );
		}
		MPI_Recv( btemp, nn, MPI_CHAR, 0, tag, comm, &status );
		free(btemp);
	    }
	}
	MPI_Barrier( comm );
    }

    MTest_Finalize( errs );
    MPI_Finalize();
    return 0;
}

}