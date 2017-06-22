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

#include <stdio.h>
#include <sstmac/replacements/mpi.h>
#include "mpitest.h"

namespace attrerrcomm {

int test_communicators ( void );
void abort_msg ( const char *, int );
int copybomb_fn ( MPI_Comm, int, void *, void *, void *, int * );
int deletebomb_fn ( MPI_Comm, int, void *, void * );

int attrerrcomm( int argc, char **argv )
{
    int errs;
    MTest_Init( &argc, &argv );
    errs = test_communicators();
    MTest_Finalize( errs );
    MPI_Finalize();
    return 0;
}

/** 
 * MPI 1.2 Clarification: Clarification of Error Behavior of 
 *                        Attribute Callback Functions 
 * Any return value other than MPI_SUCCESS is erroneous.  The specific value
 * returned to the user is undefined (other than it can't be MPI_SUCCESS).
 * Proposals to specify particular values (e.g., user's value) failed.
 */
/** Return an error as the value */
int copybomb_fn( MPI_Comm oldcomm, int keyval, void *extra_state,
		void *attribute_val_in, void *attribute_val_out, int *flag)
{
    /** Note that if (sizeof(int) < sizeof(void *), just setting the int
       part of attribute_val_out may leave some dirty bits
    */
    *flag = 1;
    return MPI_ERR_OTHER;
}

/** Set delete flag to 1 to allow the attribute to be deleted */
static int delete_flag = 0;

int deletebomb_fn( MPI_Comm comm, int keyval, void *attribute_val, 
		   void *extra_state)
{
    if (delete_flag) return MPI_SUCCESS;
    return MPI_ERR_OTHER;
}

void abort_msg( const char *str, int code )
{
    fprintf( stderr, "%s, err = %d\n", str, code );
    MPI_Abort( MPI_COMM_WORLD, code );
}

int test_communicators( void )
{
    MPI_Comm dup_comm_world, d2;
    int world_rank, world_size, key_1;
    int err, errs = 0;
    MPI_Aint value;

    MPI_Comm_rank( MPI_COMM_WORLD, &world_rank );
    MPI_Comm_size( MPI_COMM_WORLD, &world_size );
#ifdef DEBUG
    if (world_rank == 0) {
	printf( "*** Attribute copy/delete return codes ***\n" );
    }
#endif

    MPI_Comm_dup( MPI_COMM_WORLD, &dup_comm_world );
    MPI_Barrier( dup_comm_world );

    MPI_Errhandler_set( dup_comm_world, MPI_ERRORS_RETURN );

    value = - 11;
    if ((err=MPI_Comm_create_keyval( copybomb_fn, deletebomb_fn, &key_1, &value )))
	abort_msg( "Keyval_create", err );

    err = MPI_Comm_set_attr( dup_comm_world, key_1, (void *) (MPI_Aint) world_rank );
    if (err) {
	errs++;
	printf( "Error with first put\n" );
    }

    err = MPI_Comm_set_attr( dup_comm_world, key_1, (void *) (MPI_Aint) (2*world_rank) );
    if (err == MPI_SUCCESS) {
	errs++;
	printf( "delete function return code was MPI_SUCCESS in put\n" );
    }

    /** Because the attribute delete function should fail, the attribute
       should *not be removed* */
    err = MPI_Comm_delete_attr( dup_comm_world, key_1 );
    if (err == MPI_SUCCESS) {
	errs++;
	printf( "delete function return code was MPI_SUCCESS in delete\n" );
    }
    
    err = MPI_Comm_dup( dup_comm_world, &d2 );
    if (err == MPI_SUCCESS) {
	errs++;
	printf( "copy function return code was MPI_SUCCESS in dup\n" );
    }
    if (err != MPI_ERR_OTHER) {
	int lerrclass;
	MPI_Error_class( err, &lerrclass );
	if (lerrclass != MPI_ERR_OTHER) {
	    errs++;
	    printf( "dup did not return an error code of class ERR_OTHER; " );
	    printf( "err = %d, class = %d\n", err, lerrclass );
	}
    }
#ifndef USE_STRICT_MPI
    /** Another interpretation is to leave d2 unchanged on error */
    if (err && d2 != MPI_COMM_NULL) {
	errs++;
	printf( "dup did not return MPI_COMM_NULL on error\n" );
    }
#endif

    delete_flag = 1;
    MPI_Comm_free( &dup_comm_world );

    MPI_Comm_free_keyval( &key_1 );

    return errs;
}

}