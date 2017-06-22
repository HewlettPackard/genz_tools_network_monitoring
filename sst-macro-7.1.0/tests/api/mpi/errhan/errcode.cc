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
#include <stdlib.h>
#include <sstmac/replacements/mpi.h>

namespace errcode {
#define MPIR_ERR_FATAL 1
#define MPIR_ERR_RECOVERABLE 0
int MPIR_Err_create_code( int, int, char *, int, int, const char [], const char [], ... );
void ChkMsg( int, int, const char [] );

int errcode(int argc, char **argv)
{
    int err;
    MPI_Init( 0, 0 );
    /** src/mpi/attr/attr_delete.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_attr_delete", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_attr_delete" );
    {
    /** src/mpi/attr/attr_delete.c */
    int i1 = MPI_COMM_WORLD;
    int i2 = 2;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_attr_delete", "**mpi_attr_delete %C %d", i1, i2 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_attr_delete %C %d" );
    }
    /** src/mpi/attr/attr_get.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**attrnotptr", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**attrnotptr" );
    /** src/mpi/attr/attr_get.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_attr_get", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_attr_get" );
    {
    /** src/mpi/attr/attr_get.c */
    int i1 = MPI_COMM_WORLD;
    int i2 = 2;
    char s3[] = "pointer3";
    char s4[] = "pointer4";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_attr_get", "**mpi_attr_get %C %d %p %p", i1, i2, s3, s4 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_attr_get %C %d %p %p" );
    }
    /** src/mpi/attr/attr_put.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_attr_put", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_attr_put" );
    {
    /** src/mpi/attr/attr_put.c */
    int i1 = MPI_COMM_WORLD;
    int i2 = 2;
    char s3[] = "pointer3";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_attr_put", "**mpi_attr_put %C %d %p", i1, i2, s3 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_attr_put %C %d %p" );
    }
    /** src/mpi/attr/attrutil.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**user", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**user" );
    {
    /** src/mpi/attr/attrutil.c */
    int i1 = 1;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**user", "**userdel %d", i1 );
    ChkMsg( err, MPI_ERR_OTHER, "**userdel %d" );
    }
    {
    /** src/mpi/attr/attrutil.c */
    int i1 = 1;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**user", "**usercopy %d", i1 );
    ChkMsg( err, MPI_ERR_OTHER, "**usercopy %d" );
    }
    /** src/mpi/attr/attrutil.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**nomem", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**nomem" );
    /** src/mpi/attr/attrutil.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**attrsentinal", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**attrsentinal" );
    /** src/mpi/attr/comm_create_keyval.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_comm_create_keyval", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_comm_create_keyval" );
    {
    /** src/mpi/attr/comm_create_keyval.c */
    char s1[] = "pointer1";
    char s2[] = "pointer2";
    char s3[] = "pointer3";
    char s4[] = "pointer4";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_comm_create_keyval", "**mpi_comm_create_keyval %p %p %p %p", s1, s2, s3, s4 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_comm_create_keyval %p %p %p %p" );
    }
    /** src/mpi/attr/comm_delete_attr.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_comm_delete_attr", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_comm_delete_attr" );
    {
    /** src/mpi/attr/comm_delete_attr.c */
    int i1 = MPI_COMM_WORLD;
    int i2 = 2;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_comm_delete_attr", "**mpi_comm_delete_attr %C %d", i1, i2 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_comm_delete_attr %C %d" );
    }
    /** src/mpi/attr/comm_free_keyval.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_comm_free_keyval", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_comm_free_keyval" );
    {
    /** src/mpi/attr/comm_free_keyval.c */
    char s1[] = "pointer1";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_comm_free_keyval", "**mpi_comm_free_keyval %p", s1 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_comm_free_keyval %p" );
    }
    /** src/mpi/attr/comm_get_attr.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpir_comm_get_attr", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpir_comm_get_attr" );
    {
    /** src/mpi/attr/comm_get_attr.c */
    int i1 = MPI_COMM_WORLD;
    int i2 = 2;
    char s3[] = "pointer3";
    char s4[] = "pointer4";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpir_comm_get_attr", "**mpir_comm_get_attr %C %d %p %p", i1, i2, s3, s4 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpir_comm_get_attr %C %d %p %p" );
    }
    /** src/mpi/attr/comm_get_attr.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_comm_get_attr", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_comm_get_attr" );
    {
    /** src/mpi/attr/comm_get_attr.c */
    int i1 = MPI_COMM_WORLD;
    int i2 = 2;
    char s3[] = "pointer3";
    char s4[] = "pointer4";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_comm_get_attr", "**mpi_comm_get_attr %C %d %p %p", i1, i2, s3, s4 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_comm_get_attr %C %d %p %p" );
    }
    /** src/mpi/attr/comm_set_attr.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**keyvalinvalid", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**keyvalinvalid" );
    /** src/mpi/attr/comm_set_attr.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_comm_set_attr", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_comm_set_attr" );
    {
    /** src/mpi/attr/comm_set_attr.c */
    int i1 = MPI_COMM_WORLD;
    int i2 = 2;
    char s3[] = "pointer3";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_comm_set_attr", "**mpi_comm_set_attr %C %d %p", i1, i2, s3 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_comm_set_attr %C %d %p" );
    }
    /** src/mpi/attr/keyval_create.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_keyval_create", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_keyval_create" );
    {
    /** src/mpi/attr/keyval_create.c */
    char s1[] = "pointer1";
    char s2[] = "pointer2";
    char s3[] = "pointer3";
    char s4[] = "pointer4";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_keyval_create", "**mpi_keyval_create %p %p %p %p", s1, s2, s3, s4 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_keyval_create %p %p %p %p" );
    }
    /** src/mpi/attr/keyval_free.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_keyval_free", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_keyval_free" );
    {
    /** src/mpi/attr/keyval_free.c */
    char s1[] = "pointer1";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_keyval_free", "**mpi_keyval_free %p", s1 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_keyval_free %p" );
    }
    /** src/mpi/attr/type_create_keyval.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_type_create_keyval", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_type_create_keyval" );
    {
    /** src/mpi/attr/type_create_keyval.c */
    char s1[] = "pointer1";
    char s2[] = "pointer2";
    char s3[] = "pointer3";
    char s4[] = "pointer4";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_type_create_keyval", "**mpi_type_create_keyval %p %p %p %p", s1, s2, s3, s4 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_type_create_keyval %p %p %p %p" );
    }
    /** src/mpi/attr/type_delete_attr.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_type_delete_attr", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_type_delete_attr" );
    {
    /** src/mpi/attr/type_delete_attr.c */
    int i1 = MPI_INT;
    int i2 = 2;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_type_delete_attr", "**mpi_type_delete_attr %D %d", i1, i2 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_type_delete_attr %D %d" );
    }
    /** src/mpi/attr/type_free_keyval.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_type_free_keyval", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_type_free_keyval" );
    {
    /** src/mpi/attr/type_free_keyval.c */
    char s1[] = "pointer1";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_type_free_keyval", "**mpi_type_free_keyval %p", s1 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_type_free_keyval %p" );
    }
    /** src/mpi/attr/type_get_attr.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpir_type_get_attr", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpir_type_get_attr" );
    {
    /** src/mpi/attr/type_get_attr.c */
    int i1 = MPI_INT;
    int i2 = 2;
    char s3[] = "pointer3";
    char s4[] = "pointer4";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpir_type_get_attr", "**mpir_type_get_attr %D %d %p %p", i1, i2, s3, s4 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpir_type_get_attr %D %d %p %p" );
    }
    /** src/mpi/attr/type_get_attr.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_type_get_attr", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_type_get_attr" );
    {
    /** src/mpi/attr/type_get_attr.c */
    int i1 = MPI_INT;
    int i2 = 2;
    char s3[] = "pointer3";
    char s4[] = "pointer4";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_type_get_attr", "**mpi_type_get_attr %D %d %p %p", i1, i2, s3, s4 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_type_get_attr %D %d %p %p" );
    }
    {
    /** src/mpi/attr/type_set_attr.c */
    char s1[] = "string1";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**nomem", "**nomem %s", s1 );
    ChkMsg( err, MPI_ERR_OTHER, "**nomem %s" );
    }
    /** src/mpi/attr/type_set_attr.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_type_set_attr", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_type_set_attr" );
    {
    /** src/mpi/attr/type_set_attr.c */
    int i1 = MPI_INT;
    int i2 = 2;
    char s3[] = "pointer3";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_type_set_attr", "**mpi_type_set_attr %D %d %p", i1, i2, s3 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_type_set_attr %D %d %p" );
    }
    /** src/mpi/attr/win_create_keyval.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_win_create_keyval", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_win_create_keyval" );
    {
    /** src/mpi/attr/win_create_keyval.c */
    char s1[] = "pointer1";
    char s2[] = "pointer2";
    char s3[] = "pointer3";
    char s4[] = "pointer4";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_win_create_keyval", "**mpi_win_create_keyval %p %p %p %p", s1, s2, s3, s4 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_win_create_keyval %p %p %p %p" );
    }
    /** src/mpi/attr/win_delete_attr.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_win_delete_attr", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_win_delete_attr" );
    {
    /** src/mpi/attr/win_delete_attr.c */
    int i1 = MPI_WIN_NULL;
    int i2 = 2;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_win_delete_attr", "**mpi_win_delete_attr %W %d", i1, i2 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_win_delete_attr %W %d" );
    }
    /** src/mpi/attr/win_free_keyval.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_win_free_keyval", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_win_free_keyval" );
    {
    /** src/mpi/attr/win_free_keyval.c */
    char s1[] = "pointer1";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_win_free_keyval", "**mpi_win_free_keyval %p", s1 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_win_free_keyval %p" );
    }
    /** src/mpi/attr/win_get_attr.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpir_wingetattr", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpir_wingetattr" );
    {
    /** src/mpi/attr/win_get_attr.c */
    int i1 = MPI_WIN_NULL;
    int i2 = 2;
    char s3[] = "pointer3";
    char s4[] = "pointer4";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpir_wingetattr", "**mpir_wingetattr %W %d %p %p", i1, i2, s3, s4 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpir_wingetattr %W %d %p %p" );
    }
    /** src/mpi/attr/win_get_attr.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_win_get_attr", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_win_get_attr" );
    {
    /** src/mpi/attr/win_get_attr.c */
    int i1 = MPI_WIN_NULL;
    int i2 = 2;
    char s3[] = "pointer3";
    char s4[] = "pointer4";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_win_get_attr", "**mpi_win_get_attr %W %d %p %p", i1, i2, s3, s4 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_win_get_attr %W %d %p %p" );
    }
    /** src/mpi/attr/win_set_attr.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_win_set_attr", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_win_set_attr" );
    {
    /** src/mpi/attr/win_set_attr.c */
    int i1 = MPI_WIN_NULL;
    int i2 = 2;
    char s3[] = "pointer3";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_win_set_attr", "**mpi_win_set_attr %W %d %p", i1, i2, s3 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_win_set_attr %W %d %p" );
    }
    /** src/mpi/coll/allgather.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**fail", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**fail" );
    /** src/mpi/coll/allgather.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**coll_fail", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**coll_fail" );
    /** src/mpi/coll/allgather.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_allgather", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_allgather" );
    {
    /** src/mpi/coll/allgather.c */
    char s1[] = "pointer1";
    int i2 = 2;
    int i3 = MPI_INT;
    char s4[] = "pointer4";
    int i5 = 5;
    int i6 = MPI_INT;
    int i7 = MPI_COMM_WORLD;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_allgather", "**mpi_allgather %p %d %D %p %d %D %C", s1, i2, i3, s4, i5, i6, i7 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_allgather %p %d %D %p %d %D %C" );
    }
    /** src/mpi/coll/allgatherv.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_allgatherv", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_allgatherv" );
    {
    /** src/mpi/coll/allgatherv.c */
    char s1[] = "pointer1";
    int i2 = 2;
    int i3 = MPI_INT;
    char s4[] = "pointer4";
    char s5[] = "pointer5";
    char s6[] = "pointer6";
    int i7 = MPI_INT;
    int i8 = MPI_COMM_WORLD;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_allgatherv", "**mpi_allgatherv %p %d %D %p %p %p %D %C", s1, i2, i3, s4, s5, s6, i7, i8 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_allgatherv %p %d %D %p %p %p %D %C" );
    }
    /** src/mpi/coll/allred_group.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**rank", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**rank" );
    /** src/mpi/coll/allred_group.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**commnotintra", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**commnotintra" );
    /** src/mpi/coll/allreduce.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_allreduce", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_allreduce" );
    {
    /** src/mpi/coll/allreduce.c */
    char s1[] = "pointer1";
    char s2[] = "pointer2";
    int i3 = 3;
    int i4 = MPI_INT;
    int i5 = MPI_SUM;
    int i6 = MPI_COMM_WORLD;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_allreduce", "**mpi_allreduce %p %p %d %D %O %C", s1, s2, i3, i4, i5, i6 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_allreduce %p %p %d %D %O %C" );
    }
    /** src/mpi/coll/alltoall.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_alltoall", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_alltoall" );
    {
    /** src/mpi/coll/alltoall.c */
    char s1[] = "pointer1";
    int i2 = 2;
    int i3 = MPI_INT;
    char s4[] = "pointer4";
    int i5 = 5;
    int i6 = MPI_INT;
    int i7 = MPI_COMM_WORLD;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_alltoall", "**mpi_alltoall %p %d %D %p %d %D %C", s1, i2, i3, s4, i5, i6, i7 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_alltoall %p %d %D %p %d %D %C" );
    }
    /** src/mpi/coll/alltoallv.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**sendbuf_inplace", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**sendbuf_inplace" );
    /** src/mpi/coll/alltoallv.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_alltoallv", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_alltoallv" );
    {
    /** src/mpi/coll/alltoallv.c */
    char s1[] = "pointer1";
    char s2[] = "pointer2";
    char s3[] = "pointer3";
    int i4 = MPI_INT;
    char s5[] = "pointer5";
    char s6[] = "pointer6";
    char s7[] = "pointer7";
    int i8 = MPI_INT;
    int i9 = MPI_COMM_WORLD;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_alltoallv", "**mpi_alltoallv %p %p %p %D %p %p %p %D %C", s1, s2, s3, i4, s5, s6, s7, i8, i9 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_alltoallv %p %p %p %D %p %p %p %D %C" );
    }
    /** src/mpi/coll/alltoallw.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_alltoallw", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_alltoallw" );
    {
    /** src/mpi/coll/alltoallw.c */
    char s1[] = "pointer1";
    char s2[] = "pointer2";
    char s3[] = "pointer3";
    char s4[] = "pointer4";
    char s5[] = "pointer5";
    char s6[] = "pointer6";
    char s7[] = "pointer7";
    char s8[] = "pointer8";
    int i9 = MPI_COMM_WORLD;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_alltoallw", "**mpi_alltoallw %p %p %p %p %p %p %p %p %C", s1, s2, s3, s4, s5, s6, s7, s8, i9 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_alltoallw %p %p %p %p %p %p %p %p %C" );
    }
    /** src/mpi/coll/barrier.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_barrier", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_barrier" );
    {
    /** src/mpi/coll/barrier.c */
    int i1 = MPI_COMM_WORLD;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_barrier", "**mpi_barrier %C", i1 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_barrier %C" );
    }
    /** src/mpi/coll/bcast.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**collective_size_mismatch", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**collective_size_mismatch" );
    {
    /** src/mpi/coll/bcast.c */
    int i1 = 1;
    int i2 = 2;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**collective_size_mismatch", "**collective_size_mismatch %d %d", i1, i2 );
    ChkMsg( err, MPI_ERR_OTHER, "**collective_size_mismatch %d %d" );
    }
    /** src/mpi/coll/bcast.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_bcast", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_bcast" );
    {
    /** src/mpi/coll/bcast.c */
    char s1[] = "pointer1";
    int i2 = 2;
    int i3 = MPI_INT;
    int i4 = 4;
    int i5 = MPI_COMM_WORLD;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_bcast", "**mpi_bcast %p %d %D %d %C", s1, i2, i3, i4, i5 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_bcast %p %d %D %d %C" );
    }
    /** src/mpi/coll/exscan.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_exscan", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_exscan" );
    {
    /** src/mpi/coll/exscan.c */
    char s1[] = "pointer1";
    char s2[] = "pointer2";
    int i3 = 3;
    int i4 = MPI_INT;
    int i5 = MPI_SUM;
    int i6 = MPI_COMM_WORLD;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_exscan", "**mpi_exscan %p %p %d %D %O %C", s1, s2, i3, i4, i5, i6 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_exscan %p %p %d %D %O %C" );
    }
    /** src/mpi/coll/gather.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_gather", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_gather" );
    {
    /** src/mpi/coll/gather.c */
    char s1[] = "pointer1";
    int i2 = 2;
    int i3 = MPI_INT;
    char s4[] = "pointer4";
    int i5 = 5;
    int i6 = MPI_INT;
    int i7 = 7;
    int i8 = MPI_COMM_WORLD;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_gather", "**mpi_gather %p %d %D %p %d %D %d %C", s1, i2, i3, s4, i5, i6, i7, i8 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_gather %p %d %D %p %d %D %d %C" );
    }
    /** src/mpi/coll/gatherv.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_gatherv", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_gatherv" );
    {
    /** src/mpi/coll/gatherv.c */
    char s1[] = "pointer1";
    int i2 = 2;
    int i3 = MPI_INT;
    char s4[] = "pointer4";
    char s5[] = "pointer5";
    char s6[] = "pointer6";
    int i7 = MPI_INT;
    int i8 = 8;
    int i9 = MPI_COMM_WORLD;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_gatherv", "**mpi_gatherv %p %d %D %p %p %p %D %d %C", s1, i2, i3, s4, s5, s6, i7, i8, i9 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_gatherv %p %d %D %p %p %p %D %d %C" );
    }
    /** src/mpi/coll/helper_fns.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**truncate", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**truncate" );
    {
    /** src/mpi/coll/helper_fns.c */
    int i1 = 1;
    int i2 = 2;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**truncate", "**truncate %d %d", i1, i2 );
    ChkMsg( err, MPI_ERR_OTHER, "**truncate %d %d" );
    }
    /** src/mpi/coll/helper_fns.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**dtypemismatch", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**dtypemismatch" );
    /** src/mpi/coll/iallgather.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpix_iallgather", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpix_iallgather" );
    {
    /** src/mpi/coll/iallgather.c */
    char s1[] = "pointer1";
    int i2 = 2;
    int i3 = MPI_INT;
    char s4[] = "pointer4";
    int i5 = 5;
    int i6 = MPI_INT;
    int i7 = MPI_COMM_WORLD;
    char s8[] = "pointer8";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpix_iallgather", "**mpix_iallgather %p %d %D %p %d %D %C %p", s1, i2, i3, s4, i5, i6, i7, s8 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpix_iallgather %p %d %D %p %d %D %C %p" );
    }
    /** src/mpi/coll/iallgatherv.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpix_iallgatherv", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpix_iallgatherv" );
    {
    /** src/mpi/coll/iallgatherv.c */
    char s1[] = "pointer1";
    int i2 = 2;
    int i3 = MPI_INT;
    char s4[] = "pointer4";
    char s5[] = "pointer5";
    char s6[] = "pointer6";
    int i7 = MPI_INT;
    int i8 = MPI_COMM_WORLD;
    char s9[] = "pointer9";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpix_iallgatherv", "**mpix_iallgatherv %p %d %D %p %p %p %D %C %p", s1, i2, i3, s4, s5, s6, i7, i8, s9 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpix_iallgatherv %p %d %D %p %p %p %D %C %p" );
    }
    /** src/mpi/coll/iallreduce.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpix_iallreduce", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpix_iallreduce" );
    {
    /** src/mpi/coll/iallreduce.c */
    char s1[] = "pointer1";
    char s2[] = "pointer2";
    int i3 = 3;
    int i4 = MPI_INT;
    int i5 = MPI_SUM;
    int i6 = MPI_COMM_WORLD;
    char s7[] = "pointer7";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpix_iallreduce", "**mpix_iallreduce %p %p %d %D %O %C %p", s1, s2, i3, i4, i5, i6, s7 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpix_iallreduce %p %p %d %D %O %C %p" );
    }
    /** src/mpi/coll/ialltoall.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpix_ialltoall", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpix_ialltoall" );
    {
    /** src/mpi/coll/ialltoall.c */
    char s1[] = "pointer1";
    int i2 = 2;
    int i3 = MPI_INT;
    char s4[] = "pointer4";
    int i5 = 5;
    int i6 = MPI_INT;
    int i7 = MPI_COMM_WORLD;
    char s8[] = "pointer8";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpix_ialltoall", "**mpix_ialltoall %p %d %D %p %d %D %C %p", s1, i2, i3, s4, i5, i6, i7, s8 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpix_ialltoall %p %d %D %p %d %D %C %p" );
    }
    /** src/mpi/coll/ialltoallv.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpix_ialltoallv", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpix_ialltoallv" );
    {
    /** src/mpi/coll/ialltoallv.c */
    char s1[] = "pointer1";
    char s2[] = "pointer2";
    char s3[] = "pointer3";
    int i4 = MPI_INT;
    char s5[] = "pointer5";
    char s6[] = "pointer6";
    char s7[] = "pointer7";
    int i8 = MPI_INT;
    int i9 = MPI_COMM_WORLD;
    char s10[] = "pointer10";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpix_ialltoallv", "**mpix_ialltoallv %p %p %p %D %p %p %p %D %C %p", s1, s2, s3, i4, s5, s6, s7, i8, i9, s10 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpix_ialltoallv %p %p %p %D %p %p %p %D %C %p" );
    }
    /** src/mpi/coll/ialltoallw.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpix_ialltoallw", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpix_ialltoallw" );
    {
    /** src/mpi/coll/ialltoallw.c */
    char s1[] = "pointer1";
    char s2[] = "pointer2";
    char s3[] = "pointer3";
    char s4[] = "pointer4";
    char s5[] = "pointer5";
    char s6[] = "pointer6";
    char s7[] = "pointer7";
    char s8[] = "pointer8";
    int i9 = MPI_COMM_WORLD;
    char s10[] = "pointer10";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpix_ialltoallw", "**mpix_ialltoallw %p %p %p %p %p %p %p %p %C %p", s1, s2, s3, s4, s5, s6, s7, s8, i9, s10 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpix_ialltoallw %p %p %p %p %p %p %p %p %C %p" );
    }
    /** src/mpi/coll/ibarrier.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpix_ibarrier", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpix_ibarrier" );
    {
    /** src/mpi/coll/ibarrier.c */
    int i1 = MPI_COMM_WORLD;
    char s2[] = "pointer2";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpix_ibarrier", "**mpix_ibarrier %C %p", i1, s2 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpix_ibarrier %C %p" );
    }
    /** src/mpi/coll/ibcast.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpix_ibcast", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpix_ibcast" );
    {
    /** src/mpi/coll/ibcast.c */
    char s1[] = "pointer1";
    int i2 = 2;
    int i3 = MPI_INT;
    int i4 = MPI_COMM_WORLD;
    char s5[] = "pointer5";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpix_ibcast", "**mpix_ibcast %p %d %D %C %p", s1, i2, i3, i4, s5 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpix_ibcast %p %d %D %C %p" );
    }
    /** src/mpi/coll/iexscan.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpix_iexscan", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpix_iexscan" );
    {
    /** src/mpi/coll/iexscan.c */
    char s1[] = "pointer1";
    char s2[] = "pointer2";
    int i3 = 3;
    int i4 = MPI_INT;
    int i5 = MPI_SUM;
    int i6 = MPI_COMM_WORLD;
    char s7[] = "pointer7";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpix_iexscan", "**mpix_iexscan %p %p %d %D %O %C %p", s1, s2, i3, i4, i5, i6, s7 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpix_iexscan %p %p %d %D %O %C %p" );
    }
    /** src/mpi/coll/igather.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpix_igather", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpix_igather" );
    {
    /** src/mpi/coll/igather.c */
    char s1[] = "pointer1";
    int i2 = 2;
    int i3 = MPI_INT;
    char s4[] = "pointer4";
    int i5 = 5;
    int i6 = MPI_INT;
    int i7 = 7;
    int i8 = MPI_COMM_WORLD;
    char s9[] = "pointer9";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpix_igather", "**mpix_igather %p %d %D %p %d %D %d %C %p", s1, i2, i3, s4, i5, i6, i7, i8, s9 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpix_igather %p %d %D %p %d %D %d %C %p" );
    }
    /** src/mpi/coll/igatherv.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpix_igatherv", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpix_igatherv" );
    {
    /** src/mpi/coll/igatherv.c */
    char s1[] = "pointer1";
    int i2 = 2;
    int i3 = MPI_INT;
    char s4[] = "pointer4";
    char s5[] = "pointer5";
    char s6[] = "pointer6";
    int i7 = MPI_INT;
    int i8 = 8;
    int i9 = MPI_COMM_WORLD;
    char s10[] = "pointer10";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpix_igatherv", "**mpix_igatherv %p %d %D %p %p %p %D %d %C %p", s1, i2, i3, s4, s5, s6, i7, i8, i9, s10 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpix_igatherv %p %d %D %p %p %p %D %d %C %p" );
    }
    /** src/mpi/coll/ired_scat.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpix_ireduce_scatter", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpix_ireduce_scatter" );
    {
    /** src/mpi/coll/ired_scat.c */
    char s1[] = "pointer1";
    char s2[] = "pointer2";
    char s3[] = "pointer3";
    int i4 = MPI_INT;
    int i5 = MPI_SUM;
    int i6 = MPI_COMM_WORLD;
    char s7[] = "pointer7";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpix_ireduce_scatter", "**mpix_ireduce_scatter %p %p %p %D %O %C %p", s1, s2, s3, i4, i5, i6, s7 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpix_ireduce_scatter %p %p %p %D %O %C %p" );
    }
    /** src/mpi/coll/ired_scat_block.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpix_ireduce_scatter_block", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpix_ireduce_scatter_block" );
    {
    /** src/mpi/coll/ired_scat_block.c */
    char s1[] = "pointer1";
    char s2[] = "pointer2";
    int i3 = 3;
    int i4 = MPI_INT;
    int i5 = MPI_SUM;
    int i6 = MPI_COMM_WORLD;
    char s7[] = "pointer7";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpix_ireduce_scatter_block", "**mpix_ireduce_scatter_block %p %p %d %D %O %C %p", s1, s2, i3, i4, i5, i6, s7 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpix_ireduce_scatter_block %p %p %d %D %O %C %p" );
    }
    /** src/mpi/coll/ireduce.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpix_ireduce", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpix_ireduce" );
    {
    /** src/mpi/coll/ireduce.c */
    char s1[] = "pointer1";
    char s2[] = "pointer2";
    int i3 = 3;
    int i4 = MPI_INT;
    int i5 = MPI_SUM;
    int i6 = 6;
    int i7 = MPI_COMM_WORLD;
    char s8[] = "pointer8";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpix_ireduce", "**mpix_ireduce %p %p %d %D %O %d %C %p", s1, s2, i3, i4, i5, i6, i7, s8 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpix_ireduce %p %p %d %D %O %d %C %p" );
    }
    /** src/mpi/coll/iscan.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpix_iscan", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpix_iscan" );
    {
    /** src/mpi/coll/iscan.c */
    char s1[] = "pointer1";
    char s2[] = "pointer2";
    int i3 = 3;
    int i4 = MPI_INT;
    int i5 = MPI_SUM;
    int i6 = MPI_COMM_WORLD;
    char s7[] = "pointer7";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpix_iscan", "**mpix_iscan %p %p %d %D %O %C %p", s1, s2, i3, i4, i5, i6, s7 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpix_iscan %p %p %d %D %O %C %p" );
    }
    /** src/mpi/coll/iscatter.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpix_iscatter", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpix_iscatter" );
    {
    /** src/mpi/coll/iscatter.c */
    char s1[] = "pointer1";
    int i2 = 2;
    int i3 = MPI_INT;
    char s4[] = "pointer4";
    int i5 = 5;
    int i6 = MPI_INT;
    int i7 = 7;
    int i8 = MPI_COMM_WORLD;
    char s9[] = "pointer9";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpix_iscatter", "**mpix_iscatter %p %d %D %p %d %D %d %C %p", s1, i2, i3, s4, i5, i6, i7, i8, s9 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpix_iscatter %p %d %D %p %d %D %d %C %p" );
    }
    /** src/mpi/coll/iscatterv.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpix_iscatterv", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpix_iscatterv" );
    {
    /** src/mpi/coll/iscatterv.c */
    char s1[] = "pointer1";
    char s2[] = "pointer2";
    char s3[] = "pointer3";
    int i4 = MPI_INT;
    char s5[] = "pointer5";
    int i6 = 6;
    int i7 = MPI_INT;
    int i8 = 8;
    int i9 = MPI_COMM_WORLD;
    char s10[] = "pointer10";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpix_iscatterv", "**mpix_iscatterv %p %p %p %D %p %d %D %d %C %p", s1, s2, s3, i4, s5, i6, i7, i8, i9, s10 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpix_iscatterv %p %p %p %D %p %d %D %d %C %p" );
    }
    /** src/mpi/coll/op_commutative.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_op_commutative", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_op_commutative" );
    {
    /** src/mpi/coll/op_commutative.c */
    int i1 = MPI_SUM;
    char s2[] = "pointer2";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_op_commutative", "**mpi_op_commutative %O %p", i1, s2 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_op_commutative %O %p" );
    }
    /** src/mpi/coll/op_create.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_op_create", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_op_create" );
    {
    /** src/mpi/coll/op_create.c */
    char s1[] = "pointer1";
    int i2 = 2;
    char s3[] = "pointer3";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_op_create", "**mpi_op_create %p %d %p", s1, i2, s3 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_op_create %p %d %p" );
    }
    /** src/mpi/coll/op_free.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**permop", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**permop" );
    /** src/mpi/coll/op_free.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_op_free", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_op_free" );
    {
    /** src/mpi/coll/op_free.c */
    char s1[] = "pointer1";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_op_free", "**mpi_op_free %p", s1 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_op_free %p" );
    }
    /** src/mpi/coll/opband.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**opundefined", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**opundefined" );
    {
    /** src/mpi/coll/opband.c */
    char s1[] = "string1";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**opundefined", "**opundefined %s", s1 );
    ChkMsg( err, MPI_ERR_OTHER, "**opundefined %s" );
    }
    /** src/mpi/coll/red_scat.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_reduce_scatter", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_reduce_scatter" );
    {
    /** src/mpi/coll/red_scat.c */
    char s1[] = "pointer1";
    char s2[] = "pointer2";
    char s3[] = "pointer3";
    int i4 = MPI_INT;
    int i5 = MPI_SUM;
    int i6 = MPI_COMM_WORLD;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_reduce_scatter", "**mpi_reduce_scatter %p %p %p %D %O %C", s1, s2, s3, i4, i5, i6 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_reduce_scatter %p %p %p %D %O %C" );
    }
    /** src/mpi/coll/red_scat_block.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_reduce_scatter_block", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_reduce_scatter_block" );
    {
    /** src/mpi/coll/red_scat_block.c */
    char s1[] = "pointer1";
    char s2[] = "pointer2";
    int i3 = 3;
    int i4 = MPI_INT;
    int i5 = MPI_SUM;
    int i6 = MPI_COMM_WORLD;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_reduce_scatter_block", "**mpi_reduce_scatter_block %p %p %d %D %O %C", s1, s2, i3, i4, i5, i6 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_reduce_scatter_block %p %p %d %D %O %C" );
    }
    /** src/mpi/coll/reduce.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_reduce", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_reduce" );
    {
    /** src/mpi/coll/reduce.c */
    char s1[] = "pointer1";
    char s2[] = "pointer2";
    int i3 = 3;
    int i4 = MPI_INT;
    int i5 = MPI_SUM;
    int i6 = 6;
    int i7 = MPI_COMM_WORLD;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_reduce", "**mpi_reduce %p %p %d %D %O %d %C", s1, s2, i3, i4, i5, i6, i7 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_reduce %p %p %d %D %O %d %C" );
    }
    /** src/mpi/coll/reduce_local.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_reduce_local", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_reduce_local" );
    {
    /** src/mpi/coll/reduce_local.c */
    char s1[] = "pointer1";
    char s2[] = "pointer2";
    int i3 = 3;
    int i4 = MPI_INT;
    int i5 = MPI_SUM;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_reduce_local", "**mpi_reduce_local %p %p %d %D %O", s1, s2, i3, i4, i5 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_reduce_local %p %p %d %D %O" );
    }
    /** src/mpi/coll/scan.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_scan", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_scan" );
    {
    /** src/mpi/coll/scan.c */
    char s1[] = "pointer1";
    char s2[] = "pointer2";
    int i3 = 3;
    int i4 = MPI_INT;
    int i5 = MPI_SUM;
    int i6 = MPI_COMM_WORLD;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_scan", "**mpi_scan %p %p %d %D %O %C", s1, s2, i3, i4, i5, i6 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_scan %p %p %d %D %O %C" );
    }
    /** src/mpi/coll/scatter.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_scatter", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_scatter" );
    {
    /** src/mpi/coll/scatter.c */
    char s1[] = "pointer1";
    int i2 = 2;
    int i3 = MPI_INT;
    char s4[] = "pointer4";
    int i5 = 5;
    int i6 = MPI_INT;
    int i7 = 7;
    int i8 = MPI_COMM_WORLD;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_scatter", "**mpi_scatter %p %d %D %p %d %D %d %C", s1, i2, i3, s4, i5, i6, i7, i8 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_scatter %p %d %D %p %d %D %d %C" );
    }
    /** src/mpi/coll/scatterv.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_scatterv", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_scatterv" );
    {
    /** src/mpi/coll/scatterv.c */
    char s1[] = "pointer1";
    char s2[] = "pointer2";
    char s3[] = "pointer3";
    int i4 = MPI_INT;
    char s5[] = "pointer5";
    int i6 = 6;
    int i7 = MPI_INT;
    int i8 = 8;
    int i9 = MPI_COMM_WORLD;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_scatterv", "**mpi_scatterv %p %p %p %D %p %d %D %d %C", s1, s2, s3, i4, s5, i6, i7, i8, i9 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_scatterv %p %p %p %D %p %d %D %d %C" );
    }
    /** src/mpi/comm/comm_compare.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_comm_compare", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_comm_compare" );
    {
    /** src/mpi/comm/comm_compare.c */
    int i1 = MPI_COMM_WORLD;
    int i2 = MPI_COMM_WORLD;
    char s3[] = "pointer3";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_comm_compare", "**mpi_comm_compare %C %C %p", i1, i2, s3 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_comm_compare %C %C %p" );
    }
    /** src/mpi/comm/comm_create.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**groupnotincomm", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**groupnotincomm" );
    {
    /** src/mpi/comm/comm_create.c */
    int i1 = 1;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**groupnotincomm", "**groupnotincomm %d", i1 );
    ChkMsg( err, MPI_ERR_OTHER, "**groupnotincomm %d" );
    }
    /** src/mpi/comm/comm_create.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_comm_create", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_comm_create" );
    {
    /** src/mpi/comm/comm_create.c */
    int i1 = MPI_COMM_WORLD;
    int i2 = MPI_GROUP_NULL;
    char s3[] = "pointer3";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_comm_create", "**mpi_comm_create %C %G %p", i1, i2, s3 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_comm_create %C %G %p" );
    }
    /** src/mpi/comm/comm_create_group.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_comm_create_group", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_comm_create_group" );
    {
    /** src/mpi/comm/comm_create_group.c */
    int i1 = MPI_COMM_WORLD;
    int i2 = MPI_GROUP_NULL;
    int i3 = 3;
    char s4[] = "pointer4";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_comm_create_group", "**mpi_comm_create_group %C %G %d %p", i1, i2, i3, s4 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_comm_create_group %C %G %d %p" );
    }
    /** src/mpi/comm/comm_dup.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_comm_dup", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_comm_dup" );
    {
    /** src/mpi/comm/comm_dup.c */
    int i1 = MPI_COMM_WORLD;
    char s2[] = "pointer2";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_comm_dup", "**mpi_comm_dup %C %p", i1, s2 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_comm_dup %C %p" );
    }
    /** src/mpi/comm/comm_free.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**commperm", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**commperm" );
    {
    /** src/mpi/comm/comm_free.c */
    char s1[] = "string1";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**commperm", "**commperm %s", s1 );
    ChkMsg( err, MPI_ERR_OTHER, "**commperm %s" );
    }
    /** src/mpi/comm/comm_free.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_comm_free", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_comm_free" );
    {
    /** src/mpi/comm/comm_free.c */
    char s1[] = "pointer1";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_comm_free", "**mpi_comm_free %p", s1 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_comm_free %p" );
    }
    /** src/mpi/comm/comm_get_name.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_comm_get_name", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_comm_get_name" );
    {
    /** src/mpi/comm/comm_get_name.c */
    int i1 = MPI_COMM_WORLD;
    char s2[] = "pointer2";
    char s3[] = "pointer3";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_comm_get_name", "**mpi_comm_get_name %C %p %p", i1, s2, s3 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_comm_get_name %C %p %p" );
    }
    /** src/mpi/comm/comm_group.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_comm_group", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_comm_group" );
    {
    /** src/mpi/comm/comm_group.c */
    int i1 = MPI_COMM_WORLD;
    char s2[] = "pointer2";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_comm_group", "**mpi_comm_group %C %p", i1, s2 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_comm_group %C %p" );
    }
    /** src/mpi/comm/comm_group_failed.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_comm_group_failed", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_comm_group_failed" );
    {
    /** src/mpi/comm/comm_group_failed.c */
    int i1 = MPI_COMM_WORLD;
    char s2[] = "pointer2";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_comm_group_failed", "**mpi_comm_group_failed %C %p", i1, s2 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_comm_group_failed %C %p" );
    }
    /** src/mpi/comm/comm_idup.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpix_comm_idup", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpix_comm_idup" );
    {
    /** src/mpi/comm/comm_idup.c */
    int i1 = MPI_COMM_WORLD;
    char s2[] = "pointer2";
    char s3[] = "pointer3";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpix_comm_idup", "**mpix_comm_idup %C %p %p", i1, s2, s3 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpix_comm_idup %C %p %p" );
    }
    /** src/mpi/comm/comm_rank.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_comm_rank", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_comm_rank" );
    {
    /** src/mpi/comm/comm_rank.c */
    int i1 = MPI_COMM_WORLD;
    char s2[] = "pointer2";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_comm_rank", "**mpi_comm_rank %C %p", i1, s2 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_comm_rank %C %p" );
    }
    /** src/mpi/comm/comm_reenable_anysource.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_comm_reenable_anysource", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_comm_reenable_anysource" );
    {
    /** src/mpi/comm/comm_reenable_anysource.c */
    int i1 = MPI_COMM_WORLD;
    char s2[] = "pointer2";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_comm_reenable_anysource", "**mpi_comm_reenable_anysource %C %p", i1, s2 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_comm_reenable_anysource %C %p" );
    }
    /** src/mpi/comm/comm_remote_group.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**commnotinter", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**commnotinter" );
    /** src/mpi/comm/comm_remote_group.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_comm_remote_group", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_comm_remote_group" );
    {
    /** src/mpi/comm/comm_remote_group.c */
    int i1 = MPI_COMM_WORLD;
    char s2[] = "pointer2";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_comm_remote_group", "**mpi_comm_remote_group %C %p", i1, s2 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_comm_remote_group %C %p" );
    }
    /** src/mpi/comm/comm_remote_group_failed.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_comm_remote_group_failed", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_comm_remote_group_failed" );
    {
    /** src/mpi/comm/comm_remote_group_failed.c */
    int i1 = MPI_COMM_WORLD;
    char s2[] = "pointer2";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_comm_remote_group_failed", "**mpi_comm_remote_group_failed %C %p", i1, s2 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_comm_remote_group_failed %C %p" );
    }
    /** src/mpi/comm/comm_remote_size.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_comm_remote_size", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_comm_remote_size" );
    {
    /** src/mpi/comm/comm_remote_size.c */
    int i1 = MPI_COMM_WORLD;
    char s2[] = "pointer2";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_comm_remote_size", "**mpi_comm_remote_size %C %p", i1, s2 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_comm_remote_size %C %p" );
    }
    /** src/mpi/comm/comm_set_name.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_comm_set_name", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_comm_set_name" );
    {
    /** src/mpi/comm/comm_set_name.c */
    int i1 = MPI_COMM_WORLD;
    char s2[] = "string2";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_comm_set_name", "**mpi_comm_set_name %C %s", i1, s2 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_comm_set_name %C %s" );
    }
    /** src/mpi/comm/comm_size.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_comm_size", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_comm_size" );
    {
    /** src/mpi/comm/comm_size.c */
    int i1 = MPI_COMM_WORLD;
    char s2[] = "pointer2";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_comm_size", "**mpi_comm_size %C %p", i1, s2 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_comm_size %C %p" );
    }
    /** src/mpi/comm/comm_split.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_comm_split", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_comm_split" );
    {
    /** src/mpi/comm/comm_split.c */
    int i1 = MPI_COMM_WORLD;
    int i2 = 2;
    int i3 = 3;
    char s4[] = "pointer4";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_comm_split", "**mpi_comm_split %C %d %d %p", i1, i2, i3, s4 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_comm_split %C %d %d %p" );
    }
    /** src/mpi/comm/comm_test_inter.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_comm_test_inter", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_comm_test_inter" );
    {
    /** src/mpi/comm/comm_test_inter.c */
    int i1 = MPI_COMM_WORLD;
    char s2[] = "pointer2";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_comm_test_inter", "**mpi_comm_test_inter %C %p", i1, s2 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_comm_test_inter %C %p" );
    }
    /** src/mpi/comm/commutil.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**toomanycomm", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**toomanycomm" );
    /** src/mpi/comm/commutil.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**notsuppmultithread", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**notsuppmultithread" );
    /** src/mpi/comm/intercomm_create.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**dupprocesses", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**dupprocesses" );
    {
    /** src/mpi/comm/intercomm_create.c */
    int i1 = 1;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**dupprocesses", "**dupprocesses %d", i1 );
    ChkMsg( err, MPI_ERR_OTHER, "**dupprocesses %d" );
    }
    /** src/mpi/comm/intercomm_create.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**ranklocal", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**ranklocal" );
    {
    /** src/mpi/comm/intercomm_create.c */
    int i1 = 1;
    int i2 = 2;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**ranklocal", "**ranklocal %d %d", i1, i2 );
    ChkMsg( err, MPI_ERR_OTHER, "**ranklocal %d %d" );
    }
    /** src/mpi/comm/intercomm_create.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**rankremote", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**rankremote" );
    {
    /** src/mpi/comm/intercomm_create.c */
    int i1 = 1;
    int i2 = 2;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**rankremote", "**rankremote %d %d", i1, i2 );
    ChkMsg( err, MPI_ERR_OTHER, "**rankremote %d %d" );
    }
    /** src/mpi/comm/intercomm_create.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**ranksdistinct", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**ranksdistinct" );
    /** src/mpi/comm/intercomm_create.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_intercomm_create", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_intercomm_create" );
    {
    /** src/mpi/comm/intercomm_create.c */
    int i1 = MPI_COMM_WORLD;
    int i2 = 2;
    int i3 = MPI_COMM_WORLD;
    int i4 = 4;
    int i5 = 5;
    char s6[] = "pointer6";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_intercomm_create", "**mpi_intercomm_create %C %d %C %d %d %p", i1, i2, i3, i4, i5, s6 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_intercomm_create %C %d %C %d %d %p" );
    }
    /** src/mpi/comm/intercomm_merge.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**notsame", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**notsame" );
    {
    /** src/mpi/comm/intercomm_merge.c */
    char s1[] = "string1";
    char s2[] = "string2";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**notsame", "**notsame %s %s", s1, s2 );
    ChkMsg( err, MPI_ERR_OTHER, "**notsame %s %s" );
    }
    /** src/mpi/comm/intercomm_merge.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_intercomm_merge", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_intercomm_merge" );
    {
    /** src/mpi/comm/intercomm_merge.c */
    int i1 = MPI_COMM_WORLD;
    int i2 = 2;
    char s3[] = "pointer3";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_intercomm_merge", "**mpi_intercomm_merge %C %d %p", i1, i2, s3 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_intercomm_merge %C %d %p" );
    }
    /** src/mpi/datatype/address.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_address", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_address" );
    {
    /** src/mpi/datatype/address.c */
    char s1[] = "pointer1";
    char s2[] = "pointer2";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_address", "**mpi_address %p %p", s1, s2 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_address %p %p" );
    }
    /** src/mpi/datatype/get_address.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_get_address", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_get_address" );
    {
    /** src/mpi/datatype/get_address.c */
    char s1[] = "pointer1";
    char s2[] = "pointer2";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_get_address", "**mpi_get_address %p %p", s1, s2 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_get_address %p %p" );
    }
    /** src/mpi/datatype/get_count.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_get_count", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_get_count" );
    {
    /** src/mpi/datatype/get_count.c */
    char s1[] = "pointer1";
    int i2 = MPI_INT;
    char s3[] = "pointer3";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_get_count", "**mpi_get_count %p %D %p", s1, i2, s3 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_get_count %p %D %p" );
    }
    /** src/mpi/datatype/get_elements.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_get_elements", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_get_elements" );
    {
    /** src/mpi/datatype/get_elements.c */
    char s1[] = "pointer1";
    int i2 = MPI_INT;
    char s3[] = "pointer3";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_get_elements", "**mpi_get_elements %p %D %p", s1, i2, s3 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_get_elements %p %D %p" );
    }
    /** src/mpi/datatype/pack.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**argposneg", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**argposneg" );
    {
    /** src/mpi/datatype/pack.c */
    int i1 = 1;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**argposneg", "**argposneg %d", i1 );
    ChkMsg( err, MPI_ERR_OTHER, "**argposneg %d" );
    }
    /** src/mpi/datatype/pack.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**argneg", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**argneg" );
    {
    /** src/mpi/datatype/pack.c */
    char s1[] = "string1";
    int i2 = 2;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**argneg", "**argneg %s %d", s1, i2 );
    ChkMsg( err, MPI_ERR_OTHER, "**argneg %s %d" );
    }
    /** src/mpi/datatype/pack.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**argpackbuf", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**argpackbuf" );
    {
    /** src/mpi/datatype/pack.c */
    int i1 = 1;
    int i2 = 2;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**argpackbuf", "**argpackbuf %d %d", i1, i2 );
    ChkMsg( err, MPI_ERR_OTHER, "**argpackbuf %d %d" );
    }
    /** src/mpi/datatype/pack.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_pack", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_pack" );
    {
    /** src/mpi/datatype/pack.c */
    char s1[] = "pointer1";
    int i2 = 2;
    int i3 = MPI_INT;
    char s4[] = "pointer4";
    int i5 = 5;
    char s6[] = "pointer6";
    int i7 = MPI_COMM_WORLD;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_pack", "**mpi_pack %p %d %D %p %d %p %C", s1, i2, i3, s4, i5, s6, i7 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_pack %p %d %D %p %d %p %C" );
    }
    /** src/mpi/datatype/pack_external.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_pack_external", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_pack_external" );
    {
    /** src/mpi/datatype/pack_external.c */
    char s1[] = "string1";
    char s2[] = "pointer2";
    int i3 = 3;
    int i4 = MPI_INT;
    char s5[] = "pointer5";
    int i6 = 6;
    char s7[] = "pointer7";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_pack_external", "**mpi_pack_external %s %p %d %D %p %d %p", s1, s2, i3, i4, s5, i6, s7 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_pack_external %s %p %d %D %p %d %p" );
    }
    /** src/mpi/datatype/pack_external_size.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_pack_external_size", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_pack_external_size" );
    {
    /** src/mpi/datatype/pack_external_size.c */
    char s1[] = "string1";
    int i2 = 2;
    int i3 = MPI_INT;
    char s4[] = "pointer4";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_pack_external_size", "**mpi_pack_external_size %s %d %D %p", s1, i2, i3, s4 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_pack_external_size %s %d %D %p" );
    }
    /** src/mpi/datatype/pack_size.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_pack_size", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_pack_size" );
    {
    /** src/mpi/datatype/pack_size.c */
    int i1 = 1;
    int i2 = MPI_INT;
    int i3 = MPI_COMM_WORLD;
    char s4[] = "pointer4";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_pack_size", "**mpi_pack_size %d %D %C %p", i1, i2, i3, s4 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_pack_size %d %D %C %p" );
    }
    /** src/mpi/datatype/register_datarep.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**notimpl", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**notimpl" );
    /** src/mpi/datatype/register_datarep.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_register_datarep", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_register_datarep" );
    {
    /** src/mpi/datatype/register_datarep.c */
    char s1[] = "string1";
    char s2[] = "pointer2";
    char s3[] = "pointer3";
    char s4[] = "pointer4";
    char s5[] = "pointer5";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_register_datarep", "**mpi_register_datarep %s %p %p %p %p", s1, s2, s3, s4, s5 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_register_datarep %s %p %p %p %p" );
    }
    /** src/mpi/datatype/status_set_elements.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_status_set_elements", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_status_set_elements" );
    {
    /** src/mpi/datatype/status_set_elements.c */
    char s1[] = "pointer1";
    int i2 = MPI_INT;
    int i3 = 3;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_status_set_elements", "**mpi_status_set_elements %p %D %d", s1, i2, i3 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_status_set_elements %p %D %d" );
    }
    /** src/mpi/datatype/type_commit.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_type_commit", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_type_commit" );
    {
    /** src/mpi/datatype/type_commit.c */
    char s1[] = "pointer1";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_type_commit", "**mpi_type_commit %p", s1 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_type_commit %p" );
    }
    /** src/mpi/datatype/type_contiguous.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_type_contiguous", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_type_contiguous" );
    {
    /** src/mpi/datatype/type_contiguous.c */
    int i1 = 1;
    int i2 = MPI_INT;
    char s3[] = "pointer3";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_type_contiguous", "**mpi_type_contiguous %d %D %p", i1, i2, s3 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_type_contiguous %d %D %p" );
    }
    /** src/mpi/datatype/type_create_darray.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**darrayblock", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**darrayblock" );
    {
    /** src/mpi/datatype/type_create_darray.c */
    int i1 = 1;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**darrayblock", "**darrayblock %d", i1 );
    ChkMsg( err, MPI_ERR_OTHER, "**darrayblock %d" );
    }
    /** src/mpi/datatype/type_create_darray.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**darrayblock2", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**darrayblock2" );
    {
    /** src/mpi/datatype/type_create_darray.c */
    int i1 = 1;
    int i2 = 2;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**darrayblock2", "**darrayblock2 %d %d", i1, i2 );
    ChkMsg( err, MPI_ERR_OTHER, "**darrayblock2 %d %d" );
    }
    /** src/mpi/datatype/type_create_darray.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**darraycyclic", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**darraycyclic" );
    {
    /** src/mpi/datatype/type_create_darray.c */
    int i1 = 1;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**darraycyclic", "**darraycyclic %d", i1 );
    ChkMsg( err, MPI_ERR_OTHER, "**darraycyclic %d" );
    }
    /** src/mpi/datatype/type_create_darray.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**arg", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**arg" );
    {
    /** src/mpi/datatype/type_create_darray.c */
    char s1[] = "string1";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**arg", "**arg %s", s1 );
    ChkMsg( err, MPI_ERR_OTHER, "**arg %s" );
    }
    /** src/mpi/datatype/type_create_darray.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**darrayunknown", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**darrayunknown" );
    /** src/mpi/datatype/type_create_darray.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**darraydist", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**darraydist" );
    {
    /** src/mpi/datatype/type_create_darray.c */
    int i1 = 1;
    int i2 = 2;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**darraydist", "**darraydist %d %d", i1, i2 );
    ChkMsg( err, MPI_ERR_OTHER, "**darraydist %d %d" );
    }
    /** src/mpi/datatype/type_create_darray.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**darrayoverflow", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**darrayoverflow" );
    {
    /** src/mpi/datatype/type_create_darray.c */
    long long i1 = 1;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**darrayoverflow", "**darrayoverflow %L", i1 );
    ChkMsg( err, MPI_ERR_OTHER, "**darrayoverflow %L" );
    }
    /** src/mpi/datatype/type_create_darray.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_type_create_darray", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_type_create_darray" );
    {
    /** src/mpi/datatype/type_create_darray.c */
    int i1 = 1;
    int i2 = 2;
    int i3 = 3;
    char s4[] = "pointer4";
    char s5[] = "pointer5";
    char s6[] = "pointer6";
    char s7[] = "pointer7";
    int i8 = 8;
    int i9 = MPI_INT;
    char s10[] = "pointer10";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_type_create_darray", "**mpi_type_create_darray %d %d %d %p %p %p %p %d %D %p", i1, i2, i3, s4, s5, s6, s7, i8, i9, s10 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_type_create_darray %d %d %d %p %p %p %p %d %D %p" );
    }
    /** src/mpi/datatype/type_create_hindexed.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_type_create_hindexed", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_type_create_hindexed" );
    {
    /** src/mpi/datatype/type_create_hindexed.c */
    int i1 = 1;
    char s2[] = "pointer2";
    char s3[] = "pointer3";
    int i4 = MPI_INT;
    char s5[] = "pointer5";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_type_create_hindexed", "**mpi_type_create_hindexed %d %p %p %D %p", i1, s2, s3, i4, s5 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_type_create_hindexed %d %p %p %D %p" );
    }
    /** src/mpi/datatype/type_create_hindexed_block.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_type_create_hindexed_block", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_type_create_hindexed_block" );
    {
    /** src/mpi/datatype/type_create_hindexed_block.c */
    int i1 = 1;
    int i2 = 2;
    char s3[] = "pointer3";
    int i4 = MPI_INT;
    char s5[] = "pointer5";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_type_create_hindexed_block", "**mpi_type_create_hindexed_block %d %d %p %D %p", i1, i2, s3, i4, s5 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_type_create_hindexed_block %d %d %p %D %p" );
    }
    /** src/mpi/datatype/type_create_hvector.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_type_create_hvector", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_type_create_hvector" );
    {
    /** src/mpi/datatype/type_create_hvector.c */
    int i1 = 1;
    int i2 = 2;
    int i3 = 3;
    int i4 = MPI_INT;
    char s5[] = "pointer5";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_type_create_hvector", "**mpi_type_create_hvector %d %d %d %D %p", i1, i2, i3, i4, s5 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_type_create_hvector %d %d %d %D %p" );
    }
    /** src/mpi/datatype/type_create_indexed_block.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_type_create_indexed_block", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_type_create_indexed_block" );
    {
    /** src/mpi/datatype/type_create_indexed_block.c */
    int i1 = 1;
    int i2 = 2;
    char s3[] = "pointer3";
    int i4 = MPI_INT;
    char s5[] = "pointer5";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_type_create_indexed_block", "**mpi_type_create_indexed_block %d %d %p %D %p", i1, i2, s3, i4, s5 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_type_create_indexed_block %d %d %p %D %p" );
    }
    /** src/mpi/datatype/type_create_resized.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_type_create_resized", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_type_create_resized" );
    {
    /** src/mpi/datatype/type_create_resized.c */
    int i1 = MPI_INT;
    long long i2 = 2;
    long long i3 = 3;
    char s4[] = "pointer4";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_type_create_resized", "**mpi_type_create_resized %D %L %L %p", i1, i2, i3, s4 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_type_create_resized %D %L %L %p" );
    }
    /** src/mpi/datatype/type_create_struct.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_type_create_struct", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_type_create_struct" );
    {
    /** src/mpi/datatype/type_create_struct.c */
    int i1 = 1;
    char s2[] = "pointer2";
    char s3[] = "pointer3";
    char s4[] = "pointer4";
    char s5[] = "pointer5";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_type_create_struct", "**mpi_type_create_struct %d %p %p %p %p", i1, s2, s3, s4, s5 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_type_create_struct %d %p %p %p %p" );
    }
    /** src/mpi/datatype/type_create_subarray.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**argrange", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**argrange" );
    {
    /** src/mpi/datatype/type_create_subarray.c */
    char s1[] = "string1";
    int i2 = 2;
    int i3 = 3;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**argrange", "**argrange %s %d %d", s1, i2, i3 );
    ChkMsg( err, MPI_ERR_OTHER, "**argrange %s %d %d" );
    }
    /** src/mpi/datatype/type_create_subarray.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**subarrayoflow", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**subarrayoflow" );
    {
    /** src/mpi/datatype/type_create_subarray.c */
    long long i1 = 1;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**subarrayoflow", "**subarrayoflow %L", i1 );
    ChkMsg( err, MPI_ERR_OTHER, "**subarrayoflow %L" );
    }
    /** src/mpi/datatype/type_create_subarray.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_type_create_subarray", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_type_create_subarray" );
    {
    /** src/mpi/datatype/type_create_subarray.c */
    int i1 = 1;
    char s2[] = "pointer2";
    char s3[] = "pointer3";
    char s4[] = "pointer4";
    int i5 = 5;
    int i6 = MPI_INT;
    char s7[] = "pointer7";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_type_create_subarray", "**mpi_type_create_subarray %d %p %p %p %d %D %p", i1, s2, s3, s4, i5, i6, s7 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_type_create_subarray %d %p %p %p %d %D %p" );
    }
    /** src/mpi/datatype/type_dup.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_type_dup", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_type_dup" );
    {
    /** src/mpi/datatype/type_dup.c */
    int i1 = MPI_INT;
    char s2[] = "pointer2";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_type_dup", "**mpi_type_dup %D %p", i1, s2 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_type_dup %D %p" );
    }
    /** src/mpi/datatype/type_extent.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_type_extent", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_type_extent" );
    {
    /** src/mpi/datatype/type_extent.c */
    int i1 = MPI_INT;
    char s2[] = "pointer2";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_type_extent", "**mpi_type_extent %D %p", i1, s2 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_type_extent %D %p" );
    }
    /** src/mpi/datatype/type_free.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**dtypeperm", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**dtypeperm" );
    /** src/mpi/datatype/type_free.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_type_free", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_type_free" );
    {
    /** src/mpi/datatype/type_free.c */
    char s1[] = "pointer1";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_type_free", "**mpi_type_free %p", s1 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_type_free %p" );
    }
    /** src/mpi/datatype/type_get_contents.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**contentspredef", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**contentspredef" );
    /** src/mpi/datatype/type_get_contents.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_type_get_contents", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_type_get_contents" );
    {
    /** src/mpi/datatype/type_get_contents.c */
    int i1 = MPI_INT;
    int i2 = 2;
    int i3 = 3;
    int i4 = 4;
    char s5[] = "pointer5";
    char s6[] = "pointer6";
    char s7[] = "pointer7";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_type_get_contents", "**mpi_type_get_contents %D %d %d %d %p %p %p", i1, i2, i3, i4, s5, s6, s7 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_type_get_contents %D %d %d %d %p %p %p" );
    }
    /** src/mpi/datatype/type_get_envelope.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_type_get_envelope", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_type_get_envelope" );
    {
    /** src/mpi/datatype/type_get_envelope.c */
    int i1 = MPI_INT;
    char s2[] = "pointer2";
    char s3[] = "pointer3";
    char s4[] = "pointer4";
    char s5[] = "pointer5";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_type_get_envelope", "**mpi_type_get_envelope %D %p %p %p %p", i1, s2, s3, s4, s5 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_type_get_envelope %D %p %p %p %p" );
    }
    /** src/mpi/datatype/type_get_extent.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_type_get_extent", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_type_get_extent" );
    {
    /** src/mpi/datatype/type_get_extent.c */
    int i1 = MPI_INT;
    char s2[] = "pointer2";
    char s3[] = "pointer3";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_type_get_extent", "**mpi_type_get_extent %D %p %p", i1, s2, s3 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_type_get_extent %D %p %p" );
    }
    /** src/mpi/datatype/type_get_name.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**typeinitbadmem", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**typeinitbadmem" );
    {
    /** src/mpi/datatype/type_get_name.c */
    int i1 = 1;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**typeinitbadmem", "**typeinitbadmem %d", i1 );
    ChkMsg( err, MPI_ERR_OTHER, "**typeinitbadmem %d" );
    }
    /** src/mpi/datatype/type_get_name.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**typeinitfail", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**typeinitfail" );
    {
    /** src/mpi/datatype/type_get_name.c */
    int i1 = 1;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**typeinitfail", "**typeinitfail %d", i1 );
    ChkMsg( err, MPI_ERR_OTHER, "**typeinitfail %d" );
    }
    /** src/mpi/datatype/type_get_name.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**typeinitminmaxloc", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**typeinitminmaxloc" );
    /** src/mpi/datatype/type_get_name.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_type_get_name", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_type_get_name" );
    {
    /** src/mpi/datatype/type_get_name.c */
    int i1 = MPI_INT;
    char s2[] = "pointer2";
    char s3[] = "pointer3";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_type_get_name", "**mpi_type_get_name %D %p %p", i1, s2, s3 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_type_get_name %D %p %p" );
    }
    /** src/mpi/datatype/type_get_true_extent.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_type_get_true_extent", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_type_get_true_extent" );
    {
    /** src/mpi/datatype/type_get_true_extent.c */
    int i1 = MPI_INT;
    char s2[] = "pointer2";
    char s3[] = "pointer3";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_type_get_true_extent", "**mpi_type_get_true_extent %D %p %p", i1, s2, s3 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_type_get_true_extent %D %p %p" );
    }
    /** src/mpi/datatype/type_hindexed.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_type_hindexed", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_type_hindexed" );
    {
    /** src/mpi/datatype/type_hindexed.c */
    int i1 = 1;
    char s2[] = "pointer2";
    char s3[] = "pointer3";
    int i4 = MPI_INT;
    char s5[] = "pointer5";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_type_hindexed", "**mpi_type_hindexed %d %p %p %D %p", i1, s2, s3, i4, s5 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_type_hindexed %d %p %p %D %p" );
    }
    /** src/mpi/datatype/type_hvector.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_type_hvector", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_type_hvector" );
    {
    /** src/mpi/datatype/type_hvector.c */
    int i1 = 1;
    int i2 = 2;
    int i3 = 3;
    int i4 = MPI_INT;
    char s5[] = "pointer5";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_type_hvector", "**mpi_type_hvector %d %d %d %D %p", i1, i2, i3, i4, s5 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_type_hvector %d %d %d %D %p" );
    }
    /** src/mpi/datatype/type_indexed.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_type_indexed", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_type_indexed" );
    {
    /** src/mpi/datatype/type_indexed.c */
    int i1 = 1;
    char s2[] = "pointer2";
    char s3[] = "pointer3";
    int i4 = MPI_INT;
    char s5[] = "pointer5";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_type_indexed", "**mpi_type_indexed %d %p %p %D %p", i1, s2, s3, i4, s5 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_type_indexed %d %p %p %D %p" );
    }
    /** src/mpi/datatype/type_lb.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_type_lb", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_type_lb" );
    {
    /** src/mpi/datatype/type_lb.c */
    int i1 = MPI_INT;
    char s2[] = "pointer2";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_type_lb", "**mpi_type_lb %D %p", i1, s2 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_type_lb %D %p" );
    }
    /** src/mpi/datatype/type_match_size.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**typematchnoclass", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**typematchnoclass" );
    /** src/mpi/datatype/type_match_size.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**typematchsize", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**typematchsize" );
    {
    /** src/mpi/datatype/type_match_size.c */
    char s1[] = "string1";
    int i2 = 2;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**typematchsize", "**typematchsize %s %d", s1, i2 );
    ChkMsg( err, MPI_ERR_OTHER, "**typematchsize %s %d" );
    }
    /** src/mpi/datatype/type_match_size.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_type_match_size", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_type_match_size" );
    {
    /** src/mpi/datatype/type_match_size.c */
    int i1 = 1;
    int i2 = 2;
    char s3[] = "pointer3";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_type_match_size", "**mpi_type_match_size %d %d %p", i1, i2, s3 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_type_match_size %d %d %p" );
    }
    /** src/mpi/datatype/type_set_name.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**typenamelen", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**typenamelen" );
    {
    /** src/mpi/datatype/type_set_name.c */
    int i1 = 1;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**typenamelen", "**typenamelen %d", i1 );
    ChkMsg( err, MPI_ERR_OTHER, "**typenamelen %d" );
    }
    /** src/mpi/datatype/type_set_name.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_type_set_name", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_type_set_name" );
    {
    /** src/mpi/datatype/type_set_name.c */
    int i1 = MPI_INT;
    char s2[] = "string2";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_type_set_name", "**mpi_type_set_name %D %s", i1, s2 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_type_set_name %D %s" );
    }
    /** src/mpi/datatype/type_size.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_type_size", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_type_size" );
    {
    /** src/mpi/datatype/type_size.c */
    int i1 = MPI_INT;
    char s2[] = "pointer2";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_type_size", "**mpi_type_size %D %p", i1, s2 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_type_size %D %p" );
    }
    /** src/mpi/datatype/type_struct.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_type_struct", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_type_struct" );
    {
    /** src/mpi/datatype/type_struct.c */
    int i1 = 1;
    char s2[] = "pointer2";
    char s3[] = "pointer3";
    char s4[] = "pointer4";
    char s5[] = "pointer5";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_type_struct", "**mpi_type_struct %d %p %p %p %p", i1, s2, s3, s4, s5 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_type_struct %d %p %p %p %p" );
    }
    /** src/mpi/datatype/type_ub.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_type_ub", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_type_ub" );
    {
    /** src/mpi/datatype/type_ub.c */
    int i1 = MPI_INT;
    char s2[] = "pointer2";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_type_ub", "**mpi_type_ub %D %p", i1, s2 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_type_ub %D %p" );
    }
    /** src/mpi/datatype/type_vector.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_type_vector", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_type_vector" );
    {
    /** src/mpi/datatype/type_vector.c */
    int i1 = 1;
    int i2 = 2;
    int i3 = 3;
    int i4 = MPI_INT;
    char s5[] = "pointer5";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_type_vector", "**mpi_type_vector %d %d %d %D %p", i1, i2, i3, i4, s5 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_type_vector %d %d %d %D %p" );
    }
    {
    /** src/mpi/datatype/typeutil.c */
    char s1[] = "string1";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**fail", "**fail %s", s1 );
    ChkMsg( err, MPI_ERR_OTHER, "**fail %s" );
    }
    /** src/mpi/datatype/unpack.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_unpack", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_unpack" );
    {
    /** src/mpi/datatype/unpack.c */
    char s1[] = "pointer1";
    int i2 = 2;
    char s3[] = "pointer3";
    char s4[] = "pointer4";
    int i5 = 5;
    int i6 = MPI_INT;
    int i7 = MPI_COMM_WORLD;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_unpack", "**mpi_unpack %p %d %p %p %d %D %C", s1, i2, s3, s4, i5, i6, i7 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_unpack %p %d %p %p %d %D %C" );
    }
    /** src/mpi/datatype/unpack_external.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_unpack_external", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_unpack_external" );
    {
    /** src/mpi/datatype/unpack_external.c */
    char s1[] = "string1";
    char s2[] = "pointer2";
    int i3 = 3;
    char s4[] = "pointer4";
    char s5[] = "pointer5";
    int i6 = 6;
    int i7 = MPI_INT;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_unpack_external", "**mpi_unpack_external %s %p %d %p %p %d %D", s1, s2, i3, s4, s5, i6, i7 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_unpack_external %s %p %d %p %p %d %D" );
    }
    /** src/mpi/errhan/add_error_class.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**noerrclasses", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**noerrclasses" );
    /** src/mpi/errhan/add_error_class.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_add_error_class", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_add_error_class" );
    {
    /** src/mpi/errhan/add_error_class.c */
    char s1[] = "pointer1";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_add_error_class", "**mpi_add_error_class %p", s1 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_add_error_class %p" );
    }
    /** src/mpi/errhan/add_error_code.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**noerrcodes", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**noerrcodes" );
    /** src/mpi/errhan/add_error_code.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_add_error_code", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_add_error_code" );
    {
    /** src/mpi/errhan/add_error_code.c */
    int i1 = 1;
    char s2[] = "pointer2";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_add_error_code", "**mpi_add_error_code %d %p", i1, s2 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_add_error_code %d %p" );
    }
    /** src/mpi/errhan/add_error_string.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_add_error_string", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_add_error_string" );
    {
    /** src/mpi/errhan/add_error_string.c */
    int i1 = 1;
    char s2[] = "string2";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_add_error_string", "**mpi_add_error_string %d %s", i1, s2 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_add_error_string %d %s" );
    }
    /** src/mpi/errhan/comm_call_errhandler.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_comm_call_errhandler", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_comm_call_errhandler" );
    {
    /** src/mpi/errhan/comm_call_errhandler.c */
    int i1 = MPI_COMM_WORLD;
    int i2 = 2;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_comm_call_errhandler", "**mpi_comm_call_errhandler %C %d", i1, i2 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_comm_call_errhandler %C %d" );
    }
    /** src/mpi/errhan/comm_create_errhandler.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_comm_create_errhandler", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_comm_create_errhandler" );
    {
    /** src/mpi/errhan/comm_create_errhandler.c */
    char s1[] = "pointer1";
    char s2[] = "pointer2";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_comm_create_errhandler", "**mpi_comm_create_errhandler %p %p", s1, s2 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_comm_create_errhandler %p %p" );
    }
    /** src/mpi/errhan/comm_get_errhandler.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_comm_get_errhandler", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_comm_get_errhandler" );
    {
    /** src/mpi/errhan/comm_get_errhandler.c */
    int i1 = MPI_COMM_WORLD;
    char s2[] = "pointer2";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_comm_get_errhandler", "**mpi_comm_get_errhandler %C %p", i1, s2 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_comm_get_errhandler %C %p" );
    }
    /** src/mpi/errhan/comm_set_errhandler.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_comm_set_errhandler", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_comm_set_errhandler" );
    {
    /** src/mpi/errhan/comm_set_errhandler.c */
    int i1 = MPI_COMM_WORLD;
    int i2 = MPI_ERRORS_RETURN;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_comm_set_errhandler", "**mpi_comm_set_errhandler %C %E", i1, i2 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_comm_set_errhandler %C %E" );
    }
    /** src/mpi/errhan/dynerrutil.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**argerrcode", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**argerrcode" );
    {
    /** src/mpi/errhan/dynerrutil.c */
    int i1 = 1;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**argerrcode", "**argerrcode %d", i1 );
    ChkMsg( err, MPI_ERR_OTHER, "**argerrcode %d" );
    }
    {
    /** src/mpi/errhan/dynerrutil.c */
    char s1[] = "string1";
    int i2 = 2;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**nomem", "**nomem %s %d", s1, i2 );
    ChkMsg( err, MPI_ERR_OTHER, "**nomem %s %d" );
    }
    /** src/mpi/errhan/errhandler_create.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_errhandler_create", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_errhandler_create" );
    {
    /** src/mpi/errhan/errhandler_create.c */
    char s1[] = "pointer1";
    char s2[] = "pointer2";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_errhandler_create", "**mpi_errhandler_create %p %p", s1, s2 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_errhandler_create %p %p" );
    }
    /** src/mpi/errhan/errhandler_free.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_errhandler_free", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_errhandler_free" );
    {
    /** src/mpi/errhan/errhandler_free.c */
    char s1[] = "pointer1";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_errhandler_free", "**mpi_errhandler_free %p", s1 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_errhandler_free %p" );
    }
    /** src/mpi/errhan/errhandler_get.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_errhandler_get", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_errhandler_get" );
    {
    /** src/mpi/errhan/errhandler_get.c */
    int i1 = MPI_COMM_WORLD;
    char s2[] = "pointer2";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_errhandler_get", "**mpi_errhandler_get %C %p", i1, s2 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_errhandler_get %C %p" );
    }
    /** src/mpi/errhan/errhandler_set.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_errhandler_set", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_errhandler_set" );
    {
    /** src/mpi/errhan/errhandler_set.c */
    int i1 = MPI_COMM_WORLD;
    int i2 = MPI_ERRORS_RETURN;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_errhandler_set", "**mpi_errhandler_set %C %E", i1, i2 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_errhandler_set %C %E" );
    }
    /** src/mpi/errhan/error_class.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_error_class", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_error_class" );
    {
    /** src/mpi/errhan/error_class.c */
    int i1 = 1;
    char s2[] = "pointer2";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_error_class", "**mpi_error_class %d %p", i1, s2 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_error_class %d %p" );
    }
    /** src/mpi/errhan/error_string.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_error_string", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_error_string" );
    {
    /** src/mpi/errhan/error_string.c */
    int i1 = 1;
    char s2[] = "string2";
    char s3[] = "pointer3";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_error_string", "**mpi_error_string %d %s %p", i1, s2, s3 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_error_string %d %s %p" );
    }
    /** src/mpi/errhan/file_create_errhandler.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_file_create_errhandler", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_file_create_errhandler" );
    {
    /** src/mpi/errhan/file_create_errhandler.c */
    char s1[] = "pointer1";
    char s2[] = "pointer2";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_file_create_errhandler", "**mpi_file_create_errhandler %p %p", s1, s2 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_file_create_errhandler %p %p" );
    }
    /** src/mpi/errhan/file_get_errhandler.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_file_get_errhandler", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_file_get_errhandler" );
    {
    /** src/mpi/errhan/file_get_errhandler.c */
    MPI_File i1 = MPI_FILE_NULL;
    char s2[] = "pointer2";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_file_get_errhandler", "**mpi_file_get_errhandler %F %p", i1, s2 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_file_get_errhandler %F %p" );
    }
    /** src/mpi/errhan/file_set_errhandler.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**errhandnotfile", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**errhandnotfile" );
    /** src/mpi/errhan/file_set_errhandler.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_file_set_errhandler", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_file_set_errhandler" );
    {
    /** src/mpi/errhan/file_set_errhandler.c */
    MPI_File i1 = MPI_FILE_NULL;
    int i2 = MPI_ERRORS_RETURN;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_file_set_errhandler", "**mpi_file_set_errhandler %F %E", i1, i2 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_file_set_errhandler %F %E" );
    }
    /** src/mpi/errhan/win_call_errhandler.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_win_call_errhandler", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_win_call_errhandler" );
    {
    /** src/mpi/errhan/win_call_errhandler.c */
    int i1 = MPI_WIN_NULL;
    int i2 = 2;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_win_call_errhandler", "**mpi_win_call_errhandler %W %d", i1, i2 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_win_call_errhandler %W %d" );
    }
    /** src/mpi/errhan/win_create_errhandler.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_win_create_errhandler", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_win_create_errhandler" );
    {
    /** src/mpi/errhan/win_create_errhandler.c */
    char s1[] = "pointer1";
    char s2[] = "pointer2";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_win_create_errhandler", "**mpi_win_create_errhandler %p %p", s1, s2 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_win_create_errhandler %p %p" );
    }
    /** src/mpi/errhan/win_get_errhandler.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_win_get_errhandler", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_win_get_errhandler" );
    {
    /** src/mpi/errhan/win_get_errhandler.c */
    int i1 = MPI_WIN_NULL;
    char s2[] = "pointer2";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_win_get_errhandler", "**mpi_win_get_errhandler %W %p", i1, s2 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_win_get_errhandler %W %p" );
    }
    /** src/mpi/errhan/win_set_errhandler.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**errhandnotwin", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**errhandnotwin" );
    /** src/mpi/errhan/win_set_errhandler.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_win_set_errhandler", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_win_set_errhandler" );
    {
    /** src/mpi/errhan/win_set_errhandler.c */
    int i1 = MPI_WIN_NULL;
    int i2 = MPI_ERRORS_RETURN;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_win_set_errhandler", "**mpi_win_set_errhandler %W %E", i1, i2 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_win_set_errhandler %W %E" );
    }
    /** src/mpi/group/group_compare.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_group_compare", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_group_compare" );
    {
    /** src/mpi/group/group_compare.c */
    int i1 = MPI_GROUP_NULL;
    int i2 = MPI_GROUP_NULL;
    char s3[] = "pointer3";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_group_compare", "**mpi_group_compare %G %G %p", i1, i2, s3 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_group_compare %G %G %p" );
    }
    /** src/mpi/group/group_difference.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_group_difference", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_group_difference" );
    {
    /** src/mpi/group/group_difference.c */
    int i1 = MPI_GROUP_NULL;
    int i2 = MPI_GROUP_NULL;
    char s3[] = "pointer3";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_group_difference", "**mpi_group_difference %G %G %p", i1, i2, s3 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_group_difference %G %G %p" );
    }
    /** src/mpi/group/group_excl.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_group_excl", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_group_excl" );
    {
    /** src/mpi/group/group_excl.c */
    int i1 = MPI_GROUP_NULL;
    int i2 = 2;
    char s3[] = "pointer3";
    char s4[] = "pointer4";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_group_excl", "**mpi_group_excl %G %d %p %p", i1, i2, s3, s4 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_group_excl %G %d %p %p" );
    }
    /** src/mpi/group/group_free.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**groupperm", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**groupperm" );
    /** src/mpi/group/group_free.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_group_free", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_group_free" );
    {
    /** src/mpi/group/group_free.c */
    char s1[] = "pointer1";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_group_free", "**mpi_group_free %p", s1 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_group_free %p" );
    }
    /** src/mpi/group/group_incl.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_group_incl", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_group_incl" );
    {
    /** src/mpi/group/group_incl.c */
    int i1 = MPI_GROUP_NULL;
    int i2 = 2;
    char s3[] = "pointer3";
    char s4[] = "pointer4";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_group_incl", "**mpi_group_incl %G %d %p %p", i1, i2, s3, s4 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_group_incl %G %d %p %p" );
    }
    /** src/mpi/group/group_intersection.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_group_intersection", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_group_intersection" );
    {
    /** src/mpi/group/group_intersection.c */
    int i1 = MPI_GROUP_NULL;
    int i2 = MPI_GROUP_NULL;
    char s3[] = "pointer3";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_group_intersection", "**mpi_group_intersection %G %G %p", i1, i2, s3 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_group_intersection %G %G %p" );
    }
    /** src/mpi/group/group_range_excl.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_group_range_excl", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_group_range_excl" );
    {
    /** src/mpi/group/group_range_excl.c */
    int i1 = MPI_GROUP_NULL;
    int i2 = 2;
    char s3[] = "pointer3";
    char s4[] = "pointer4";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_group_range_excl", "**mpi_group_range_excl %G %d %p %p", i1, i2, s3, s4 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_group_range_excl %G %d %p %p" );
    }
    /** src/mpi/group/group_range_incl.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_group_range_incl", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_group_range_incl" );
    {
    /** src/mpi/group/group_range_incl.c */
    int i1 = MPI_GROUP_NULL;
    int i2 = 2;
    char s3[] = "pointer3";
    char s4[] = "pointer4";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_group_range_incl", "**mpi_group_range_incl %G %d %p %p", i1, i2, s3, s4 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_group_range_incl %G %d %p %p" );
    }
    /** src/mpi/group/group_rank.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_group_rank", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_group_rank" );
    {
    /** src/mpi/group/group_rank.c */
    int i1 = MPI_GROUP_NULL;
    char s2[] = "pointer2";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_group_rank", "**mpi_group_rank %G %p", i1, s2 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_group_rank %G %p" );
    }
    /** src/mpi/group/group_size.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_group_size", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_group_size" );
    {
    /** src/mpi/group/group_size.c */
    int i1 = MPI_GROUP_NULL;
    char s2[] = "pointer2";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_group_size", "**mpi_group_size %G %p", i1, s2 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_group_size %G %p" );
    }
    {
    /** src/mpi/group/group_translate_ranks.c */
    int i1 = 1;
    int i2 = 2;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**rank", "**rank %d %d", i1, i2 );
    ChkMsg( err, MPI_ERR_OTHER, "**rank %d %d" );
    }
    /** src/mpi/group/group_translate_ranks.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_group_translate_ranks", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_group_translate_ranks" );
    {
    /** src/mpi/group/group_translate_ranks.c */
    int i1 = MPI_GROUP_NULL;
    int i2 = 2;
    char s3[] = "pointer3";
    int i4 = MPI_GROUP_NULL;
    char s5[] = "pointer5";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_group_translate_ranks", "**mpi_group_translate_ranks %G %d %p %G %p", i1, i2, s3, i4, s5 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_group_translate_ranks %G %d %p %G %p" );
    }
    /** src/mpi/group/group_union.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_group_union", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_group_union" );
    {
    /** src/mpi/group/group_union.c */
    int i1 = MPI_GROUP_NULL;
    int i2 = MPI_GROUP_NULL;
    char s3[] = "pointer3";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_group_union", "**mpi_group_union %G %G %p", i1, i2, s3 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_group_union %G %G %p" );
    }
    /** src/mpi/group/grouputil.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**rankarray", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**rankarray" );
    {
    /** src/mpi/group/grouputil.c */
    int i1 = 1;
    int i2 = 2;
    int i3 = 3;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**rankarray", "**rankarray %d %d %d", i1, i2, i3 );
    ChkMsg( err, MPI_ERR_OTHER, "**rankarray %d %d %d" );
    }
    /** src/mpi/group/grouputil.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**rankdup", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**rankdup" );
    {
    /** src/mpi/group/grouputil.c */
    int i1 = 1;
    int i2 = 2;
    int i3 = 3;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**rankdup", "**rankdup %d %d %d", i1, i2, i3 );
    ChkMsg( err, MPI_ERR_OTHER, "**rankdup %d %d %d" );
    }
    /** src/mpi/group/grouputil.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**rangestartinvalid", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**rangestartinvalid" );
    {
    /** src/mpi/group/grouputil.c */
    int i1 = 1;
    int i2 = 2;
    int i3 = 3;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**rangestartinvalid", "**rangestartinvalid %d %d %d", i1, i2, i3 );
    ChkMsg( err, MPI_ERR_OTHER, "**rangestartinvalid %d %d %d" );
    }
    /** src/mpi/group/grouputil.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**stridezero", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**stridezero" );
    /** src/mpi/group/grouputil.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**rangeendinvalid", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**rangeendinvalid" );
    {
    /** src/mpi/group/grouputil.c */
    int i1 = 1;
    int i2 = 2;
    int i3 = 3;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**rangeendinvalid", "**rangeendinvalid %d %d %d", i1, i2, i3 );
    ChkMsg( err, MPI_ERR_OTHER, "**rangeendinvalid %d %d %d" );
    }
    /** src/mpi/group/grouputil.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**stride", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**stride" );
    {
    /** src/mpi/group/grouputil.c */
    int i1 = 1;
    int i2 = 2;
    int i3 = 3;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**stride", "**stride %d %d %d", i1, i2, i3 );
    ChkMsg( err, MPI_ERR_OTHER, "**stride %d %d %d" );
    }
    /** src/mpi/group/grouputil.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**rangedup", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**rangedup" );
    {
    /** src/mpi/group/grouputil.c */
    int i1 = 1;
    int i2 = 2;
    int i3 = 3;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**rangedup", "**rangedup %d %d %d", i1, i2, i3 );
    ChkMsg( err, MPI_ERR_OTHER, "**rangedup %d %d %d" );
    }
    /** src/mpi/init/abort.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_abort", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_abort" );
    {
    /** src/mpi/init/abort.c */
    int i1 = MPI_COMM_WORLD;
    int i2 = 2;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_abort", "**mpi_abort %C %d", i1, i2 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_abort %C %d" );
    }
    /** src/mpi/init/async.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**cond_create", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**cond_create" );
    {
    /** src/mpi/init/async.c */
    char s1[] = "string1";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**cond_create", "**cond_create %s", s1 );
    ChkMsg( err, MPI_ERR_OTHER, "**cond_create %s" );
    }
    /** src/mpi/init/async.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mutex_create", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mutex_create" );
    {
    /** src/mpi/init/async.c */
    char s1[] = "string1";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mutex_create", "**mutex_create %s", s1 );
    ChkMsg( err, MPI_ERR_OTHER, "**mutex_create %s" );
    }
    /** src/mpi/init/finalize.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_finalize", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_finalize" );
    /** src/mpi/init/finalized.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_finalized", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_finalized" );
    {
    /** src/mpi/init/finalized.c */
    char s1[] = "pointer1";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_finalized", "**mpi_finalized %p", s1 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_finalized %p" );
    }
    /** src/mpi/init/init.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**inittwice", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**inittwice" );
    /** src/mpi/init/init.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_init", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_init" );
    {
    /** src/mpi/init/init.c */
    char s1[] = "pointer1";
    char s2[] = "pointer2";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_init", "**mpi_init %p %p", s1, s2 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_init %p %p" );
    }
    /** src/mpi/init/initialized.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_initialized", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_initialized" );
    {
    /** src/mpi/init/initialized.c */
    char s1[] = "pointer1";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_initialized", "**mpi_initialized %p", s1 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_initialized %p" );
    }
    /** src/mpi/init/initthread.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_init_thread", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_init_thread" );
    {
    /** src/mpi/init/initthread.c */
    char s1[] = "pointer1";
    char s2[] = "pointer2";
    int i3 = 3;
    char s4[] = "pointer4";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_init_thread", "**mpi_init_thread %p %p %d %p", s1, s2, i3, s4 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_init_thread %p %p %d %p" );
    }
    /** src/mpi/init/ismain.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_is_thread_main", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_is_thread_main" );
    {
    /** src/mpi/init/ismain.c */
    char s1[] = "pointer1";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_is_thread_main", "**mpi_is_thread_main %p", s1 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_is_thread_main %p" );
    }
    /** src/mpi/init/querythread.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_query_thread", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_query_thread" );
    {
    /** src/mpi/init/querythread.c */
    char s1[] = "pointer1";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_query_thread", "**mpi_query_thread %p", s1 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_query_thread %p" );
    }
    /** src/mpi/misc/getpname.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_get_processor_name", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_get_processor_name" );
    {
    /** src/mpi/misc/getpname.c */
    char s1[] = "pointer1";
    char s2[] = "pointer2";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_get_processor_name", "**mpi_get_processor_name %p %p", s1, s2 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_get_processor_name %p %p" );
    }
    /** src/mpi/misc/version.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_get_version", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_get_version" );
    {
    /** src/mpi/misc/version.c */
    char s1[] = "pointer1";
    char s2[] = "pointer2";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_get_version", "**mpi_get_version %p %p", s1, s2 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_get_version %p %p" );
    }
    /** src/mpi/pt2pt/bsend.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_bsend", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_bsend" );
    {
    /** src/mpi/pt2pt/bsend.c */
    char s1[] = "pointer1";
    int i2 = 2;
    int i3 = MPI_INT;
    int i4 = 4;
    int i5 = 5;
    int i6 = MPI_COMM_WORLD;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_bsend", "**mpi_bsend %p %d %D %i %t %C", s1, i2, i3, i4, i5, i6 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_bsend %p %d %D %i %t %C" );
    }
    /** src/mpi/pt2pt/bsend_init.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_bsend_init", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_bsend_init" );
    {
    /** src/mpi/pt2pt/bsend_init.c */
    char s1[] = "pointer1";
    int i2 = 2;
    int i3 = MPI_INT;
    int i4 = 4;
    int i5 = 5;
    int i6 = MPI_COMM_WORLD;
    char s7[] = "pointer7";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_bsend_init", "**mpi_bsend_init %p %d %D %i %t %C %p", s1, i2, i3, i4, i5, i6, s7 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_bsend_init %p %d %D %i %t %C %p" );
    }
    /** src/mpi/pt2pt/bsendutil.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**bufexists", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**bufexists" );
    /** src/mpi/pt2pt/bsendutil.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**bsendbufsmall", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**bsendbufsmall" );
    {
    /** src/mpi/pt2pt/bsendutil.c */
    int i1 = 1;
    int i2 = 2;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**bsendbufsmall", "**bsendbufsmall %d %d", i1, i2 );
    ChkMsg( err, MPI_ERR_OTHER, "**bsendbufsmall %d %d" );
    }
    /** src/mpi/pt2pt/bsendutil.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**bsendpending", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**bsendpending" );
    /** src/mpi/pt2pt/bsendutil.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**bufbsend", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**bufbsend" );
    {
    /** src/mpi/pt2pt/bsendutil.c */
    int i1 = 1;
    int i2 = 2;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**bufbsend", "**bufbsend %d %d", i1, i2 );
    ChkMsg( err, MPI_ERR_OTHER, "**bufbsend %d %d" );
    }
    /** src/mpi/pt2pt/bufattach.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_buffer_attach", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_buffer_attach" );
    {
    /** src/mpi/pt2pt/bufattach.c */
    char s1[] = "pointer1";
    int i2 = 2;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_buffer_attach", "**mpi_buffer_attach %p %d", s1, i2 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_buffer_attach %p %d" );
    }
    /** src/mpi/pt2pt/buffree.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_buffer_detach", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_buffer_detach" );
    {
    /** src/mpi/pt2pt/buffree.c */
    char s1[] = "pointer1";
    char s2[] = "pointer2";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_buffer_detach", "**mpi_buffer_detach %p %p", s1, s2 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_buffer_detach %p %p" );
    }
    /** src/mpi/pt2pt/cancel.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**requestpersistactive", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**requestpersistactive" );
    /** src/mpi/pt2pt/cancel.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**cancelunknown", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**cancelunknown" );
    /** src/mpi/pt2pt/cancel.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_cancel", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_cancel" );
    {
    /** src/mpi/pt2pt/cancel.c */
    char s1[] = "pointer1";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_cancel", "**mpi_cancel %p", s1 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_cancel %p" );
    }
    /** src/mpi/pt2pt/greq_complete.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**notgenreq", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**notgenreq" );
    /** src/mpi/pt2pt/greq_complete.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_grequest_complete", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_grequest_complete" );
    {
    /** src/mpi/pt2pt/greq_complete.c */
    int i1 = MPI_REQUEST_NULL;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_grequest_complete", "**mpi_grequest_complete %R", i1 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_grequest_complete %R" );
    }
    /** src/mpi/pt2pt/greq_start.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_grequest_start", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_grequest_start" );
    {
    /** src/mpi/pt2pt/greq_start.c */
    char s1[] = "pointer1";
    char s2[] = "pointer2";
    char s3[] = "pointer3";
    char s4[] = "pointer4";
    char s5[] = "pointer5";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_grequest_start", "**mpi_grequest_start %p %p %p %p %p", s1, s2, s3, s4, s5 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_grequest_start %p %p %p %p %p" );
    }
    /** src/mpi/pt2pt/greq_start.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpix_grequest_class_create", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpix_grequest_class_create" );
    {
    /** src/mpi/pt2pt/greq_start.c */
    char s1[] = "pointer1";
    char s2[] = "pointer2";
    char s3[] = "pointer3";
    char s4[] = "pointer4";
    char s5[] = "pointer5";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpix_grequest_class_create", "**mpix_grequest_class_create %p %p %p %p %p", s1, s2, s3, s4, s5 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpix_grequest_class_create %p %p %p %p %p" );
    }
    /** src/mpi/pt2pt/ibsend.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_ibsend", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_ibsend" );
    {
    /** src/mpi/pt2pt/ibsend.c */
    char s1[] = "pointer1";
    int i2 = 2;
    int i3 = MPI_INT;
    int i4 = 4;
    int i5 = 5;
    int i6 = MPI_COMM_WORLD;
    char s7[] = "pointer7";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_ibsend", "**mpi_ibsend %p %d %D %i %t %C %p", s1, i2, i3, i4, i5, i6, s7 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_ibsend %p %d %D %i %t %C %p" );
    }
    /** src/mpi/pt2pt/improbe.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpix_improbe", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpix_improbe" );
    {
    /** src/mpi/pt2pt/improbe.c */
    int i1 = 1;
    int i2 = 2;
    int i3 = MPI_COMM_WORLD;
    char s4[] = "pointer4";
    char s5[] = "pointer5";
    char s6[] = "pointer6";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpix_improbe", "**mpix_improbe %d %d %C %p %p %p", i1, i2, i3, s4, s5, s6 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpix_improbe %d %d %C %p %p %p" );
    }
    /** src/mpi/pt2pt/imrecv.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**reqnotmsg", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**reqnotmsg" );
    /** src/mpi/pt2pt/imrecv.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpix_imrecv", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpix_imrecv" );
    {
    /** src/mpi/pt2pt/imrecv.c */
    char s1[] = "pointer1";
    int i2 = 2;
    int i3 = MPI_INT;
    char s4[] = "pointer4";
    char s5[] = "pointer5";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpix_imrecv", "**mpix_imrecv %p %d %D %p %p", s1, i2, i3, s4, s5 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpix_imrecv %p %d %D %p %p" );
    }
    /** src/mpi/pt2pt/iprobe.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_iprobe", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_iprobe" );
    {
    /** src/mpi/pt2pt/iprobe.c */
    int i1 = 1;
    int i2 = 2;
    int i3 = MPI_COMM_WORLD;
    char s4[] = "pointer4";
    char s5[] = "pointer5";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_iprobe", "**mpi_iprobe %i %t %C %p %p", i1, i2, i3, s4, s5 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_iprobe %i %t %C %p %p" );
    }
    /** src/mpi/pt2pt/irecv.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_irecv", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_irecv" );
    {
    /** src/mpi/pt2pt/irecv.c */
    char s1[] = "pointer1";
    int i2 = 2;
    int i3 = MPI_INT;
    int i4 = 4;
    int i5 = 5;
    int i6 = MPI_COMM_WORLD;
    char s7[] = "pointer7";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_irecv", "**mpi_irecv %p %d %D %i %t %C %p", s1, i2, i3, i4, i5, i6, s7 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_irecv %p %d %D %i %t %C %p" );
    }
    /** src/mpi/pt2pt/irsend.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_irsend", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_irsend" );
    {
    /** src/mpi/pt2pt/irsend.c */
    char s1[] = "pointer1";
    int i2 = 2;
    int i3 = MPI_INT;
    int i4 = 4;
    int i5 = 5;
    int i6 = MPI_COMM_WORLD;
    char s7[] = "pointer7";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_irsend", "**mpi_irsend %p %d %D %i %t %C %p", s1, i2, i3, i4, i5, i6, s7 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_irsend %p %d %D %i %t %C %p" );
    }
    /** src/mpi/pt2pt/isend.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_isend", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_isend" );
    {
    /** src/mpi/pt2pt/isend.c */
    char s1[] = "pointer1";
    int i2 = 2;
    int i3 = MPI_INT;
    int i4 = 4;
    int i5 = 5;
    int i6 = MPI_COMM_WORLD;
    char s7[] = "pointer7";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_isend", "**mpi_isend %p %d %D %i %t %C %p", s1, i2, i3, i4, i5, i6, s7 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_isend %p %d %D %i %t %C %p" );
    }
    /** src/mpi/pt2pt/issend.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_issend", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_issend" );
    {
    /** src/mpi/pt2pt/issend.c */
    char s1[] = "pointer1";
    int i2 = 2;
    int i3 = MPI_INT;
    int i4 = 4;
    int i5 = 5;
    int i6 = MPI_COMM_WORLD;
    char s7[] = "pointer7";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_issend", "**mpi_issend %p %d %D %i %t %C %p", s1, i2, i3, i4, i5, i6, s7 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_issend %p %d %D %i %t %C %p" );
    }
    /** src/mpi/pt2pt/mpir_request.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**badcase", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**badcase" );
    {
    /** src/mpi/pt2pt/mpir_request.c */
    int i1 = 1;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**badcase", "**badcase %d", i1 );
    ChkMsg( err, MPI_ERR_OTHER, "**badcase %d" );
    }
    {
    /** src/mpi/pt2pt/mpir_request.c */
    int i1 = 1;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**user", "**userquery %d", i1 );
    ChkMsg( err, MPI_ERR_OTHER, "**userquery %d" );
    }
    {
    /** src/mpi/pt2pt/mpir_request.c */
    int i1 = 1;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**user", "**usercancel %d", i1 );
    ChkMsg( err, MPI_ERR_OTHER, "**usercancel %d" );
    }
    {
    /** src/mpi/pt2pt/mpir_request.c */
    int i1 = 1;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**user", "**userfree %d", i1 );
    ChkMsg( err, MPI_ERR_OTHER, "**userfree %d" );
    }
    /** src/mpi/pt2pt/mprobe.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpix_mprobe", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpix_mprobe" );
    {
    /** src/mpi/pt2pt/mprobe.c */
    int i1 = 1;
    int i2 = 2;
    int i3 = MPI_COMM_WORLD;
    char s4[] = "pointer4";
    char s5[] = "pointer5";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpix_mprobe", "**mpix_mprobe %d %d %C %p %p", i1, i2, i3, s4, s5 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpix_mprobe %d %d %C %p %p" );
    }
    /** src/mpi/pt2pt/mrecv.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpix_mrecv", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpix_mrecv" );
    {
    /** src/mpi/pt2pt/mrecv.c */
    char s1[] = "pointer1";
    int i2 = 2;
    int i3 = MPI_INT;
    char s4[] = "pointer4";
    char s5[] = "pointer5";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpix_mrecv", "**mpix_mrecv %p %d %D %p %p", s1, i2, i3, s4, s5 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpix_mrecv %p %d %D %p %p" );
    }
    /** src/mpi/pt2pt/probe.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_probe", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_probe" );
    {
    /** src/mpi/pt2pt/probe.c */
    int i1 = 1;
    int i2 = 2;
    int i3 = MPI_COMM_WORLD;
    char s4[] = "pointer4";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_probe", "**mpi_probe %i %t %C %p", i1, i2, i3, s4 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_probe %i %t %C %p" );
    }
    /** src/mpi/pt2pt/recv.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_recv", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_recv" );
    {
    /** src/mpi/pt2pt/recv.c */
    char s1[] = "pointer1";
    int i2 = 2;
    int i3 = MPI_INT;
    int i4 = 4;
    int i5 = 5;
    int i6 = MPI_COMM_WORLD;
    char s7[] = "pointer7";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_recv", "**mpi_recv %p %d %D %i %t %C %p", s1, i2, i3, i4, i5, i6, s7 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_recv %p %d %D %i %t %C %p" );
    }
    /** src/mpi/pt2pt/recv_init.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_recv_init", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_recv_init" );
    {
    /** src/mpi/pt2pt/recv_init.c */
    char s1[] = "pointer1";
    int i2 = 2;
    int i3 = MPI_INT;
    int i4 = 4;
    int i5 = 5;
    int i6 = MPI_COMM_WORLD;
    char s7[] = "pointer7";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_recv_init", "**mpi_recv_init %p %d %D %i %t %C %p", s1, i2, i3, i4, i5, i6, s7 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_recv_init %p %d %D %i %t %C %p" );
    }
    /** src/mpi/pt2pt/request_free.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**request_invalid_kind", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**request_invalid_kind" );
    {
    /** src/mpi/pt2pt/request_free.c */
    int i1 = 1;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**request_invalid_kind", "**request_invalid_kind %d", i1 );
    ChkMsg( err, MPI_ERR_OTHER, "**request_invalid_kind %d" );
    }
    /** src/mpi/pt2pt/request_free.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_request_free", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_request_free" );
    {
    /** src/mpi/pt2pt/request_free.c */
    char s1[] = "pointer1";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_request_free", "**mpi_request_free %p", s1 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_request_free %p" );
    }
    /** src/mpi/pt2pt/request_get_status.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_request_get_status", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_request_get_status" );
    {
    /** src/mpi/pt2pt/request_get_status.c */
    int i1 = MPI_REQUEST_NULL;
    char s2[] = "pointer2";
    char s3[] = "pointer3";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_request_get_status", "**mpi_request_get_status %R %p %p", i1, s2, s3 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_request_get_status %R %p %p" );
    }
    /** src/mpi/pt2pt/rsend.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_rsend", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_rsend" );
    {
    /** src/mpi/pt2pt/rsend.c */
    char s1[] = "pointer1";
    int i2 = 2;
    int i3 = MPI_INT;
    int i4 = 4;
    int i5 = 5;
    int i6 = MPI_COMM_WORLD;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_rsend", "**mpi_rsend %p %d %D %i %t %C", s1, i2, i3, i4, i5, i6 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_rsend %p %d %D %i %t %C" );
    }
    /** src/mpi/pt2pt/rsend_init.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_rsend_init", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_rsend_init" );
    {
    /** src/mpi/pt2pt/rsend_init.c */
    char s1[] = "pointer1";
    int i2 = 2;
    int i3 = MPI_INT;
    int i4 = 4;
    int i5 = 5;
    int i6 = MPI_COMM_WORLD;
    char s7[] = "pointer7";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_rsend_init", "**mpi_rsend_init %p %d %D %i %t %C %p", s1, i2, i3, i4, i5, i6, s7 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_rsend_init %p %d %D %i %t %C %p" );
    }
    /** src/mpi/pt2pt/send.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_send", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_send" );
    {
    /** src/mpi/pt2pt/send.c */
    char s1[] = "pointer1";
    int i2 = 2;
    int i3 = MPI_INT;
    int i4 = 4;
    int i5 = 5;
    int i6 = MPI_COMM_WORLD;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_send", "**mpi_send %p %d %D %i %t %C", s1, i2, i3, i4, i5, i6 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_send %p %d %D %i %t %C" );
    }
    /** src/mpi/pt2pt/send_init.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_send_init", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_send_init" );
    {
    /** src/mpi/pt2pt/send_init.c */
    char s1[] = "pointer1";
    int i2 = 2;
    int i3 = MPI_INT;
    int i4 = 4;
    int i5 = 5;
    int i6 = MPI_COMM_WORLD;
    char s7[] = "pointer7";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_send_init", "**mpi_send_init %p %d %D %i %t %C %p", s1, i2, i3, i4, i5, i6, s7 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_send_init %p %d %D %i %t %C %p" );
    }
    /** src/mpi/pt2pt/sendrecv.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_sendrecv", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_sendrecv" );
    {
    /** src/mpi/pt2pt/sendrecv.c */
    char s1[] = "pointer1";
    int i2 = 2;
    int i3 = MPI_INT;
    int i4 = 4;
    int i5 = 5;
    char s6[] = "pointer6";
    int i7 = 7;
    int i8 = MPI_INT;
    int i9 = 9;
    int i10 = 10;
    int i11 = MPI_COMM_WORLD;
    char s12[] = "pointer12";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_sendrecv", "**mpi_sendrecv %p %d %D %i %t %p %d %D %i %t %C %p", s1, i2, i3, i4, i5, s6, i7, i8, i9, i10, i11, s12 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_sendrecv %p %d %D %i %t %p %d %D %i %t %C %p" );
    }
    /** src/mpi/pt2pt/sendrecv_rep.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_sendrecv_replace", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_sendrecv_replace" );
    {
    /** src/mpi/pt2pt/sendrecv_rep.c */
    char s1[] = "pointer1";
    int i2 = 2;
    int i3 = MPI_INT;
    int i4 = 4;
    int i5 = 5;
    int i6 = 6;
    int i7 = 7;
    int i8 = MPI_COMM_WORLD;
    char s9[] = "pointer9";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_sendrecv_replace", "**mpi_sendrecv_replace %p %d %D %i %t %i %t %C %p", s1, i2, i3, i4, i5, i6, i7, i8, s9 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_sendrecv_replace %p %d %D %i %t %i %t %C %p" );
    }
    /** src/mpi/pt2pt/ssend.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_ssend", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_ssend" );
    {
    /** src/mpi/pt2pt/ssend.c */
    char s1[] = "pointer1";
    int i2 = 2;
    int i3 = MPI_INT;
    int i4 = 4;
    int i5 = 5;
    int i6 = MPI_COMM_WORLD;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_ssend", "**mpi_ssend %p %d %D %i %t %C", s1, i2, i3, i4, i5, i6 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_ssend %p %d %D %i %t %C" );
    }
    /** src/mpi/pt2pt/ssend_init.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_ssend_init", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_ssend_init" );
    {
    /** src/mpi/pt2pt/ssend_init.c */
    char s1[] = "pointer1";
    int i2 = 2;
    int i3 = MPI_INT;
    int i4 = 4;
    int i5 = 5;
    int i6 = MPI_COMM_WORLD;
    char s7[] = "pointer7";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_ssend_init", "**mpi_ssend_init %p %d %D %i %t %C %p", s1, i2, i3, i4, i5, i6, s7 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_ssend_init %p %d %D %i %t %C %p" );
    }
    /** src/mpi/pt2pt/start.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_start", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_start" );
    {
    /** src/mpi/pt2pt/start.c */
    char s1[] = "pointer1";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_start", "**mpi_start %p", s1 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_start %p" );
    }
    /** src/mpi/pt2pt/startall.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_startall", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_startall" );
    {
    /** src/mpi/pt2pt/startall.c */
    int i1 = 1;
    char s2[] = "pointer2";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_startall", "**mpi_startall %d %p", i1, s2 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_startall %d %p" );
    }
    /** src/mpi/pt2pt/status_set_cancelled.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_status_set_cancelled", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_status_set_cancelled" );
    {
    /** src/mpi/pt2pt/status_set_cancelled.c */
    char s1[] = "pointer1";
    int i2 = 2;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_status_set_cancelled", "**mpi_status_set_cancelled %p %d", s1, i2 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_status_set_cancelled %p %d" );
    }
    /** src/mpi/pt2pt/test.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_test", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_test" );
    {
    /** src/mpi/pt2pt/test.c */
    char s1[] = "pointer1";
    char s2[] = "pointer2";
    char s3[] = "pointer3";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_test", "**mpi_test %p %p %p", s1, s2, s3 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_test %p %p %p" );
    }
    /** src/mpi/pt2pt/test_cancelled.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_test_cancelled", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_test_cancelled" );
    {
    /** src/mpi/pt2pt/test_cancelled.c */
    char s1[] = "pointer1";
    char s2[] = "pointer2";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_test_cancelled", "**mpi_test_cancelled %p %p", s1, s2 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_test_cancelled %p %p" );
    }
    /** src/mpi/pt2pt/testall.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_testall", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_testall" );
    {
    /** src/mpi/pt2pt/testall.c */
    int i1 = 1;
    char s2[] = "pointer2";
    char s3[] = "pointer3";
    char s4[] = "pointer4";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_testall", "**mpi_testall %d %p %p %p", i1, s2, s3, s4 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_testall %d %p %p %p" );
    }
    /** src/mpi/pt2pt/testany.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_testany", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_testany" );
    {
    /** src/mpi/pt2pt/testany.c */
    int i1 = 1;
    char s2[] = "pointer2";
    char s3[] = "pointer3";
    char s4[] = "pointer4";
    char s5[] = "pointer5";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_testany", "**mpi_testany %d %p %p %p %p", i1, s2, s3, s4, s5 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_testany %d %p %p %p %p" );
    }
    /** src/mpi/pt2pt/testsome.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_testsome", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_testsome" );
    {
    /** src/mpi/pt2pt/testsome.c */
    int i1 = 1;
    char s2[] = "pointer2";
    char s3[] = "pointer3";
    char s4[] = "pointer4";
    char s5[] = "pointer5";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_testsome", "**mpi_testsome %d %p %p %p %p", i1, s2, s3, s4, s5 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_testsome %d %p %p %p %p" );
    }
    /** src/mpi/pt2pt/wait.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_wait", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_wait" );
    {
    /** src/mpi/pt2pt/wait.c */
    char s1[] = "pointer1";
    char s2[] = "pointer2";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_wait", "**mpi_wait %p %p", s1, s2 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_wait %p %p" );
    }
    /** src/mpi/pt2pt/waitall.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**msgnotreq", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**msgnotreq" );
    {
    /** src/mpi/pt2pt/waitall.c */
    int i1 = 1;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**msgnotreq", "**msgnotreq %d", i1 );
    ChkMsg( err, MPI_ERR_OTHER, "**msgnotreq %d" );
    }
    /** src/mpi/pt2pt/waitall.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_waitall", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_waitall" );
    {
    /** src/mpi/pt2pt/waitall.c */
    int i1 = 1;
    char s2[] = "pointer2";
    char s3[] = "pointer3";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_waitall", "**mpi_waitall %d %p %p", i1, s2, s3 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_waitall %d %p %p" );
    }
    /** src/mpi/pt2pt/waitany.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_waitany", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_waitany" );
    {
    /** src/mpi/pt2pt/waitany.c */
    int i1 = 1;
    char s2[] = "pointer2";
    char s3[] = "pointer3";
    char s4[] = "pointer4";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_waitany", "**mpi_waitany %d %p %p %p", i1, s2, s3, s4 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_waitany %d %p %p %p" );
    }
    /** src/mpi/pt2pt/waitsome.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_waitsome", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_waitsome" );
    {
    /** src/mpi/pt2pt/waitsome.c */
    int i1 = 1;
    char s2[] = "pointer2";
    char s3[] = "pointer3";
    char s4[] = "pointer4";
    char s5[] = "pointer5";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_waitsome", "**mpi_waitsome %d %p %p %p %p", i1, s2, s3, s4, s5 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_waitsome %d %p %p %p %p" );
    }
    /** src/mpi/rma/accumulate.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_accumulate", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_accumulate" );
    {
    /** src/mpi/rma/accumulate.c */
    char s1[] = "pointer1";
    int i2 = 2;
    int i3 = MPI_INT;
    int i4 = 4;
    int i5 = 5;
    int i6 = 6;
    int i7 = MPI_INT;
    int i8 = MPI_SUM;
    int i9 = MPI_WIN_NULL;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_accumulate", "**mpi_accumulate %p %d %D %d %d %d %D %O %W", s1, i2, i3, i4, i5, i6, i7, i8, i9 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_accumulate %p %d %D %d %d %d %D %O %W" );
    }
    /** src/mpi/rma/alloc_mem.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**allocmem", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**allocmem" );
    /** src/mpi/rma/alloc_mem.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_alloc_mem", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_alloc_mem" );
    {
    /** src/mpi/rma/alloc_mem.c */
    int i1 = 1;
    int i2 = MPI_INFO_NULL;
    char s3[] = "pointer3";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_alloc_mem", "**mpi_alloc_mem %d %I %p", i1, i2, s3 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_alloc_mem %d %I %p" );
    }
    /** src/mpi/rma/compare_and_swap.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpix_compare_and_swap", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpix_compare_and_swap" );
    {
    /** src/mpi/rma/compare_and_swap.c */
    char s1[] = "pointer1";
    char s2[] = "pointer2";
    char s3[] = "pointer3";
    int i4 = MPI_INT;
    int i5 = 5;
    int i6 = 6;
    int i7 = MPI_WIN_NULL;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpix_compare_and_swap", "**mpix_compare_and_swap %p %p %p %D %d %d %W", s1, s2, s3, i4, i5, i6, i7 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpix_compare_and_swap %p %p %p %D %d %d %W" );
    }
    /** src/mpi/rma/fetch_and_op.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**typenotpredefined", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**typenotpredefined" );
    /** src/mpi/rma/fetch_and_op.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**opnotpredefined", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**opnotpredefined" );
    /** src/mpi/rma/fetch_and_op.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpix_fetch_and_op", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpix_fetch_and_op" );
    {
    /** src/mpi/rma/fetch_and_op.c */
    char s1[] = "pointer1";
    char s2[] = "pointer2";
    int i3 = MPI_INT;
    int i4 = 4;
    int i5 = 5;
    int i6 = MPI_SUM;
    int i7 = MPI_WIN_NULL;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpix_fetch_and_op", "**mpix_fetch_and_op %p %p %D %d %d %O %W", s1, s2, i3, i4, i5, i6, i7 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpix_fetch_and_op %p %p %D %d %d %O %W" );
    }
    /** src/mpi/rma/free_mem.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_free_mem", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_free_mem" );
    {
    /** src/mpi/rma/free_mem.c */
    char s1[] = "pointer1";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_free_mem", "**mpi_free_mem %p", s1 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_free_mem %p" );
    }
    /** src/mpi/rma/get.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_get", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_get" );
    {
    /** src/mpi/rma/get.c */
    char s1[] = "pointer1";
    int i2 = 2;
    int i3 = MPI_INT;
    int i4 = 4;
    int i5 = 5;
    int i6 = 6;
    int i7 = MPI_INT;
    int i8 = MPI_WIN_NULL;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_get", "**mpi_get %p %d %D %d %d %d %D %W", s1, i2, i3, i4, i5, i6, i7, i8 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_get %p %d %D %d %d %d %D %W" );
    }
    /** src/mpi/rma/get_accumulate.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpix_get_accumulate", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpix_get_accumulate" );
    {
    /** src/mpi/rma/get_accumulate.c */
    char s1[] = "pointer1";
    int i2 = 2;
    int i3 = MPI_INT;
    char s4[] = "pointer4";
    int i5 = 5;
    int i6 = MPI_INT;
    int i7 = 7;
    int i8 = 8;
    int i9 = 9;
    int i10 = MPI_INT;
    int i11 = MPI_SUM;
    int i12 = MPI_WIN_NULL;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpix_get_accumulate", "**mpix_get_accumulate %p %d %D %p %d %D %d %d %d %D %O %W", s1, i2, i3, s4, i5, i6, i7, i8, i9, i10, i11, i12 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpix_get_accumulate %p %d %D %p %d %D %d %d %d %D %O %W" );
    }
    /** src/mpi/rma/put.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_put", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_put" );
    {
    /** src/mpi/rma/put.c */
    char s1[] = "pointer1";
    int i2 = 2;
    int i3 = MPI_INT;
    int i4 = 4;
    int i5 = 5;
    int i6 = 6;
    int i7 = MPI_INT;
    int i8 = MPI_WIN_NULL;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_put", "**mpi_put %p %d %D %d %d %d %D %W", s1, i2, i3, i4, i5, i6, i7, i8 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_put %p %d %D %d %d %d %D %W" );
    }
    /** src/mpi/rma/raccumulate.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpix_raccumulate", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpix_raccumulate" );
    {
    /** src/mpi/rma/raccumulate.c */
    char s1[] = "pointer1";
    int i2 = 2;
    int i3 = MPI_INT;
    int i4 = 4;
    int i5 = 5;
    int i6 = 6;
    int i7 = MPI_INT;
    int i8 = MPI_SUM;
    int i9 = MPI_WIN_NULL;
    char s10[] = "pointer10";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpix_raccumulate", "**mpix_raccumulate %p %d %D %d %d %d %D %O %W %p", s1, i2, i3, i4, i5, i6, i7, i8, i9, s10 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpix_raccumulate %p %d %D %d %d %d %D %O %W %p" );
    }
    /** src/mpi/rma/rget.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpix_rget", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpix_rget" );
    {
    /** src/mpi/rma/rget.c */
    char s1[] = "pointer1";
    int i2 = 2;
    int i3 = MPI_INT;
    int i4 = 4;
    int i5 = 5;
    int i6 = 6;
    int i7 = MPI_INT;
    int i8 = MPI_WIN_NULL;
    char s9[] = "pointer9";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpix_rget", "**mpix_rget %p %d %D %d %d %d %D %W %p", s1, i2, i3, i4, i5, i6, i7, i8, s9 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpix_rget %p %d %D %d %d %d %D %W %p" );
    }
    /** src/mpi/rma/rget_accumulate.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpix_rget_accumulate", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpix_rget_accumulate" );
    {
    /** src/mpi/rma/rget_accumulate.c */
    char s1[] = "pointer1";
    int i2 = 2;
    int i3 = MPI_INT;
    char s4[] = "pointer4";
    int i5 = 5;
    int i6 = MPI_INT;
    int i7 = 7;
    int i8 = 8;
    int i9 = 9;
    int i10 = MPI_INT;
    int i11 = MPI_SUM;
    int i12 = MPI_WIN_NULL;
    char s13[] = "pointer13";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpix_rget_accumulate", "**mpix_rget_accumulate %p %d %D %p %d %D %d %d %d %D %O %W %p", s1, i2, i3, s4, i5, i6, i7, i8, i9, i10, i11, i12, s13 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpix_rget_accumulate %p %d %D %p %d %D %d %d %d %D %O %W %p" );
    }
    /** src/mpi/rma/rput.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpix_rput", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpix_rput" );
    {
    /** src/mpi/rma/rput.c */
    char s1[] = "pointer1";
    int i2 = 2;
    int i3 = MPI_INT;
    int i4 = 4;
    int i5 = 5;
    int i6 = 6;
    int i7 = MPI_INT;
    int i8 = MPI_WIN_NULL;
    char s9[] = "pointer9";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpix_rput", "**mpix_rput %p %d %D %d %d %d %D %W %p", s1, i2, i3, i4, i5, i6, i7, i8, s9 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpix_rput %p %d %D %d %d %d %D %W %p" );
    }
    /** src/mpi/rma/win_allocate.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**rmasize", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**rmasize" );
    {
    /** src/mpi/rma/win_allocate.c */
    int i1 = 1;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**rmasize", "**rmasize %d", i1 );
    ChkMsg( err, MPI_ERR_OTHER, "**rmasize %d" );
    }
    /** src/mpi/rma/win_allocate.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**nullptr", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**nullptr" );
    {
    /** src/mpi/rma/win_allocate.c */
    char s1[] = "string1";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**nullptr", "**nullptr %s", s1 );
    ChkMsg( err, MPI_ERR_OTHER, "**nullptr %s" );
    }
    /** src/mpi/rma/win_allocate.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpix_win_allocate", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpix_win_allocate" );
    {
    /** src/mpi/rma/win_allocate.c */
    int i1 = 1;
    int i2 = 2;
    int i3 = MPI_INFO_NULL;
    int i4 = MPI_COMM_WORLD;
    char s5[] = "pointer5";
    char s6[] = "pointer6";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpix_win_allocate", "**mpix_win_allocate %d %d %I %C %p %p", i1, i2, i3, i4, s5, s6 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpix_win_allocate %d %d %I %C %p %p" );
    }
    /** src/mpi/rma/win_allocate_shared.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_win_allocate_shared", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_win_allocate_shared" );
    {
    /** src/mpi/rma/win_allocate_shared.c */
    int i1 = 1;
    int i2 = MPI_INFO_NULL;
    int i3 = MPI_COMM_WORLD;
    char s4[] = "pointer4";
    char s5[] = "pointer5";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_win_allocate_shared", "**mpi_win_allocate_shared %d %I %C %p %p", i1, i2, i3, s4, s5 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_win_allocate_shared %d %I %C %p %p" );
    }
    /** src/mpi/rma/win_attach.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpix_win_attach", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpix_win_attach" );
    {
    /** src/mpi/rma/win_attach.c */
    int i1 = MPI_WIN_NULL;
    char s2[] = "pointer2";
    int i3 = 3;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpix_win_attach", "**mpix_win_attach %W %p %d", i1, s2, i3 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpix_win_attach %W %p %d" );
    }
    /** src/mpi/rma/win_complete.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_win_complete", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_win_complete" );
    {
    /** src/mpi/rma/win_complete.c */
    int i1 = MPI_WIN_NULL;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_win_complete", "**mpi_win_complete %W", i1 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_win_complete %W" );
    }
    /** src/mpi/rma/win_create.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_win_create", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_win_create" );
    {
    /** src/mpi/rma/win_create.c */
    char s1[] = "pointer1";
    int i2 = 2;
    int i3 = 3;
    int i4 = MPI_INFO_NULL;
    int i5 = MPI_COMM_WORLD;
    char s6[] = "pointer6";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_win_create", "**mpi_win_create %p %d %d %I %C %p", s1, i2, i3, i4, i5, s6 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_win_create %p %d %d %I %C %p" );
    }
    /** src/mpi/rma/win_create_dynamic.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpix_win_create_dynamic", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpix_win_create_dynamic" );
    {
    /** src/mpi/rma/win_create_dynamic.c */
    int i1 = MPI_INFO_NULL;
    int i2 = MPI_COMM_WORLD;
    char s3[] = "pointer3";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpix_win_create_dynamic", "**mpix_win_create_dynamic %I %C %p", i1, i2, s3 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpix_win_create_dynamic %I %C %p" );
    }
    /** src/mpi/rma/win_detach.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpix_win_detach", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpix_win_detach" );
    {
    /** src/mpi/rma/win_detach.c */
    int i1 = MPI_WIN_NULL;
    char s2[] = "pointer2";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpix_win_detach", "**mpix_win_detach %W %p", i1, s2 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpix_win_detach %W %p" );
    }
    /** src/mpi/rma/win_fence.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_win_fence", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_win_fence" );
    {
    /** src/mpi/rma/win_fence.c */
    int i1 = 1;
    int i2 = MPI_WIN_NULL;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_win_fence", "**mpi_win_fence %A %W", i1, i2 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_win_fence %A %W" );
    }
    /** src/mpi/rma/win_flush.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpix_win_flush", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpix_win_flush" );
    {
    /** src/mpi/rma/win_flush.c */
    int i1 = 1;
    int i2 = MPI_WIN_NULL;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpix_win_flush", "**mpix_win_flush %d %W", i1, i2 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpix_win_flush %d %W" );
    }
    /** src/mpi/rma/win_flush_all.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpix_win_flush_all", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpix_win_flush_all" );
    {
    /** src/mpi/rma/win_flush_all.c */
    int i1 = MPI_WIN_NULL;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpix_win_flush_all", "**mpix_win_flush_all %W", i1 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpix_win_flush_all %W" );
    }
    /** src/mpi/rma/win_flush_local.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpix_win_flush_local", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpix_win_flush_local" );
    {
    /** src/mpi/rma/win_flush_local.c */
    int i1 = 1;
    int i2 = MPI_WIN_NULL;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpix_win_flush_local", "**mpix_win_flush_local %d %W", i1, i2 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpix_win_flush_local %d %W" );
    }
    /** src/mpi/rma/win_flush_local_all.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpix_win_flush_local_all", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpix_win_flush_local_all" );
    {
    /** src/mpi/rma/win_flush_local_all.c */
    int i1 = MPI_WIN_NULL;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpix_win_flush_local_all", "**mpix_win_flush_local_all %W", i1 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpix_win_flush_local_all %W" );
    }
    /** src/mpi/rma/win_free.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**winfreewhilelocked", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**winfreewhilelocked" );
    {
    /** src/mpi/rma/win_free.c */
    int i1 = 1;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**winfreewhilelocked", "**winfreewhilelocked %d", i1 );
    ChkMsg( err, MPI_ERR_OTHER, "**winfreewhilelocked %d" );
    }
    /** src/mpi/rma/win_free.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_win_free", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_win_free" );
    {
    /** src/mpi/rma/win_free.c */
    char s1[] = "pointer1";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_win_free", "**mpi_win_free %p", s1 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_win_free %p" );
    }
    /** src/mpi/rma/win_get_group.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_win_get_group", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_win_get_group" );
    {
    /** src/mpi/rma/win_get_group.c */
    int i1 = MPI_WIN_NULL;
    char s2[] = "pointer2";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_win_get_group", "**mpi_win_get_group %W %p", i1, s2 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_win_get_group %W %p" );
    }
    /** src/mpi/rma/win_get_name.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_win_get_name", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_win_get_name" );
    {
    /** src/mpi/rma/win_get_name.c */
    int i1 = MPI_WIN_NULL;
    char s2[] = "pointer2";
    char s3[] = "pointer3";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_win_get_name", "**mpi_win_get_name %W %p %p", i1, s2, s3 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_win_get_name %W %p %p" );
    }
    /** src/mpi/rma/win_lock.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**lockassertval", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**lockassertval" );
    {
    /** src/mpi/rma/win_lock.c */
    int i1 = 1;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**lockassertval", "**lockassertval %d", i1 );
    ChkMsg( err, MPI_ERR_OTHER, "**lockassertval %d" );
    }
    /** src/mpi/rma/win_lock.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**locktype", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**locktype" );
    /** src/mpi/rma/win_lock.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**lockwhilelocked", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**lockwhilelocked" );
    {
    /** src/mpi/rma/win_lock.c */
    int i1 = 1;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**lockwhilelocked", "**lockwhilelocked %d", i1 );
    ChkMsg( err, MPI_ERR_OTHER, "**lockwhilelocked %d" );
    }
    /** src/mpi/rma/win_lock.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_win_lock", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_win_lock" );
    {
    /** src/mpi/rma/win_lock.c */
    int i1 = 1;
    int i2 = 2;
    int i3 = 3;
    int i4 = MPI_WIN_NULL;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_win_lock", "**mpi_win_lock %d %d %A %W", i1, i2, i3, i4 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_win_lock %d %d %A %W" );
    }
    /** src/mpi/rma/win_lock_all.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpix_win_lock_all", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpix_win_lock_all" );
    {
    /** src/mpi/rma/win_lock_all.c */
    int i1 = 1;
    int i2 = MPI_WIN_NULL;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpix_win_lock_all", "**mpix_win_lock_all %A %W", i1, i2 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpix_win_lock_all %A %W" );
    }
    /** src/mpi/rma/win_post.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_win_post", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_win_post" );
    {
    /** src/mpi/rma/win_post.c */
    int i1 = MPI_GROUP_NULL;
    int i2 = 2;
    int i3 = MPI_WIN_NULL;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_win_post", "**mpi_win_post %G %A %W", i1, i2, i3 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_win_post %G %A %W" );
    }
    /** src/mpi/rma/win_set_name.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_win_set_name", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_win_set_name" );
    {
    /** src/mpi/rma/win_set_name.c */
    int i1 = MPI_WIN_NULL;
    char s2[] = "string2";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_win_set_name", "**mpi_win_set_name %W %s", i1, s2 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_win_set_name %W %s" );
    }
    /** src/mpi/rma/win_shared_query.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpix_win_shared_query", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpix_win_shared_query" );
    {
    /** src/mpi/rma/win_shared_query.c */
    int i1 = MPI_WIN_NULL;
    int i2 = 2;
    char s3[] = "pointer3";
    char s4[] = "pointer4";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpix_win_shared_query", "**mpix_win_shared_query %W %d %p %p", i1, i2, s3, s4 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpix_win_shared_query %W %d %p %p" );
    }
    /** src/mpi/rma/win_start.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_win_start", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_win_start" );
    {
    /** src/mpi/rma/win_start.c */
    int i1 = MPI_GROUP_NULL;
    int i2 = 2;
    int i3 = MPI_WIN_NULL;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_win_start", "**mpi_win_start %G %A %W", i1, i2, i3 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_win_start %G %A %W" );
    }
    /** src/mpi/rma/win_sync.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpix_win_sync", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpix_win_sync" );
    {
    /** src/mpi/rma/win_sync.c */
    int i1 = MPI_WIN_NULL;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpix_win_sync", "**mpix_win_sync %W", i1 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpix_win_sync %W" );
    }
    /** src/mpi/rma/win_test.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_win_test", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_win_test" );
    {
    /** src/mpi/rma/win_test.c */
    int i1 = MPI_WIN_NULL;
    char s2[] = "pointer2";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_win_test", "**mpi_win_test %W %p", i1, s2 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_win_test %W %p" );
    }
    /** src/mpi/rma/win_unlock.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**winunlockwithoutlock", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**winunlockwithoutlock" );
    /** src/mpi/rma/win_unlock.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mismatchedlockrank", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mismatchedlockrank" );
    {
    /** src/mpi/rma/win_unlock.c */
    int i1 = 1;
    int i2 = 2;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mismatchedlockrank", "**mismatchedlockrank %d %d", i1, i2 );
    ChkMsg( err, MPI_ERR_OTHER, "**mismatchedlockrank %d %d" );
    }
    /** src/mpi/rma/win_unlock.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_win_unlock", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_win_unlock" );
    {
    /** src/mpi/rma/win_unlock.c */
    int i1 = 1;
    int i2 = MPI_WIN_NULL;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_win_unlock", "**mpi_win_unlock %d %W", i1, i2 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_win_unlock %d %W" );
    }
    /** src/mpi/rma/win_unlock_all.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpix_win_unlock_all", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpix_win_unlock_all" );
    {
    /** src/mpi/rma/win_unlock_all.c */
    int i1 = MPI_WIN_NULL;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpix_win_unlock_all", "**mpix_win_unlock_all %W", i1 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpix_win_unlock_all %W" );
    }
    /** src/mpi/rma/win_wait.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_win_wait", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_win_wait" );
    {
    /** src/mpi/rma/win_wait.c */
    int i1 = MPI_WIN_NULL;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_win_wait", "**mpi_win_wait %W", i1 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_win_wait %W" );
    }
    /** src/mpi/romio/adio/ad_bg/ad_bg_close.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**io", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**io" );
    {
    /** src/mpi/romio/adio/ad_bg/ad_bg_close.c */
    char s1[] = "string1";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**io", "**io %s", s1 );
    ChkMsg( err, MPI_ERR_OTHER, "**io %s" );
    }
    /** src/mpi/romio/adio/ad_bg/ad_bg_fcntl.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**flag", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**flag" );
    {
    /** src/mpi/romio/adio/ad_bg/ad_bg_fcntl.c */
    int i1 = 1;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**flag", "**flag %d", i1 );
    ChkMsg( err, MPI_ERR_OTHER, "**flag %d" );
    }
    /** src/mpi/romio/adio/ad_bg/ad_bg_open.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**filenamelong", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**filenamelong" );
    {
    /** src/mpi/romio/adio/ad_bg/ad_bg_open.c */
    char s1[] = "string1";
    int i2 = 2;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**filenamelong", "**filenamelong %s %d", s1, i2 );
    ChkMsg( err, MPI_ERR_OTHER, "**filenamelong %s %d" );
    }
    /** src/mpi/romio/adio/ad_bg/ad_bg_open.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**filenoexist", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**filenoexist" );
    {
    /** src/mpi/romio/adio/ad_bg/ad_bg_open.c */
    char s1[] = "string1";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**filenoexist", "**filenoexist %s", s1 );
    ChkMsg( err, MPI_ERR_OTHER, "**filenoexist %s" );
    }
    /** src/mpi/romio/adio/ad_bg/ad_bg_open.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**filenamedir", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**filenamedir" );
    {
    /** src/mpi/romio/adio/ad_bg/ad_bg_open.c */
    char s1[] = "string1";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**filenamedir", "**filenamedir %s", s1 );
    ChkMsg( err, MPI_ERR_OTHER, "**filenamedir %s" );
    }
    /** src/mpi/romio/adio/ad_bg/ad_bg_open.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**fileaccess", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**fileaccess" );
    {
    /** src/mpi/romio/adio/ad_bg/ad_bg_open.c */
    char s1[] = "string1";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**fileaccess", "**fileaccess %s", s1 );
    ChkMsg( err, MPI_ERR_OTHER, "**fileaccess %s" );
    }
    /** src/mpi/romio/adio/ad_bg/ad_bg_open.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**ioneedrd", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**ioneedrd" );
    /** src/mpi/romio/adio/ad_bg/ad_bg_wrcoll.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "Filetype specifies overlapping write regions (which is illegal according to the MPI-2 specification)", 0);
    ChkMsg( err, MPI_ERR_OTHER, "Filetype specifies overlapping write regions (which is illegal according to the MPI-2 specification)" );
    /** src/mpi/romio/adio/ad_bg/ad_bg_wrcoll.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**ioRMWrdwr", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**ioRMWrdwr" );
    /** src/mpi/romio/adio/ad_bg/ad_bg_write.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "ADIOI_BG_WriteStrided: ROMIO tries to optimize this access by doing a read-modify-write, but is unable to read the file. Please give the file read permission and open it with MPI_MODE_RDWR.", 0);
    ChkMsg( err, MPI_ERR_OTHER, "ADIOI_BG_WriteStrided: ROMIO tries to optimize this access by doing a read-modify-write, but is unable to read the file. Please give the file read permission and open it with MPI_MODE_RDWR." );
    /** src/mpi/romio/adio/ad_bgl/ad_bgl_write.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "ADIOI_BGL_WriteStrided: ROMIO tries to optimize this access by doing a read-modify-write, but is unable to read the file. Please give the file read permission and open it with MPI_MODE_RDWR.", 0);
    ChkMsg( err, MPI_ERR_OTHER, "ADIOI_BGL_WriteStrided: ROMIO tries to optimize this access by doing a read-modify-write, but is unable to read the file. Please give the file read permission and open it with MPI_MODE_RDWR." );
    /** src/mpi/romio/adio/ad_lustre/ad_lustre_wrstr.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**iowswc", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**iowswc" );
    /** src/mpi/romio/adio/ad_lustre/ad_lustre_wrstr.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**iowsrc", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**iowsrc" );
    /** src/mpi/romio/adio/ad_nfs/ad_nfs_write.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "ADIOI_NFS_WriteStrided: ROMIO tries to optimize this access by doing a read-modify-write, but is unable to read the file. Please give the file read permission and open it with MPI_MODE_RDWR.", 0);
    ChkMsg( err, MPI_ERR_OTHER, "ADIOI_NFS_WriteStrided: ROMIO tries to optimize this access by doing a read-modify-write, but is unable to read the file. Please give the file read permission and open it with MPI_MODE_RDWR." );
    /** src/mpi/romio/adio/ad_pvfs/ad_pvfs_fcntl.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "PVFS does not support atomic mode", 0);
    ChkMsg( err, MPI_ERR_OTHER, "PVFS does not support atomic mode" );
    /** src/mpi/romio/adio/ad_pvfs/ad_pvfs_write.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "Atomic mode set in PVFS I/O function", 0);
    ChkMsg( err, MPI_ERR_OTHER, "Atomic mode set in PVFS I/O function" );
    /** src/mpi/romio/adio/ad_pvfs2/ad_pvfs2_aio.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "Error in pvfs_request_contig (memory)", 0);
    ChkMsg( err, MPI_ERR_OTHER, "Error in pvfs_request_contig (memory)" );
    /** src/mpi/romio/adio/ad_pvfs2/ad_pvfs2_aio.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "Error in pvfs_request_contig (file)", 0);
    ChkMsg( err, MPI_ERR_OTHER, "Error in pvfs_request_contig (file)" );
    /** src/mpi/romio/adio/ad_pvfs2/ad_pvfs2_aio.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "Error in PVFS_isys_io", 0);
    ChkMsg( err, MPI_ERR_OTHER, "Error in PVFS_isys_io" );
    /** src/mpi/romio/adio/ad_pvfs2/ad_pvfs2_common.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "Error in PVFS_sys_finalize", 0);
    ChkMsg( err, MPI_ERR_OTHER, "Error in PVFS_sys_finalize" );
    /** src/mpi/romio/adio/ad_pvfs2/ad_pvfs2_common.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "Error in PVFS_util_init_defaults", 0);
    ChkMsg( err, MPI_ERR_OTHER, "Error in PVFS_util_init_defaults" );
    /** src/mpi/romio/adio/ad_pvfs2/ad_pvfs2_delete.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "Error in PVFS_util_resolve", 0);
    ChkMsg( err, MPI_ERR_OTHER, "Error in PVFS_util_resolve" );
    /** src/mpi/romio/adio/ad_pvfs2/ad_pvfs2_delete.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "Error in PVFS_sys_remove", 0);
    ChkMsg( err, MPI_ERR_OTHER, "Error in PVFS_sys_remove" );
    /** src/mpi/romio/adio/ad_pvfs2/ad_pvfs2_fcntl.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "Error in PVFS_sys_getattr", 0);
    ChkMsg( err, MPI_ERR_OTHER, "Error in PVFS_sys_getattr" );
    /** src/mpi/romio/adio/ad_pvfs2/ad_pvfs2_flush.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "Error in PVFS_sys_flush", 0);
    ChkMsg( err, MPI_ERR_OTHER, "Error in PVFS_sys_flush" );
    /** src/mpi/romio/adio/ad_pvfs2/ad_pvfs2_io_dtype.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "Error in PVFS_sys_io \n", 0);
    ChkMsg( err, MPI_ERR_OTHER, "Error in PVFS_sys_io \n" );
    /** src/mpi/romio/adio/ad_pvfs2/ad_pvfs2_io_list.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "Atomic noncontiguous writes"					   " are not supported by PVFS2", 0);
    ChkMsg( err, MPI_ERR_OTHER, "Atomic noncontiguous writes"					   " are not supported by PVFS2" );
    /** src/mpi/romio/adio/ad_pvfs2/ad_pvfs2_open.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "Error allocating memory", 0);
    ChkMsg( err, MPI_ERR_OTHER, "Error allocating memory" );
    /** src/mpi/romio/adio/ad_pvfs2/ad_pvfs2_open.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "Unknown error", 0);
    ChkMsg( err, MPI_ERR_OTHER, "Unknown error" );
    /** src/mpi/romio/adio/ad_pvfs2/ad_pvfs2_read.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "Error in PVFS_sys_read", 0);
    ChkMsg( err, MPI_ERR_OTHER, "Error in PVFS_sys_read" );
    /** src/mpi/romio/adio/ad_pvfs2/ad_pvfs2_read_list_classic.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "Error in PVFS_Request_contiguous (memory)", 0);
    ChkMsg( err, MPI_ERR_OTHER, "Error in PVFS_Request_contiguous (memory)" );
    /** src/mpi/romio/adio/ad_pvfs2/ad_pvfs2_read_list_classic.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "Error in PVFS_Request_hindexed (file)", 0);
    ChkMsg( err, MPI_ERR_OTHER, "Error in PVFS_Request_hindexed (file)" );
    /** src/mpi/romio/adio/ad_pvfs2/ad_pvfs2_read_list_classic.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "Error in PVFS_Request_hindexed (memory)", 0);
    ChkMsg( err, MPI_ERR_OTHER, "Error in PVFS_Request_hindexed (memory)" );
    /** src/mpi/romio/adio/ad_pvfs2/ad_pvfs2_resize.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "Error in PVFS_sys_truncate", 0);
    ChkMsg( err, MPI_ERR_OTHER, "Error in PVFS_sys_truncate" );
    /** src/mpi/romio/adio/ad_pvfs2/ad_pvfs2_write.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "Error in PVFS_Request_contiguous (file)", 0);
    ChkMsg( err, MPI_ERR_OTHER, "Error in PVFS_Request_contiguous (file)" );
    /** src/mpi/romio/adio/ad_pvfs2/ad_pvfs2_write.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "Error in PVFS_sys_write", 0);
    ChkMsg( err, MPI_ERR_OTHER, "Error in PVFS_sys_write" );
    /** src/mpi/romio/adio/ad_pvfs2/ad_pvfs2_write_list_classic.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "Atomic noncontiguous writes are not supported by PVFS2", 0);
    ChkMsg( err, MPI_ERR_OTHER, "Atomic noncontiguous writes are not supported by PVFS2" );
    /** src/mpi/romio/adio/ad_pvfs2/ad_pvfs2_write_list_classic.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "Error in PVFS_Request_hindexed(file)", 0);
    ChkMsg( err, MPI_ERR_OTHER, "Error in PVFS_Request_hindexed(file)" );
    /** src/mpi/romio/adio/ad_pvfs2/ad_pvfs2_write_list_classic.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "Error in PVFS_Request_hindexed", 0);
    ChkMsg( err, MPI_ERR_OTHER, "Error in PVFS_Request_hindexed" );
    /** src/mpi/romio/adio/ad_zoidfs/ad_zoidfs_common.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "Error in zoidfs_finalize", 0);
    ChkMsg( err, MPI_ERR_OTHER, "Error in zoidfs_finalize" );
    /** src/mpi/romio/adio/ad_zoidfs/ad_zoidfs_common.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "Error in zoidfs_init", 0);
    ChkMsg( err, MPI_ERR_OTHER, "Error in zoidfs_init" );
    /** src/mpi/romio/adio/ad_zoidfs/ad_zoidfs_delete.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "Error in zoidfs_remove", 0);
    ChkMsg( err, MPI_ERR_OTHER, "Error in zoidfs_remove" );
    /** src/mpi/romio/adio/ad_zoidfs/ad_zoidfs_fcntl.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "Error in zoidfs_getattr", 0);
    ChkMsg( err, MPI_ERR_OTHER, "Error in zoidfs_getattr" );
    /** src/mpi/romio/adio/ad_zoidfs/ad_zoidfs_flush.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "Error in zoidfs_commit", 0);
    ChkMsg( err, MPI_ERR_OTHER, "Error in zoidfs_commit" );
    /** src/mpi/romio/adio/ad_zoidfs/ad_zoidfs_io.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "Error in ZOIDFS I/O", 0);
    ChkMsg( err, MPI_ERR_OTHER, "Error in ZOIDFS I/O" );
    /** src/mpi/romio/adio/ad_zoidfs/ad_zoidfs_read_list.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "Error in zoidfs_read", 0);
    ChkMsg( err, MPI_ERR_OTHER, "Error in zoidfs_read" );
    /** src/mpi/romio/adio/ad_zoidfs/ad_zoidfs_resize.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "Error in zoidfs_resize", 0);
    ChkMsg( err, MPI_ERR_OTHER, "Error in zoidfs_resize" );
    /** src/mpi/romio/adio/ad_zoidfs/ad_zoidfs_write_list.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "Atomic noncontiguous writes are not supported by ZOIDFS", 0);
    ChkMsg( err, MPI_ERR_OTHER, "Atomic noncontiguous writes are not supported by ZOIDFS" );
    /** src/mpi/romio/adio/ad_zoidfs/ad_zoidfs_write_list.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "Error in zoidfs_write", 0);
    ChkMsg( err, MPI_ERR_OTHER, "Error in zoidfs_write" );
    /** src/mpi/romio/adio/common/ad_fstype.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**filename", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**filename" );
    {
    /** src/mpi/romio/adio/common/ad_fstype.c */
    char s1[] = "string1";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**filename", "**filename %s", s1 );
    ChkMsg( err, MPI_ERR_OTHER, "**filename %s" );
    }
    /** src/mpi/romio/adio/common/ad_fstype.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**iofstypeunsupported", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**iofstypeunsupported" );
    /** src/mpi/romio/adio/common/ad_open.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**oremote_fail", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**oremote_fail" );
    /** src/mpi/romio/adio/common/ad_open.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**ioagnomatch", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**ioagnomatch" );
    /** src/mpi/romio/adio/common/ad_prealloc.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**iopreallocrdwr", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**iopreallocrdwr" );
    /** src/mpi/romio/adio/common/ad_write_nolock.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "Atomic mode set in I/O function", 0);
    ChkMsg( err, MPI_ERR_OTHER, "Atomic mode set in I/O function" );
    /** src/mpi/romio/adio/common/async_list.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "Unknown request optype", 0);
    ChkMsg( err, MPI_ERR_OTHER, "Unknown request optype" );
    /** src/mpi/romio/adio/include/adioi_error.h */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**iobadfh", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**iobadfh" );
    /** src/mpi/romio/adio/include/adioi_error.h */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**iobadcount", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**iobadcount" );
    /** src/mpi/romio/adio/include/adioi_error.h */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**dtypenull", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**dtypenull" );
    /** src/mpi/romio/adio/include/adioi_error.h */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**iowronly", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**iowronly" );
    /** src/mpi/romio/adio/include/adioi_error.h */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**iordonly", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**iordonly" );
    /** src/mpi/romio/adio/include/adioi_error.h */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**ioamodeseq", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**ioamodeseq" );
    /** src/mpi/romio/adio/include/adioi_error.h */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**ioetype", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**ioetype" );
    /** src/mpi/romio/adio/include/adioi_error.h */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**iosharedunsupported", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**iosharedunsupported" );
    /** src/mpi/romio/adio/include/adioi_error.h */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "System call I/O error", 0);
    ChkMsg( err, MPI_ERR_OTHER, "System call I/O error" );
    {
    /** src/mpi/romio/adio/include/adioi_error.h */
    char s1[] = "string1";
    char s2[] = "string2";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "System call I/O error", "Syscall error from %s: %s", s1, s2 );
    ChkMsg( err, MPI_ERR_OTHER, "Syscall error from %s: %s" );
    }
    /** src/mpi/romio/adio/include/adioi_error.h */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "Value for info key not same across processes", 0);
    ChkMsg( err, MPI_ERR_OTHER, "Value for info key not same across processes" );
    {
    /** src/mpi/romio/adio/include/adioi_error.h */
    char s1[] = "string1";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "Value for info key not same across processes", "Value for info key %s not same across processes", s1 );
    ChkMsg( err, MPI_ERR_OTHER, "Value for info key %s not same across processes" );
    }
    /** src/mpi/romio/mpi-io/get_bytoff.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**iobadoffset", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**iobadoffset" );
    /** src/mpi/romio/mpi-io/get_view.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**iodatarepnomem", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**iodatarepnomem" );
    /** src/mpi/romio/mpi-io/ioreq_f2c.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**request", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**request" );
    /** src/mpi/romio/mpi-io/mpir-mpioinit.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**initialized", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**initialized" );
    /** src/mpi/romio/mpi-io/open.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**comm", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**comm" );
    /** src/mpi/romio/mpi-io/open.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**fileamodeone", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**fileamodeone" );
    /** src/mpi/romio/mpi-io/open.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**fileamoderead", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**fileamoderead" );
    /** src/mpi/romio/mpi-io/open.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**fileamodeseq", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**fileamodeseq" );
    /** src/mpi/romio/mpi-io/open.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**fileamodediff", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**fileamodediff" );
    /** src/mpi/romio/mpi-io/open.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**iosequnsupported", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**iosequnsupported" );
    /** src/mpi/romio/mpi-io/prealloc.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**iobadsize", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**iobadsize" );
    /** src/mpi/romio/mpi-io/read_allb.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**iosplitcoll", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**iosplitcoll" );
    /** src/mpi/romio/mpi-io/read_alle.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**iosplitcollnone", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**iosplitcollnone" );
    /** src/mpi/romio/mpi-io/register_datarep.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**datarepname", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**datarepname" );
    /** src/mpi/romio/mpi-io/register_datarep.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**datarepused", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**datarepused" );
    {
    /** src/mpi/romio/mpi-io/register_datarep.c */
    char s1[] = "string1";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**datarepused", "**datarepused %s", s1 );
    ChkMsg( err, MPI_ERR_OTHER, "**datarepused %s" );
    }
    /** src/mpi/romio/mpi-io/register_datarep.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**datarepextent", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**datarepextent" );
    /** src/mpi/romio/mpi-io/seek.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**ionegoffset", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**ionegoffset" );
    /** src/mpi/romio/mpi-io/seek.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**iobadwhence", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**iobadwhence" );
    /** src/mpi/romio/mpi-io/seek_sh.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**iosharedfailed", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**iosharedfailed" );
    /** src/mpi/romio/mpi-io/set_errh.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**fileopunsupported", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**fileopunsupported" );
    /** src/mpi/romio/mpi-io/set_view.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**iobaddisp", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**iobaddisp" );
    /** src/mpi/romio/mpi-io/set_view.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**iofiletype", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**iofiletype" );
    /** src/mpi/romio/mpi-io/set_view.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**iodispifseq", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**iodispifseq" );
    /** src/mpi/romio/mpi-io/set_view.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**unsupporteddatarep", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**unsupporteddatarep" );
    /** src/mpi/romio/mpi2-other/array/darray.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "Invalid size argument", 0);
    ChkMsg( err, MPI_ERR_OTHER, "Invalid size argument" );
    /** src/mpi/romio/mpi2-other/array/darray.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "Invalid rank argument", 0);
    ChkMsg( err, MPI_ERR_OTHER, "Invalid rank argument" );
    /** src/mpi/romio/mpi2-other/array/darray.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "Invalid ndoms argument", 0);
    ChkMsg( err, MPI_ERR_OTHER, "Invalid ndoms argument" );
    /** src/mpi/romio/mpi2-other/array/darray.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "Invalid array_of_gsizes argument", 0);
    ChkMsg( err, MPI_ERR_OTHER, "Invalid array_of_gsizes argument" );
    /** src/mpi/romio/mpi2-other/array/darray.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "Invalid array_of_distribs argument", 0);
    ChkMsg( err, MPI_ERR_OTHER, "Invalid array_of_distribs argument" );
    /** src/mpi/romio/mpi2-other/array/darray.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "Invalid array_of_dargs argument", 0);
    ChkMsg( err, MPI_ERR_OTHER, "Invalid array_of_dargs argument" );
    /** src/mpi/romio/mpi2-other/array/darray.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "Invalid array_of_psizes argument", 0);
    ChkMsg( err, MPI_ERR_OTHER, "Invalid array_of_psizes argument" );
    /** src/mpi/romio/mpi2-other/array/darray.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "Invalid gsize argument", 0);
    ChkMsg( err, MPI_ERR_OTHER, "Invalid gsize argument" );
    /** src/mpi/romio/mpi2-other/array/darray.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "Invalid darg argument", 0);
    ChkMsg( err, MPI_ERR_OTHER, "Invalid darg argument" );
    /** src/mpi/romio/mpi2-other/array/darray.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "Invalid psize argument", 0);
    ChkMsg( err, MPI_ERR_OTHER, "Invalid psize argument" );
    /** src/mpi/romio/mpi2-other/array/darray.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "Invalid distrib argument", 0);
    ChkMsg( err, MPI_ERR_OTHER, "Invalid distrib argument" );
    /** src/mpi/romio/mpi2-other/array/darray.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "For MPI_DISTRIBUTE_NONE, the number of processes in that dimension of the grid must be 1", 0);
    ChkMsg( err, MPI_ERR_OTHER, "For MPI_DISTRIBUTE_NONE, the number of processes in that dimension of the grid must be 1" );
    /** src/mpi/romio/mpi2-other/array/darray.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "Invalid type argument", 0);
    ChkMsg( err, MPI_ERR_OTHER, "Invalid type argument" );
    /** src/mpi/romio/mpi2-other/array/darray.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "Invalid array size", 0);
    ChkMsg( err, MPI_ERR_OTHER, "Invalid array size" );
    /** src/mpi/romio/mpi2-other/array/darray.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "Invalid order argument", 0);
    ChkMsg( err, MPI_ERR_OTHER, "Invalid order argument" );
    /** src/mpi/romio/mpi2-other/array/darray.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "Internal error", 0);
    ChkMsg( err, MPI_ERR_OTHER, "Internal error" );
    /** src/mpi/romio/mpi2-other/array/subarray.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "Invalid ndims argument", 0);
    ChkMsg( err, MPI_ERR_OTHER, "Invalid ndims argument" );
    /** src/mpi/romio/mpi2-other/array/subarray.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "Invalid array_of_sizes argument", 0);
    ChkMsg( err, MPI_ERR_OTHER, "Invalid array_of_sizes argument" );
    /** src/mpi/romio/mpi2-other/array/subarray.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "Invalid array_of_subsizes argument", 0);
    ChkMsg( err, MPI_ERR_OTHER, "Invalid array_of_subsizes argument" );
    /** src/mpi/romio/mpi2-other/array/subarray.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "Invalid array_of_starts argument", 0);
    ChkMsg( err, MPI_ERR_OTHER, "Invalid array_of_starts argument" );
    /** src/mpi/romio/mpi2-other/array/subarray.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "Invalid subsize argument", 0);
    ChkMsg( err, MPI_ERR_OTHER, "Invalid subsize argument" );
    /** src/mpi/romio/mpi2-other/array/subarray.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "Invalid start argument", 0);
    ChkMsg( err, MPI_ERR_OTHER, "Invalid start argument" );
    /** src/mpi/spawn/close_port.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_close_port", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_close_port" );
    {
    /** src/mpi/spawn/close_port.c */
    char s1[] = "string1";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_close_port", "**mpi_close_port %s", s1 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_close_port %s" );
    }
    /** src/mpi/spawn/comm_accept.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_comm_accept", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_comm_accept" );
    {
    /** src/mpi/spawn/comm_accept.c */
    char s1[] = "string1";
    int i2 = MPI_INFO_NULL;
    int i3 = 3;
    int i4 = MPI_COMM_WORLD;
    char s5[] = "pointer5";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_comm_accept", "**mpi_comm_accept %s %I %d %C %p", s1, i2, i3, i4, s5 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_comm_accept %s %I %d %C %p" );
    }
    /** src/mpi/spawn/comm_connect.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_comm_connect", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_comm_connect" );
    {
    /** src/mpi/spawn/comm_connect.c */
    char s1[] = "string1";
    int i2 = MPI_INFO_NULL;
    int i3 = 3;
    int i4 = MPI_COMM_WORLD;
    char s5[] = "pointer5";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_comm_connect", "**mpi_comm_connect %s %I %d %C %p", s1, i2, i3, i4, s5 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_comm_connect %s %I %d %C %p" );
    }
    /** src/mpi/spawn/comm_disconnect.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_comm_disconnect", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_comm_disconnect" );
    {
    /** src/mpi/spawn/comm_disconnect.c */
    int i1 = MPI_COMM_WORLD;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_comm_disconnect", "**mpi_comm_disconnect %C", i1 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_comm_disconnect %C" );
    }
    /** src/mpi/spawn/comm_get_parent.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_comm_get_parent", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_comm_get_parent" );
    {
    /** src/mpi/spawn/comm_get_parent.c */
    char s1[] = "pointer1";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_comm_get_parent", "**mpi_comm_get_parent %p", s1 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_comm_get_parent %p" );
    }
    /** src/mpi/spawn/comm_join.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**openportfailed", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**openportfailed" );
    /** src/mpi/spawn/comm_join.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**join_send", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**join_send" );
    {
    /** src/mpi/spawn/comm_join.c */
    int i1 = 1;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**join_send", "**join_send %d", i1 );
    ChkMsg( err, MPI_ERR_OTHER, "**join_send %d" );
    }
    /** src/mpi/spawn/comm_join.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**join_recv", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**join_recv" );
    {
    /** src/mpi/spawn/comm_join.c */
    int i1 = 1;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**join_recv", "**join_recv %d", i1 );
    ChkMsg( err, MPI_ERR_OTHER, "**join_recv %d" );
    }
    /** src/mpi/spawn/comm_join.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**join_portname", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**join_portname" );
    {
    /** src/mpi/spawn/comm_join.c */
    char s1[] = "string1";
    char s2[] = "string2";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**join_portname", "**join_portname %s %s", s1, s2 );
    ChkMsg( err, MPI_ERR_OTHER, "**join_portname %s %s" );
    }
    /** src/mpi/spawn/comm_join.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_comm_join", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_comm_join" );
    {
    /** src/mpi/spawn/comm_join.c */
    int i1 = 1;
    char s2[] = "pointer2";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_comm_join", "**mpi_comm_join %d %p", i1, s2 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_comm_join %d %p" );
    }
    /** src/mpi/spawn/comm_spawn.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_comm_spawn", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_comm_spawn" );
    {
    /** src/mpi/spawn/comm_spawn.c */
    char s1[] = "string1";
    char s2[] = "pointer2";
    int i3 = 3;
    int i4 = MPI_INFO_NULL;
    int i5 = 5;
    int i6 = MPI_COMM_WORLD;
    char s7[] = "pointer7";
    char s8[] = "pointer8";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_comm_spawn", "**mpi_comm_spawn %s %p %d %I %d %C %p %p", s1, s2, i3, i4, i5, i6, s7, s8 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_comm_spawn %s %p %d %I %d %C %p %p" );
    }
    /** src/mpi/spawn/comm_spawn_multiple.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_comm_spawn_multiple", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_comm_spawn_multiple" );
    {
    /** src/mpi/spawn/comm_spawn_multiple.c */
    int i1 = 1;
    char s2[] = "pointer2";
    char s3[] = "pointer3";
    char s4[] = "pointer4";
    char s5[] = "pointer5";
    int i6 = 6;
    int i7 = MPI_COMM_WORLD;
    char s8[] = "pointer8";
    char s9[] = "pointer9";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_comm_spawn_multiple", "**mpi_comm_spawn_multiple %d %p %p %p %p %d %C %p %p", i1, s2, s3, s4, s5, i6, i7, s8, s9 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_comm_spawn_multiple %d %p %p %p %p %d %C %p %p" );
    }
    /** src/mpi/spawn/lookup_name.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**nonamepub", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**nonamepub" );
    /** src/mpi/spawn/lookup_name.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_lookup_name", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_lookup_name" );
    {
    /** src/mpi/spawn/lookup_name.c */
    char s1[] = "string1";
    int i2 = MPI_INFO_NULL;
    char s3[] = "pointer3";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_lookup_name", "**mpi_lookup_name %s %I %p", s1, i2, s3 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_lookup_name %s %I %p" );
    }
    /** src/mpi/spawn/open_port.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_open_port", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_open_port" );
    {
    /** src/mpi/spawn/open_port.c */
    int i1 = MPI_INFO_NULL;
    char s2[] = "pointer2";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_open_port", "**mpi_open_port %I %p", i1, s2 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_open_port %I %p" );
    }
    /** src/mpi/spawn/publish_name.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_publish_name", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_publish_name" );
    {
    /** src/mpi/spawn/publish_name.c */
    char s1[] = "string1";
    int i2 = MPI_INFO_NULL;
    char s3[] = "string3";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_publish_name", "**mpi_publish_name %s %I %s", s1, i2, s3 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_publish_name %s %I %s" );
    }
    /** src/mpi/spawn/unpublish_name.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_unpublish_name", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_unpublish_name" );
    {
    /** src/mpi/spawn/unpublish_name.c */
    char s1[] = "string1";
    int i2 = MPI_INFO_NULL;
    char s3[] = "string3";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_unpublish_name", "**mpi_unpublish_name %s %I %s", s1, i2, s3 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_unpublish_name %s %I %s" );
    }
    /** src/mpi/topo/cart_coords.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**notcarttopo", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**notcarttopo" );
    /** src/mpi/topo/cart_coords.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**dimsmany", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**dimsmany" );
    {
    /** src/mpi/topo/cart_coords.c */
    int i1 = 1;
    int i2 = 2;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**dimsmany", "**dimsmany %d %d", i1, i2 );
    ChkMsg( err, MPI_ERR_OTHER, "**dimsmany %d %d" );
    }
    /** src/mpi/topo/cart_coords.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_cart_coords", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_cart_coords" );
    {
    /** src/mpi/topo/cart_coords.c */
    int i1 = MPI_COMM_WORLD;
    int i2 = 2;
    int i3 = 3;
    char s4[] = "pointer4";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_cart_coords", "**mpi_cart_coords %C %d %d %p", i1, i2, i3, s4 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_cart_coords %C %d %d %p" );
    }
    /** src/mpi/topo/cart_create.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**cartdim", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**cartdim" );
    {
    /** src/mpi/topo/cart_create.c */
    int i1 = 1;
    int i2 = 2;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**cartdim", "**cartdim %d %d", i1, i2 );
    ChkMsg( err, MPI_ERR_OTHER, "**cartdim %d %d" );
    }
    /** src/mpi/topo/cart_create.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**dims", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**dims" );
    {
    /** src/mpi/topo/cart_create.c */
    int i1 = 1;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**dims", "**dims %d", i1 );
    ChkMsg( err, MPI_ERR_OTHER, "**dims %d" );
    }
    /** src/mpi/topo/cart_create.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_cart_create", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_cart_create" );
    {
    /** src/mpi/topo/cart_create.c */
    int i1 = MPI_COMM_WORLD;
    int i2 = 2;
    char s3[] = "pointer3";
    char s4[] = "pointer4";
    int i5 = 5;
    char s6[] = "pointer6";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_cart_create", "**mpi_cart_create %C %d %p %p %d %p", i1, i2, s3, s4, i5, s6 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_cart_create %C %d %p %p %d %p" );
    }
    /** src/mpi/topo/cart_get.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_cart_get", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_cart_get" );
    {
    /** src/mpi/topo/cart_get.c */
    int i1 = MPI_COMM_WORLD;
    int i2 = 2;
    char s3[] = "pointer3";
    char s4[] = "pointer4";
    char s5[] = "pointer5";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_cart_get", "**mpi_cart_get %C %d %p %p %p", i1, i2, s3, s4, s5 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_cart_get %C %d %p %p %p" );
    }
    /** src/mpi/topo/cart_map.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**topotoolarge", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**topotoolarge" );
    {
    /** src/mpi/topo/cart_map.c */
    int i1 = 1;
    int i2 = 2;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**topotoolarge", "**topotoolarge %d %d", i1, i2 );
    ChkMsg( err, MPI_ERR_OTHER, "**topotoolarge %d %d" );
    }
    /** src/mpi/topo/cart_map.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_cart_map", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_cart_map" );
    {
    /** src/mpi/topo/cart_map.c */
    int i1 = MPI_COMM_WORLD;
    int i2 = 2;
    char s3[] = "pointer3";
    char s4[] = "pointer4";
    char s5[] = "pointer5";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_cart_map", "**mpi_cart_map %C %d %p %p %p", i1, i2, s3, s4, s5 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_cart_map %C %d %p %p %p" );
    }
    /** src/mpi/topo/cart_rank.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**cartcoordinvalid", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**cartcoordinvalid" );
    {
    /** src/mpi/topo/cart_rank.c */
    int i1 = 1;
    int i2 = 2;
    int i3 = 3;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**cartcoordinvalid", "**cartcoordinvalid %d %d %d", i1, i2, i3 );
    ChkMsg( err, MPI_ERR_OTHER, "**cartcoordinvalid %d %d %d" );
    }
    /** src/mpi/topo/cart_rank.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_cart_rank", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_cart_rank" );
    {
    /** src/mpi/topo/cart_rank.c */
    int i1 = MPI_COMM_WORLD;
    char s2[] = "pointer2";
    char s3[] = "pointer3";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_cart_rank", "**mpi_cart_rank %C %p %p", i1, s2, s3 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_cart_rank %C %p %p" );
    }
    /** src/mpi/topo/cart_shift.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**dimszero", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**dimszero" );
    /** src/mpi/topo/cart_shift.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_cart_shift", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_cart_shift" );
    {
    /** src/mpi/topo/cart_shift.c */
    int i1 = MPI_COMM_WORLD;
    int i2 = 2;
    int i3 = 3;
    char s4[] = "pointer4";
    char s5[] = "pointer5";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_cart_shift", "**mpi_cart_shift %C %d %d %p %p", i1, i2, i3, s4, s5 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_cart_shift %C %d %d %p %p" );
    }
    /** src/mpi/topo/cart_sub.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**notopology", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**notopology" );
    /** src/mpi/topo/cart_sub.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_cart_sub", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_cart_sub" );
    {
    /** src/mpi/topo/cart_sub.c */
    int i1 = MPI_COMM_WORLD;
    char s2[] = "pointer2";
    char s3[] = "pointer3";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_cart_sub", "**mpi_cart_sub %C %p %p", i1, s2, s3 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_cart_sub %C %p %p" );
    }
    /** src/mpi/topo/cartdim_get.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_cartdim_get", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_cartdim_get" );
    {
    /** src/mpi/topo/cartdim_get.c */
    int i1 = MPI_COMM_WORLD;
    char s2[] = "pointer2";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_cartdim_get", "**mpi_cartdim_get %C %p", i1, s2 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_cartdim_get %C %p" );
    }
    /** src/mpi/topo/dims_create.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**argarrayneg", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**argarrayneg" );
    {
    /** src/mpi/topo/dims_create.c */
    char s1[] = "string1";
    int i2 = 2;
    int i3 = 3;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**argarrayneg", "**argarrayneg %s %d %d", s1, i2, i3 );
    ChkMsg( err, MPI_ERR_OTHER, "**argarrayneg %s %d %d" );
    }
    /** src/mpi/topo/dims_create.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**dimspartition", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**dimspartition" );
    /** src/mpi/topo/dims_create.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_dims_create", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_dims_create" );
    {
    /** src/mpi/topo/dims_create.c */
    int i1 = 1;
    int i2 = 2;
    char s3[] = "pointer3";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_dims_create", "**mpi_dims_create %d %d %p", i1, i2, s3 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_dims_create %d %d %p" );
    }
    /** src/mpi/topo/dist_gr_create.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_dist_graph_create", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_dist_graph_create" );
    {
    /** src/mpi/topo/dist_gr_create.c */
    int i1 = MPI_COMM_WORLD;
    int i2 = 2;
    char s3[] = "pointer3";
    char s4[] = "pointer4";
    char s5[] = "pointer5";
    char s6[] = "pointer6";
    int i7 = MPI_INFO_NULL;
    int i8 = 8;
    char s9[] = "pointer9";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_dist_graph_create", "**mpi_dist_graph_create %C %d %p %p %p %p %I %d %p", i1, i2, s3, s4, s5, s6, i7, i8, s9 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_dist_graph_create %C %d %p %p %p %p %I %d %p" );
    }
    /** src/mpi/topo/dist_gr_create_adj.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**unweightedboth", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**unweightedboth" );
    /** src/mpi/topo/dist_gr_create_adj.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_dist_graph_create_adjacent", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_dist_graph_create_adjacent" );
    {
    /** src/mpi/topo/dist_gr_create_adj.c */
    int i1 = MPI_COMM_WORLD;
    int i2 = 2;
    char s3[] = "pointer3";
    char s4[] = "pointer4";
    int i5 = 5;
    char s6[] = "pointer6";
    char s7[] = "pointer7";
    int i8 = MPI_INFO_NULL;
    int i9 = 9;
    char s10[] = "pointer10";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_dist_graph_create_adjacent", "**mpi_dist_graph_create_adjacent %C %d %p %p %d %p %p %I %d %p", i1, i2, s3, s4, i5, s6, s7, i8, i9, s10 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_dist_graph_create_adjacent %C %d %p %p %d %p %p %I %d %p" );
    }
    /** src/mpi/topo/dist_gr_neighb.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**notdistgraphtopo", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**notdistgraphtopo" );
    /** src/mpi/topo/dist_gr_neighb.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_dist_graph_neighbors", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_dist_graph_neighbors" );
    {
    /** src/mpi/topo/dist_gr_neighb.c */
    int i1 = MPI_COMM_WORLD;
    int i2 = 2;
    char s3[] = "pointer3";
    char s4[] = "pointer4";
    int i5 = 5;
    char s6[] = "pointer6";
    char s7[] = "pointer7";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_dist_graph_neighbors", "**mpi_dist_graph_neighbors %C %d %p %p %d %p %p", i1, i2, s3, s4, i5, s6, s7 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_dist_graph_neighbors %C %d %p %p %d %p %p" );
    }
    /** src/mpi/topo/dist_gr_neighb_count.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_dist_graph_neighbors_count", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_dist_graph_neighbors_count" );
    {
    /** src/mpi/topo/dist_gr_neighb_count.c */
    int i1 = MPI_COMM_WORLD;
    char s2[] = "pointer2";
    char s3[] = "pointer3";
    char s4[] = "pointer4";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_dist_graph_neighbors_count", "**mpi_dist_graph_neighbors_count %C %p %p %p", i1, s2, s3, s4 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_dist_graph_neighbors_count %C %p %p %p" );
    }
    /** src/mpi/topo/graph_get.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**notgraphtopo", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**notgraphtopo" );
    /** src/mpi/topo/graph_get.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_graph_get", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_graph_get" );
    {
    /** src/mpi/topo/graph_get.c */
    int i1 = MPI_COMM_WORLD;
    int i2 = 2;
    int i3 = 3;
    char s4[] = "pointer4";
    char s5[] = "pointer5";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_graph_get", "**mpi_graph_get %C %d %d %p %p", i1, i2, i3, s4, s5 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_graph_get %C %d %d %p %p" );
    }
    /** src/mpi/topo/graph_map.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**graphnnodes", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**graphnnodes" );
    /** src/mpi/topo/graph_map.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_graph_map", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_graph_map" );
    {
    /** src/mpi/topo/graph_map.c */
    int i1 = MPI_COMM_WORLD;
    int i2 = 2;
    char s3[] = "pointer3";
    char s4[] = "pointer4";
    char s5[] = "pointer5";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_graph_map", "**mpi_graph_map %C %d %p %p %p", i1, i2, s3, s4, s5 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_graph_map %C %d %p %p %p" );
    }
    /** src/mpi/topo/graph_nbr.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_graph_neighbors", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_graph_neighbors" );
    {
    /** src/mpi/topo/graph_nbr.c */
    int i1 = MPI_COMM_WORLD;
    int i2 = 2;
    int i3 = 3;
    char s4[] = "pointer4";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_graph_neighbors", "**mpi_graph_neighbors %C %d %d %p", i1, i2, i3, s4 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_graph_neighbors %C %d %d %p" );
    }
    /** src/mpi/topo/graphcreate.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_graph_create", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_graph_create" );
    {
    /** src/mpi/topo/graphcreate.c */
    int i1 = MPI_COMM_WORLD;
    int i2 = 2;
    char s3[] = "pointer3";
    char s4[] = "pointer4";
    int i5 = 5;
    char s6[] = "pointer6";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_graph_create", "**mpi_graph_create %C %d %p %p %d %p", i1, i2, s3, s4, i5, s6 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_graph_create %C %d %p %p %d %p" );
    }
    /** src/mpi/topo/graphcreate.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**indexneg", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**indexneg" );
    {
    /** src/mpi/topo/graphcreate.c */
    int i1 = 1;
    int i2 = 2;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**indexneg", "**indexneg %d %d", i1, i2 );
    ChkMsg( err, MPI_ERR_OTHER, "**indexneg %d %d" );
    }
    /** src/mpi/topo/graphcreate.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**indexnonmonotone", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**indexnonmonotone" );
    {
    /** src/mpi/topo/graphcreate.c */
    int i1 = 1;
    int i2 = 2;
    int i3 = 3;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**indexnonmonotone", "**indexnonmonotone %d %d %d", i1, i2, i3 );
    ChkMsg( err, MPI_ERR_OTHER, "**indexnonmonotone %d %d %d" );
    }
    /** src/mpi/topo/graphcreate.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**edgeoutrange", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**edgeoutrange" );
    {
    /** src/mpi/topo/graphcreate.c */
    int i1 = 1;
    int i2 = 2;
    int i3 = 3;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**edgeoutrange", "**edgeoutrange %d %d %d", i1, i2, i3 );
    ChkMsg( err, MPI_ERR_OTHER, "**edgeoutrange %d %d %d" );
    }
    /** src/mpi/topo/graphdimsget.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_graphdims_get", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_graphdims_get" );
    {
    /** src/mpi/topo/graphdimsget.c */
    int i1 = MPI_COMM_WORLD;
    char s2[] = "pointer2";
    char s3[] = "pointer3";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_graphdims_get", "**mpi_graphdims_get %C %p %p", i1, s2, s3 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_graphdims_get %C %p %p" );
    }
    /** src/mpi/topo/graphnbrcnt.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_graph_neighbors_count", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_graph_neighbors_count" );
    {
    /** src/mpi/topo/graphnbrcnt.c */
    int i1 = MPI_COMM_WORLD;
    int i2 = 2;
    char s3[] = "pointer3";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_graph_neighbors_count", "**mpi_graph_neighbors_count %C %d %p", i1, i2, s3 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_graph_neighbors_count %C %d %p" );
    }
    /** src/mpi/topo/inhb_allgather.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpix_ineighbor_allgather", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpix_ineighbor_allgather" );
    {
    /** src/mpi/topo/inhb_allgather.c */
    char s1[] = "pointer1";
    int i2 = 2;
    int i3 = MPI_INT;
    char s4[] = "pointer4";
    int i5 = 5;
    int i6 = MPI_INT;
    int i7 = MPI_COMM_WORLD;
    char s8[] = "pointer8";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpix_ineighbor_allgather", "**mpix_ineighbor_allgather %p %d %D %p %d %D %C %p", s1, i2, i3, s4, i5, i6, i7, s8 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpix_ineighbor_allgather %p %d %D %p %d %D %C %p" );
    }
    /** src/mpi/topo/inhb_allgatherv.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpix_ineighbor_allgatherv", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpix_ineighbor_allgatherv" );
    {
    /** src/mpi/topo/inhb_allgatherv.c */
    char s1[] = "pointer1";
    int i2 = 2;
    int i3 = MPI_INT;
    char s4[] = "pointer4";
    char s5[] = "pointer5";
    char s6[] = "pointer6";
    int i7 = MPI_INT;
    int i8 = MPI_COMM_WORLD;
    char s9[] = "pointer9";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpix_ineighbor_allgatherv", "**mpix_ineighbor_allgatherv %p %d %D %p %p %p %D %C %p", s1, i2, i3, s4, s5, s6, i7, i8, s9 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpix_ineighbor_allgatherv %p %d %D %p %p %p %D %C %p" );
    }
    /** src/mpi/topo/inhb_alltoall.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpix_ineighbor_alltoall", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpix_ineighbor_alltoall" );
    {
    /** src/mpi/topo/inhb_alltoall.c */
    char s1[] = "pointer1";
    int i2 = 2;
    int i3 = MPI_INT;
    char s4[] = "pointer4";
    int i5 = 5;
    int i6 = MPI_INT;
    int i7 = MPI_COMM_WORLD;
    char s8[] = "pointer8";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpix_ineighbor_alltoall", "**mpix_ineighbor_alltoall %p %d %D %p %d %D %C %p", s1, i2, i3, s4, i5, i6, i7, s8 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpix_ineighbor_alltoall %p %d %D %p %d %D %C %p" );
    }
    /** src/mpi/topo/inhb_alltoallv.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpix_ineighbor_alltoallv", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpix_ineighbor_alltoallv" );
    {
    /** src/mpi/topo/inhb_alltoallv.c */
    char s1[] = "pointer1";
    char s2[] = "pointer2";
    char s3[] = "pointer3";
    int i4 = MPI_INT;
    char s5[] = "pointer5";
    char s6[] = "pointer6";
    char s7[] = "pointer7";
    int i8 = MPI_INT;
    int i9 = MPI_COMM_WORLD;
    char s10[] = "pointer10";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpix_ineighbor_alltoallv", "**mpix_ineighbor_alltoallv %p %p %p %D %p %p %p %D %C %p", s1, s2, s3, i4, s5, s6, s7, i8, i9, s10 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpix_ineighbor_alltoallv %p %p %p %D %p %p %p %D %C %p" );
    }
    /** src/mpi/topo/inhb_alltoallw.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpix_ineighbor_alltoallw", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpix_ineighbor_alltoallw" );
    {
    /** src/mpi/topo/inhb_alltoallw.c */
    char s1[] = "pointer1";
    char s2[] = "pointer2";
    char s3[] = "pointer3";
    char s4[] = "pointer4";
    char s5[] = "pointer5";
    char s6[] = "pointer6";
    char s7[] = "pointer7";
    char s8[] = "pointer8";
    int i9 = MPI_COMM_WORLD;
    char s10[] = "pointer10";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpix_ineighbor_alltoallw", "**mpix_ineighbor_alltoallw %p %p %p %p %p %p %p %p %C %p", s1, s2, s3, s4, s5, s6, s7, s8, i9, s10 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpix_ineighbor_alltoallw %p %p %p %p %p %p %p %p %C %p" );
    }
    /** src/mpi/topo/nhb_allgather.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpix_neighbor_allgather", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpix_neighbor_allgather" );
    {
    /** src/mpi/topo/nhb_allgather.c */
    char s1[] = "pointer1";
    int i2 = 2;
    int i3 = MPI_INT;
    char s4[] = "pointer4";
    int i5 = 5;
    int i6 = MPI_INT;
    int i7 = MPI_COMM_WORLD;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpix_neighbor_allgather", "**mpix_neighbor_allgather %p %d %D %p %d %D %C", s1, i2, i3, s4, i5, i6, i7 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpix_neighbor_allgather %p %d %D %p %d %D %C" );
    }
    /** src/mpi/topo/nhb_allgatherv.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpix_neighbor_allgatherv", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpix_neighbor_allgatherv" );
    {
    /** src/mpi/topo/nhb_allgatherv.c */
    char s1[] = "pointer1";
    int i2 = 2;
    int i3 = MPI_INT;
    char s4[] = "pointer4";
    char s5[] = "pointer5";
    char s6[] = "pointer6";
    int i7 = MPI_INT;
    int i8 = MPI_COMM_WORLD;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpix_neighbor_allgatherv", "**mpix_neighbor_allgatherv %p %d %D %p %p %p %D %C", s1, i2, i3, s4, s5, s6, i7, i8 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpix_neighbor_allgatherv %p %d %D %p %p %p %D %C" );
    }
    /** src/mpi/topo/nhb_alltoall.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpix_neighbor_alltoall", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpix_neighbor_alltoall" );
    {
    /** src/mpi/topo/nhb_alltoall.c */
    char s1[] = "pointer1";
    int i2 = 2;
    int i3 = MPI_INT;
    char s4[] = "pointer4";
    int i5 = 5;
    int i6 = MPI_INT;
    int i7 = MPI_COMM_WORLD;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpix_neighbor_alltoall", "**mpix_neighbor_alltoall %p %d %D %p %d %D %C", s1, i2, i3, s4, i5, i6, i7 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpix_neighbor_alltoall %p %d %D %p %d %D %C" );
    }
    /** src/mpi/topo/nhb_alltoallv.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpix_neighbor_alltoallv", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpix_neighbor_alltoallv" );
    {
    /** src/mpi/topo/nhb_alltoallv.c */
    char s1[] = "pointer1";
    char s2[] = "pointer2";
    char s3[] = "pointer3";
    int i4 = MPI_INT;
    char s5[] = "pointer5";
    char s6[] = "pointer6";
    char s7[] = "pointer7";
    int i8 = MPI_INT;
    int i9 = MPI_COMM_WORLD;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpix_neighbor_alltoallv", "**mpix_neighbor_alltoallv %p %p %p %D %p %p %p %D %C", s1, s2, s3, i4, s5, s6, s7, i8, i9 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpix_neighbor_alltoallv %p %p %p %D %p %p %p %D %C" );
    }
    /** src/mpi/topo/nhb_alltoallw.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpix_neighbor_alltoallw", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpix_neighbor_alltoallw" );
    {
    /** src/mpi/topo/nhb_alltoallw.c */
    char s1[] = "pointer1";
    char s2[] = "pointer2";
    char s3[] = "pointer3";
    char s4[] = "pointer4";
    char s5[] = "pointer5";
    char s6[] = "pointer6";
    char s7[] = "pointer7";
    char s8[] = "pointer8";
    int i9 = MPI_COMM_WORLD;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpix_neighbor_alltoallw", "**mpix_neighbor_alltoallw %p %p %p %p %p %p %p %p %C", s1, s2, s3, s4, s5, s6, s7, s8, i9 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpix_neighbor_alltoallw %p %p %p %p %p %p %p %p %C" );
    }
    /** src/mpi/topo/topo_test.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_topo_test", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_topo_test" );
    {
    /** src/mpi/topo/topo_test.c */
    int i1 = MPI_COMM_WORLD;
    char s2[] = "pointer2";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_topo_test", "**mpi_topo_test %C %p", i1, s2 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_topo_test %C %p" );
    }
    /** src/nameserv/file/file_nameserv.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**namepubfile", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**namepubfile" );
    {
    /** src/nameserv/file/file_nameserv.c */
    char s1[] = "string1";
    char s2[] = "string2";
    char s3[] = "string3";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**namepubfile", "**namepubfile %s %s %s", s1, s2, s3 );
    ChkMsg( err, MPI_ERR_OTHER, "**namepubfile %s %s %s" );
    }
    /** src/nameserv/file/file_nameserv.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**namepubnotpub", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**namepubnotpub" );
    {
    /** src/nameserv/file/file_nameserv.c */
    char s1[] = "string1";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**namepubnotpub", "**namepubnotpub %s", s1 );
    ChkMsg( err, MPI_ERR_OTHER, "**namepubnotpub %s" );
    }
    /** src/nameserv/file/file_nameserv.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**namepubnotfound", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**namepubnotfound" );
    {
    /** src/nameserv/file/file_nameserv.c */
    char s1[] = "string1";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**namepubnotfound", "**namepubnotfound %s", s1 );
    ChkMsg( err, MPI_ERR_OTHER, "**namepubnotfound %s" );
    }
    /** src/nameserv/mpd/mpd_nameserv.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**namepubnotunpub", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**namepubnotunpub" );
    {
    /** src/nameserv/mpd/mpd_nameserv.c */
    char s1[] = "string1";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**namepubnotunpub", "**namepubnotunpub %s", s1 );
    ChkMsg( err, MPI_ERR_OTHER, "**namepubnotunpub %s" );
    }
    /** src/nameserv/pmi/pmi_nameserv.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**pmi_kvs_put", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**pmi_kvs_put" );
    /** src/nameserv/pmi/pmi_nameserv.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**pmi_kvs_commit", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**pmi_kvs_commit" );
    /** src/nameserv/pmi/pmi_nameserv.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**pmi_kvs_get", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**pmi_kvs_get" );
    /** src/util/info/info_create.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_info_create", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_info_create" );
    {
    /** src/util/info/info_create.c */
    char s1[] = "pointer1";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_info_create", "**mpi_info_create %p", s1 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_info_create %p" );
    }
    /** src/util/info/info_delete.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**infokeynull", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**infokeynull" );
    /** src/util/info/info_delete.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**infokeylong", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**infokeylong" );
    /** src/util/info/info_delete.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**infokeyempty", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**infokeyempty" );
    /** src/util/info/info_delete.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**infonokey", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**infonokey" );
    {
    /** src/util/info/info_delete.c */
    char s1[] = "string1";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**infonokey", "**infonokey %s", s1 );
    ChkMsg( err, MPI_ERR_OTHER, "**infonokey %s" );
    }
    /** src/util/info/info_delete.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_info_delete", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_info_delete" );
    {
    /** src/util/info/info_delete.c */
    int i1 = MPI_INFO_NULL;
    char s2[] = "string2";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_info_delete", "**mpi_info_delete %I %s", i1, s2 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_info_delete %I %s" );
    }
    /** src/util/info/info_dup.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_info_dup", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_info_dup" );
    {
    /** src/util/info/info_dup.c */
    int i1 = MPI_INFO_NULL;
    char s2[] = "pointer2";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_info_dup", "**mpi_info_dup %I %p", i1, s2 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_info_dup %I %p" );
    }
    /** src/util/info/info_free.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_info_free", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_info_free" );
    {
    /** src/util/info/info_free.c */
    char s1[] = "pointer1";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_info_free", "**mpi_info_free %p", s1 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_info_free %p" );
    }
    /** src/util/info/info_get.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**infovalnull", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**infovalnull" );
    /** src/util/info/info_get.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_info_get", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_info_get" );
    {
    /** src/util/info/info_get.c */
    int i1 = MPI_INFO_NULL;
    char s2[] = "string2";
    int i3 = 3;
    char s4[] = "pointer4";
    char s5[] = "pointer5";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_info_get", "**mpi_info_get %I %s %d %p %p", i1, s2, i3, s4, s5 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_info_get %I %s %d %p %p" );
    }
    /** src/util/info/info_getn.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_info_get_nkeys", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_info_get_nkeys" );
    {
    /** src/util/info/info_getn.c */
    int i1 = MPI_INFO_NULL;
    char s2[] = "pointer2";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_info_get_nkeys", "**mpi_info_get_nkeys %I %p", i1, s2 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_info_get_nkeys %I %p" );
    }
    /** src/util/info/info_getnth.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**infonkey", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**infonkey" );
    {
    /** src/util/info/info_getnth.c */
    int i1 = 1;
    int i2 = 2;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**infonkey", "**infonkey %d %d", i1, i2 );
    ChkMsg( err, MPI_ERR_OTHER, "**infonkey %d %d" );
    }
    /** src/util/info/info_getnth.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_info_get_nthkey", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_info_get_nthkey" );
    {
    /** src/util/info/info_getnth.c */
    int i1 = MPI_INFO_NULL;
    int i2 = 2;
    char s3[] = "pointer3";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_info_get_nthkey", "**mpi_info_get_nthkey %I %d %p", i1, i2, s3 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_info_get_nthkey %I %d %p" );
    }
    /** src/util/info/info_getvallen.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_info_get_valuelen", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_info_get_valuelen" );
    {
    /** src/util/info/info_getvallen.c */
    int i1 = MPI_INFO_NULL;
    char s2[] = "string2";
    char s3[] = "pointer3";
    char s4[] = "pointer4";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_info_get_valuelen", "**mpi_info_get_valuelen %I %s %p %p", i1, s2, s3, s4 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_info_get_valuelen %I %s %p %p" );
    }
    /** src/util/info/info_set.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**infovallong", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**infovallong" );
    /** src/util/info/info_set.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_info_set", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_info_set" );
    {
    /** src/util/info/info_set.c */
    int i1 = MPI_INFO_NULL;
    char s2[] = "string2";
    char s3[] = "string3";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_info_set", "**mpi_info_set %I %s %s", i1, s2, s3 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_info_set %I %s %s" );
    }
    /** src/util/procmap/local_proc.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**dynamic_node_ids", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**dynamic_node_ids" );
    /** src/util/procmap/local_proc.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**nomem2", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**nomem2" );
    /** src/util/wrappers/mpiu_shm_wrappers.h */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**shmw_gethnd", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**shmw_gethnd" );
    /** src/util/wrappers/mpiu_shm_wrappers.h */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**shmw_deserbufbig", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**shmw_deserbufbig" );
    /** src/util/wrappers/mpiu_shm_wrappers.h */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**alloc_shar_mem", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**alloc_shar_mem" );
    {
    /** src/util/wrappers/mpiu_shm_wrappers.h */
    char s1[] = "string1";
    char s2[] = "string2";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**alloc_shar_mem", "**alloc_shar_mem %s %s", s1, s2 );
    ChkMsg( err, MPI_ERR_OTHER, "**alloc_shar_mem %s %s" );
    }
    /** src/util/wrappers/mpiu_shm_wrappers.h */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**shmw_badhnd", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**shmw_badhnd" );
    /** src/util/wrappers/mpiu_shm_wrappers.h */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**attach_shar_mem", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**attach_shar_mem" );
    {
    /** src/util/wrappers/mpiu_shm_wrappers.h */
    char s1[] = "string1";
    char s2[] = "string2";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**attach_shar_mem", "**attach_shar_mem %s %s", s1, s2 );
    ChkMsg( err, MPI_ERR_OTHER, "**attach_shar_mem %s %s" );
    }
    /** src/util/wrappers/mpiu_shm_wrappers.h */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**detach_shar_mem", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**detach_shar_mem" );
    {
    /** src/util/wrappers/mpiu_shm_wrappers.h */
    char s1[] = "string1";
    char s2[] = "string2";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**detach_shar_mem", "**detach_shar_mem %s %s", s1, s2 );
    ChkMsg( err, MPI_ERR_OTHER, "**detach_shar_mem %s %s" );
    }
    /** src/util/wrappers/mpiu_shm_wrappers.h */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**remove_shar_mem", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**remove_shar_mem" );
    {
    /** src/util/wrappers/mpiu_shm_wrappers.h */
    char s1[] = "string1";
    char s2[] = "string2";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**remove_shar_mem", "**remove_shar_mem %s %s", s1, s2 );
    ChkMsg( err, MPI_ERR_OTHER, "**remove_shar_mem %s %s" );
    }
    /** src/util/wrappers/mpiu_shm_wrappers.h */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mkstemp", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mkstemp" );
    {
    /** src/util/wrappers/mpiu_shm_wrappers.h */
    char s1[] = "string1";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mkstemp", "**mkstemp %s", s1 );
    ChkMsg( err, MPI_ERR_OTHER, "**mkstemp %s" );
    }
    /** src/util/wrappers/mpiu_shm_wrappers.h */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**lseek", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**lseek" );
    {
    /** src/util/wrappers/mpiu_shm_wrappers.h */
    char s1[] = "string1";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**lseek", "**lseek %s", s1 );
    ChkMsg( err, MPI_ERR_OTHER, "**lseek %s" );
    }
    /** src/util/wrappers/mpiu_shm_wrappers.h */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**write", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**write" );
    /** src/util/wrappers/mpiu_shm_wrappers.h */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**open", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**open" );
    {
    /** src/util/wrappers/mpiu_shm_wrappers.h */
    char s1[] = "string1";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**open", "**open %s", s1 );
    ChkMsg( err, MPI_ERR_OTHER, "**open %s" );
    }
    /** src/util/wrappers/mpiu_shm_wrappers.h */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**shmw_sethnd", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**shmw_sethnd" );
    /** src/util/wrappers/mpiu_sock_wrappers.h */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**inet_addr", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**inet_addr" );
    {
    /** src/util/wrappers/mpiu_sock_wrappers.h */
    char s1[] = "string1";
    int i2 = 2;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**inet_addr", "**inet_addr %s %d", s1, i2 );
    ChkMsg( err, MPI_ERR_OTHER, "**inet_addr %s %d" );
    }
    /** src/util/wrappers/mpiu_sock_wrappers.h */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**wsastartup", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**wsastartup" );
    {
    /** src/util/wrappers/mpiu_sock_wrappers.h */
    char s1[] = "string1";
    int i2 = 2;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**wsastartup", "**wsastartup %s %d", s1, i2 );
    ChkMsg( err, MPI_ERR_OTHER, "**wsastartup %s %d" );
    }
    /** src/util/wrappers/mpiu_sock_wrappers.h */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**wsacleanup", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**wsacleanup" );
    {
    /** src/util/wrappers/mpiu_sock_wrappers.h */
    char s1[] = "string1";
    int i2 = 2;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**wsacleanup", "**wsacleanup %s %d", s1, i2 );
    ChkMsg( err, MPI_ERR_OTHER, "**wsacleanup %s %d" );
    }
    /** src/util/wrappers/mpiu_sock_wrappers.h */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**sock_create", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**sock_create" );
    {
    /** src/util/wrappers/mpiu_sock_wrappers.h */
    char s1[] = "string1";
    int i2 = 2;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**sock_create", "**sock_create %s %d", s1, i2 );
    ChkMsg( err, MPI_ERR_OTHER, "**sock_create %s %d" );
    }
    /** src/util/wrappers/mpiu_sock_wrappers.h */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**sock_close", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**sock_close" );
    {
    /** src/util/wrappers/mpiu_sock_wrappers.h */
    char s1[] = "string1";
    int i2 = 2;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**sock_close", "**sock_close %s %d", s1, i2 );
    ChkMsg( err, MPI_ERR_OTHER, "**sock_close %s %d" );
    }
    /** src/util/wrappers/mpiu_sock_wrappers.h */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**bind", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**bind" );
    {
    /** src/util/wrappers/mpiu_sock_wrappers.h */
    char s1[] = "string1";
    int i2 = 2;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**bind", "**bind %s %d", s1, i2 );
    ChkMsg( err, MPI_ERR_OTHER, "**bind %s %d" );
    }
    /** src/util/wrappers/mpiu_sock_wrappers.h */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**bindportrange", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**bindportrange" );
    {
    /** src/util/wrappers/mpiu_sock_wrappers.h */
    int i1 = 1;
    int i2 = 2;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**bindportrange", "**bindportrange %d %d", i1, i2 );
    ChkMsg( err, MPI_ERR_OTHER, "**bindportrange %d %d" );
    }
    /** src/util/wrappers/mpiu_sock_wrappers.h */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**listen", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**listen" );
    {
    /** src/util/wrappers/mpiu_sock_wrappers.h */
    char s1[] = "string1";
    int i2 = 2;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**listen", "**listen %s %d", s1, i2 );
    ChkMsg( err, MPI_ERR_OTHER, "**listen %s %d" );
    }
    /** src/util/wrappers/mpiu_sock_wrappers.h */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**sock_accept", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**sock_accept" );
    {
    /** src/util/wrappers/mpiu_sock_wrappers.h */
    char s1[] = "string1";
    int i2 = 2;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**sock_accept", "**sock_accept %s %d", s1, i2 );
    ChkMsg( err, MPI_ERR_OTHER, "**sock_accept %s %d" );
    }
    /** src/util/wrappers/mpiu_sock_wrappers.h */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**sock_connect", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**sock_connect" );
    {
    /** src/util/wrappers/mpiu_sock_wrappers.h */
    char s1[] = "string1";
    int i2 = 2;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**sock_connect", "**sock_connect %s %d", s1, i2 );
    ChkMsg( err, MPI_ERR_OTHER, "**sock_connect %s %d" );
    }
    {
    /** src/util/wrappers/mpiu_sock_wrappers.h */
    char s1[] = "string1";
    int i2 = 2;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**fail", "**fail %s %d", s1, i2 );
    ChkMsg( err, MPI_ERR_OTHER, "**fail %s %d" );
    }
    /** src/util/wrappers/mpiu_sock_wrappers.h */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**sock_read", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**sock_read" );
    {
    /** src/util/wrappers/mpiu_sock_wrappers.h */
    char s1[] = "string1";
    int i2 = 2;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**sock_read", "**sock_read %s %d", s1, i2 );
    ChkMsg( err, MPI_ERR_OTHER, "**sock_read %s %d" );
    }
    /** src/util/wrappers/mpiu_sock_wrappers.h */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**sock_write", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**sock_write" );
    {
    /** src/util/wrappers/mpiu_sock_wrappers.h */
    char s1[] = "string1";
    int i2 = 2;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**sock_write", "**sock_write %s %d", s1, i2 );
    ChkMsg( err, MPI_ERR_OTHER, "**sock_write %s %d" );
    }
    /** src/util/wrappers/mpiu_sock_wrappers.h */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**ioctlsocket", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**ioctlsocket" );
    {
    /** src/util/wrappers/mpiu_sock_wrappers.h */
    char s1[] = "string1";
    int i2 = 2;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**ioctlsocket", "**ioctlsocket %s %d", s1, i2 );
    ChkMsg( err, MPI_ERR_OTHER, "**ioctlsocket %s %d" );
    }
    /** src/util/wrappers/mpiu_sock_wrappers.h */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**setsockopt", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**setsockopt" );
    {
    /** src/util/wrappers/mpiu_sock_wrappers.h */
    char s1[] = "string1";
    int i2 = 2;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**setsockopt", "**setsockopt %s %d", s1, i2 );
    ChkMsg( err, MPI_ERR_OTHER, "**setsockopt %s %d" );
    }
    /** src/util/wrappers/mpiu_sock_wrappers.h */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**getsockopt", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**getsockopt" );
    {
    /** src/util/wrappers/mpiu_sock_wrappers.h */
    char s1[] = "string1";
    int i2 = 2;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**getsockopt", "**getsockopt %s %d", s1, i2 );
    ChkMsg( err, MPI_ERR_OTHER, "**getsockopt %s %d" );
    }
    /** src/util/wrappers/mpiu_sock_wrappers.h */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**select", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**select" );
    {
    /** src/util/wrappers/mpiu_sock_wrappers.h */
    char s1[] = "string1";
    int i2 = 2;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**select", "**select %s %d", s1, i2 );
    ChkMsg( err, MPI_ERR_OTHER, "**select %s %d" );
    }
    /** src/binding/f77/addressf.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**inttoosmall", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**inttoosmall" );
    /** src/binding/f77/statusc2f.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**notcstatignore", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**notcstatignore" );
    /** src/binding/f77/statusf2c.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**notfstatignore", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**notfstatignore" );
    /** src/binding/f90/create_f90_complex.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**f90typecomplexnone", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**f90typecomplexnone" );
    {
    /** src/binding/f90/create_f90_complex.c */
    int i1 = 1;
    int i2 = 2;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**f90typecomplexnone", "**f90typecomplexnone %d %d", i1, i2 );
    ChkMsg( err, MPI_ERR_OTHER, "**f90typecomplexnone %d %d" );
    }
    /** src/binding/f90/create_f90_complex.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_type_create_f90_complex", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_type_create_f90_complex" );
    {
    /** src/binding/f90/create_f90_complex.c */
    int i1 = 1;
    int i2 = 2;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_type_create_f90_complex", "**mpi_type_create_f90_complex %d %d", i1, i2 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_type_create_f90_complex %d %d" );
    }
    /** src/binding/f90/create_f90_int.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**f90typeintnone", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**f90typeintnone" );
    {
    /** src/binding/f90/create_f90_int.c */
    int i1 = 1;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**f90typeintnone", "**f90typeintnone %d", i1 );
    ChkMsg( err, MPI_ERR_OTHER, "**f90typeintnone %d" );
    }
    /** src/binding/f90/create_f90_int.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_type_create_f90_int", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_type_create_f90_int" );
    {
    /** src/binding/f90/create_f90_int.c */
    int i1 = 1;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_type_create_f90_int", "**mpi_type_create_f90_int %d", i1 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_type_create_f90_int %d" );
    }
    /** src/binding/f90/create_f90_real.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**f90typerealnone", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**f90typerealnone" );
    {
    /** src/binding/f90/create_f90_real.c */
    int i1 = 1;
    int i2 = 2;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**f90typerealnone", "**f90typerealnone %d %d", i1, i2 );
    ChkMsg( err, MPI_ERR_OTHER, "**f90typerealnone %d %d" );
    }
    /** src/binding/f90/create_f90_real.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_type_create_f90_real", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_type_create_f90_real" );
    {
    /** src/binding/f90/create_f90_real.c */
    int i1 = 1;
    int i2 = 2;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mpi_type_create_f90_real", "**mpi_type_create_f90_real %d %d", i1, i2 );
    ChkMsg( err, MPI_ERR_OTHER, "**mpi_type_create_f90_real %d %d" );
    }
    /** src/binding/f90/create_f90_util.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**f90typetoomany", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**f90typetoomany" );
    /** src/include/mpierrs.h */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**tag", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**tag" );
    {
    /** src/include/mpierrs.h */
    int i1 = 1;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**tag", "**tag %d", i1 );
    ChkMsg( err, MPI_ERR_OTHER, "**tag %d" );
    }
    /** src/include/mpierrs.h */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**countneg", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**countneg" );
    {
    /** src/include/mpierrs.h */
    int i1 = 1;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**countneg", "**countneg %d", i1 );
    ChkMsg( err, MPI_ERR_OTHER, "**countneg %d" );
    }
    /** src/include/mpierrs.h */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**rmadisp", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**rmadisp" );
    /** src/include/mpierrs.h */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**bufalias", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**bufalias" );
    /** src/include/mpierrs.h */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**argnonpos", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**argnonpos" );
    {
    /** src/include/mpierrs.h */
    char s1[] = "string1";
    int i2 = 2;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**argnonpos", "**argnonpos %s %d", s1, i2 );
    ChkMsg( err, MPI_ERR_OTHER, "**argnonpos %s %d" );
    }
    /** src/include/mpierrs.h */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**root", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**root" );
    {
    /** src/include/mpierrs.h */
    int i1 = 1;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**root", "**root %d", i1 );
    ChkMsg( err, MPI_ERR_OTHER, "**root %d" );
    }
    /** src/include/mpierrs.h */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**requestnotpersist", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**requestnotpersist" );
    /** src/include/mpierrs.h */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**dtype", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**dtype" );
    {
    /** src/include/mpierrs.h */
    char s1[] = "string1";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**dtypenull", "**dtypenull %s", s1 );
    ChkMsg( err, MPI_ERR_OTHER, "**dtypenull %s" );
    }
    /** src/include/mpierrs.h */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**rmatypenotatomic", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**rmatypenotatomic" );
    {
    /** src/include/mpierrs.h */
    int i1 = MPI_INT;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**rmatypenotatomic", "**rmatypenotatomic %D", i1 );
    ChkMsg( err, MPI_ERR_OTHER, "**rmatypenotatomic %D" );
    }
    /** src/include/mpierrs.h */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**recvbuf_inplace", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**recvbuf_inplace" );
    /** src/include/mpierrs.h */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**buf_inplace", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**buf_inplace" );
    /** src/include/mpierrs.h */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**bufnull", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**bufnull" );
    /** src/include/mpierrs.h */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**opnull", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**opnull" );
    /** src/include/mpierrs.h */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**op", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**op" );
    /** src/include/mpierrs.h */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**groupnull", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**groupnull" );
    /** src/include/mpierrs.h */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**group", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**group" );
    /** src/include/mpierrs.h */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**commnull", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**commnull" );
    /** src/include/mpierrs.h */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**winnull", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**winnull" );
    /** src/include/mpierrs.h */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**win", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**win" );
    /** src/include/mpierrs.h */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**requestnull", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**requestnull" );
    {
    /** src/include/mpierrs.h */
    int i1 = 1;
    int i2 = 2;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**request_invalid_kind", "**request_invalid_kind %d %d", i1, i2 );
    ChkMsg( err, MPI_ERR_OTHER, "**request_invalid_kind %d %d" );
    }
    {
    /** src/include/mpierrs.h */
    int i1 = 1;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**request", "**request %d", i1 );
    ChkMsg( err, MPI_ERR_OTHER, "**request %d" );
    }
    /** src/include/mpierrs.h */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**errhandlernull", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**errhandlernull" );
    /** src/include/mpierrs.h */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**errhandler", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**errhandler" );
    /** src/include/mpierrs.h */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**infonull", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**infonull" );
    /** src/include/mpierrs.h */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**info", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**info" );
    /** src/include/mpierrs.h */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**keyval", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**keyval" );
    /** src/include/mpierrs.h */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**keyvalobj", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**keyvalobj" );
    {
    /** src/include/mpierrs.h */
    char s1[] = "string1";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**keyvalobj", "**keyvalobj %s", s1 );
    ChkMsg( err, MPI_ERR_OTHER, "**keyvalobj %s" );
    }
    /** src/include/mpierrs.h */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**permattr", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**permattr" );
    /** src/include/mpierrs.h */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**memcpyalias", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**memcpyalias" );
    {
    /** src/include/mpierrs.h */
    char s1[] = "pointer1";
    char s2[] = "pointer2";
    long long i3 = 3;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**memcpyalias", "**memcpyalias %p %p %L", s1, s2, i3 );
    ChkMsg( err, MPI_ERR_OTHER, "**memcpyalias %p %p %L" );
    }
    /** src/include/mpiimpl.h */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**nullptrtype", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**nullptrtype" );
    {
    /** src/include/mpiimpl.h */
    char s1[] = "string1";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**nullptrtype", "**nullptrtype %s", s1 );
    ChkMsg( err, MPI_ERR_OTHER, "**nullptrtype %s" );
    }
    {
    /** src/include/mpimem.h */
    int i1 = 1;
    char s2[] = "string2";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**nomem2", "**nomem2 %d %s", i1, s2 );
    ChkMsg( err, MPI_ERR_OTHER, "**nomem2 %d %s" );
    }
    /** src/mpid/ch3/channels/nemesis/include/mpid_nem_impl.h */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**rtspkt", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**rtspkt" );
    /** src/mpid/ch3/channels/nemesis/include/mpid_nem_impl.h */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**ctspkt", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**ctspkt" );
    /** src/mpid/ch3/channels/nemesis/include/mpid_nem_impl.h */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**cookiepkt", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**cookiepkt" );
    /** src/mpid/ch3/channels/nemesis/include/mpid_nem_impl.h */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**donepkt", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**donepkt" );
    {
    /** src/mpid/ch3/channels/nemesis/netmod/elan/elan_init.c */
    int i1 = 1;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**fail", "**fail %d", i1 );
    ChkMsg( err, MPI_ERR_OTHER, "**fail %d" );
    }
    {
    /** src/mpid/ch3/channels/nemesis/netmod/elan/elan_init.c */
    int i1 = 1;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**pmi_kvs_put", "**pmi_kvs_put %d", i1 );
    ChkMsg( err, MPI_ERR_OTHER, "**pmi_kvs_put %d" );
    }
    {
    /** src/mpid/ch3/channels/nemesis/netmod/elan/elan_init.c */
    int i1 = 1;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**pmi_kvs_commit", "**pmi_kvs_commit %d", i1 );
    ChkMsg( err, MPI_ERR_OTHER, "**pmi_kvs_commit %d" );
    }
    /** src/mpid/ch3/channels/nemesis/netmod/elan/elan_init.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**pmi_barrier", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**pmi_barrier" );
    {
    /** src/mpid/ch3/channels/nemesis/netmod/elan/elan_init.c */
    int i1 = 1;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**pmi_barrier", "**pmi_barrier %d", i1 );
    ChkMsg( err, MPI_ERR_OTHER, "**pmi_barrier %d" );
    }
    {
    /** src/mpid/ch3/channels/nemesis/netmod/elan/elan_init.c */
    int i1 = 1;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**pmi_kvs_get", "**pmi_kvs_get %d", i1 );
    ChkMsg( err, MPI_ERR_OTHER, "**pmi_kvs_get %d" );
    }
    /** src/mpid/ch3/channels/nemesis/netmod/elan/elan_init.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**business_card", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**business_card" );
    {
    /** src/mpid/ch3/channels/nemesis/netmod/elan/elan_init.c */
    char s1[] = "string1";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**business_card", "**business_card %s", s1 );
    ChkMsg( err, MPI_ERR_OTHER, "**business_card %s" );
    }
    /** src/mpid/ch3/channels/nemesis/netmod/elan/elan_init.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**buscard_len", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**buscard_len" );
    /** src/mpid/ch3/channels/nemesis/netmod/elan/elan_init.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**buscard", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**buscard" );
    /** src/mpid/ch3/channels/nemesis/netmod/elan/elan_init.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**argstr_hostd", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**argstr_hostd" );
    /** src/mpid/ch3/channels/nemesis/netmod/gm/gm_init.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**gm_init", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**gm_init" );
    {
    /** src/mpid/ch3/channels/nemesis/netmod/gm/gm_init.c */
    int i1 = 1;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**gm_init", "**gm_init %d", i1 );
    ChkMsg( err, MPI_ERR_OTHER, "**gm_init %d" );
    }
    /** src/mpid/ch3/channels/nemesis/netmod/gm/gm_init.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**gm_get_unique_board_id", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**gm_get_unique_board_id" );
    {
    /** src/mpid/ch3/channels/nemesis/netmod/gm/gm_init.c */
    int i1 = 1;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**gm_get_unique_board_id", "**gm_get_unique_board_id %d", i1 );
    ChkMsg( err, MPI_ERR_OTHER, "**gm_get_unique_board_id %d" );
    }
    /** src/mpid/ch3/channels/nemesis/netmod/gm/gm_init.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**gm_incompatible_lib", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**gm_incompatible_lib" );
    /** src/mpid/ch3/channels/nemesis/netmod/gm/gm_init.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**gm_no_port", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**gm_no_port" );
    /** src/mpid/ch3/channels/nemesis/netmod/gm/gm_init.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**gm_regmem", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**gm_regmem" );
    {
    /** src/mpid/ch3/channels/nemesis/netmod/gm/gm_init.c */
    int i1 = 1;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**gm_regmem", "**gm_regmem %d", i1 );
    ChkMsg( err, MPI_ERR_OTHER, "**gm_regmem %d" );
    }
    /** src/mpid/ch3/channels/nemesis/netmod/mx/mx_cancel.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mx_cancel", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mx_cancel" );
    {
    /** src/mpid/ch3/channels/nemesis/netmod/mx/mx_cancel.c */
    char s1[] = "string1";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mx_cancel", "**mx_cancel %s", s1 );
    ChkMsg( err, MPI_ERR_OTHER, "**mx_cancel %s" );
    }
    /** src/mpid/ch3/channels/nemesis/netmod/mx/mx_finalize.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mx_close_endpoint", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mx_close_endpoint" );
    {
    /** src/mpid/ch3/channels/nemesis/netmod/mx/mx_finalize.c */
    char s1[] = "string1";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mx_close_endpoint", "**mx_close_endpoint %s", s1 );
    ChkMsg( err, MPI_ERR_OTHER, "**mx_close_endpoint %s" );
    }
    /** src/mpid/ch3/channels/nemesis/netmod/mx/mx_finalize.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mx_finalize", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mx_finalize" );
    {
    /** src/mpid/ch3/channels/nemesis/netmod/mx/mx_finalize.c */
    char s1[] = "string1";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mx_finalize", "**mx_finalize %s", s1 );
    ChkMsg( err, MPI_ERR_OTHER, "**mx_finalize %s" );
    }
    /** src/mpid/ch3/channels/nemesis/netmod/mx/mx_init.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**putenv", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**putenv" );
    /** src/mpid/ch3/channels/nemesis/netmod/mx/mx_init.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mx_init", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mx_init" );
    {
    /** src/mpid/ch3/channels/nemesis/netmod/mx/mx_init.c */
    char s1[] = "string1";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mx_init", "**mx_init %s", s1 );
    ChkMsg( err, MPI_ERR_OTHER, "**mx_init %s" );
    }
    /** src/mpid/ch3/channels/nemesis/netmod/mx/mx_init.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mx_open_endpoint", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mx_open_endpoint" );
    {
    /** src/mpid/ch3/channels/nemesis/netmod/mx/mx_init.c */
    char s1[] = "string1";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mx_open_endpoint", "**mx_open_endpoint %s", s1 );
    ChkMsg( err, MPI_ERR_OTHER, "**mx_open_endpoint %s" );
    }
    /** src/mpid/ch3/channels/nemesis/netmod/mx/mx_init.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mx_get_endpoint_addr", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mx_get_endpoint_addr" );
    {
    /** src/mpid/ch3/channels/nemesis/netmod/mx/mx_init.c */
    char s1[] = "string1";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mx_get_endpoint_addr", "**mx_get_endpoint_addr %s", s1 );
    ChkMsg( err, MPI_ERR_OTHER, "**mx_get_endpoint_addr %s" );
    }
    /** src/mpid/ch3/channels/nemesis/netmod/mx/mx_init.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mx_decompose_endpoint_addr", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mx_decompose_endpoint_addr" );
    {
    /** src/mpid/ch3/channels/nemesis/netmod/mx/mx_init.c */
    char s1[] = "string1";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mx_decompose_endpoint_addr", "**mx_decompose_endpoint_addr %s", s1 );
    ChkMsg( err, MPI_ERR_OTHER, "**mx_decompose_endpoint_addr %s" );
    }
    /** src/mpid/ch3/channels/nemesis/netmod/mx/mx_init.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mx_connect", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mx_connect" );
    {
    /** src/mpid/ch3/channels/nemesis/netmod/mx/mx_init.c */
    char s1[] = "string1";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mx_connect", "**mx_connect %s", s1 );
    ChkMsg( err, MPI_ERR_OTHER, "**mx_connect %s" );
    }
    /** src/mpid/ch3/channels/nemesis/netmod/mx/mx_poll.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mx_irecv", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mx_irecv" );
    {
    /** src/mpid/ch3/channels/nemesis/netmod/mx/mx_poll.c */
    char s1[] = "string1";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mx_irecv", "**mx_irecv %s", s1 );
    ChkMsg( err, MPI_ERR_OTHER, "**mx_irecv %s" );
    }
    {
    /** src/mpid/ch3/channels/nemesis/netmod/mx/mx_poll.c */
    int i1 = 1;
    int i2 = 2;
    int i3 = 3;
    int i4 = 4;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**truncate", "**truncate %d %d %d %d", i1, i2, i3, i4 );
    ChkMsg( err, MPI_ERR_OTHER, "**truncate %d %d %d %d" );
    }
    /** src/mpid/ch3/channels/nemesis/netmod/mx/mx_probe.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**nomprobe", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**nomprobe" );
    /** src/mpid/ch3/channels/nemesis/netmod/mx/mx_send.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mx_isend", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mx_isend" );
    {
    /** src/mpid/ch3/channels/nemesis/netmod/mx/mx_send.c */
    char s1[] = "string1";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mx_isend", "**mx_isend %s", s1 );
    ChkMsg( err, MPI_ERR_OTHER, "**mx_isend %s" );
    }
    /** src/mpid/ch3/channels/nemesis/netmod/portals4/ptl_init.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**ptlinit", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**ptlinit" );
    {
    /** src/mpid/ch3/channels/nemesis/netmod/portals4/ptl_init.c */
    char s1[] = "string1";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**ptlinit", "**ptlinit %s", s1 );
    ChkMsg( err, MPI_ERR_OTHER, "**ptlinit %s" );
    }
    /** src/mpid/ch3/channels/nemesis/netmod/portals4/ptl_init.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**ptlniinit", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**ptlniinit" );
    {
    /** src/mpid/ch3/channels/nemesis/netmod/portals4/ptl_init.c */
    char s1[] = "string1";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**ptlniinit", "**ptlniinit %s", s1 );
    ChkMsg( err, MPI_ERR_OTHER, "**ptlniinit %s" );
    }
    /** src/mpid/ch3/channels/nemesis/netmod/portals4/ptl_init.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**ptleqalloc", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**ptleqalloc" );
    {
    /** src/mpid/ch3/channels/nemesis/netmod/portals4/ptl_init.c */
    char s1[] = "string1";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**ptleqalloc", "**ptleqalloc %s", s1 );
    ChkMsg( err, MPI_ERR_OTHER, "**ptleqalloc %s" );
    }
    /** src/mpid/ch3/channels/nemesis/netmod/portals4/ptl_init.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**ptlptalloc", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**ptlptalloc" );
    {
    /** src/mpid/ch3/channels/nemesis/netmod/portals4/ptl_init.c */
    char s1[] = "string1";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**ptlptalloc", "**ptlptalloc %s", s1 );
    ChkMsg( err, MPI_ERR_OTHER, "**ptlptalloc %s" );
    }
    /** src/mpid/ch3/channels/nemesis/netmod/portals4/ptl_init.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**ptlmdbind", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**ptlmdbind" );
    {
    /** src/mpid/ch3/channels/nemesis/netmod/portals4/ptl_init.c */
    char s1[] = "string1";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**ptlmdbind", "**ptlmdbind %s", s1 );
    ChkMsg( err, MPI_ERR_OTHER, "**ptlmdbind %s" );
    }
    /** src/mpid/ch3/channels/nemesis/netmod/portals4/ptl_init.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**ptlptfree", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**ptlptfree" );
    {
    /** src/mpid/ch3/channels/nemesis/netmod/portals4/ptl_init.c */
    char s1[] = "string1";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**ptlptfree", "**ptlptfree %s", s1 );
    ChkMsg( err, MPI_ERR_OTHER, "**ptlptfree %s" );
    }
    /** src/mpid/ch3/channels/nemesis/netmod/portals4/ptl_init.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**ptlnifini", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**ptlnifini" );
    {
    /** src/mpid/ch3/channels/nemesis/netmod/portals4/ptl_init.c */
    char s1[] = "string1";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**ptlnifini", "**ptlnifini %s", s1 );
    ChkMsg( err, MPI_ERR_OTHER, "**ptlnifini %s" );
    }
    /** src/mpid/ch3/channels/nemesis/netmod/portals4/ptl_init.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**ptlgetid", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**ptlgetid" );
    {
    /** src/mpid/ch3/channels/nemesis/netmod/portals4/ptl_init.c */
    char s1[] = "string1";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**ptlgetid", "**ptlgetid %s", s1 );
    ChkMsg( err, MPI_ERR_OTHER, "**ptlgetid %s" );
    }
    /** src/mpid/ch3/channels/nemesis/netmod/portals4/ptl_init.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**badbusinesscard", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**badbusinesscard" );
    /** src/mpid/ch3/channels/nemesis/netmod/portals4/ptl_init.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**comm_fail", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**comm_fail" );
    {
    /** src/mpid/ch3/channels/nemesis/netmod/portals4/ptl_init.c */
    int i1 = 1;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**comm_fail", "**comm_fail %d", i1 );
    ChkMsg( err, MPI_ERR_OTHER, "**comm_fail %d" );
    }
    /** src/mpid/ch3/channels/nemesis/netmod/portals4/ptl_poll.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**ptlleappend", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**ptlleappend" );
    {
    /** src/mpid/ch3/channels/nemesis/netmod/portals4/ptl_poll.c */
    char s1[] = "string1";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**ptlleappend", "**ptlleappend %s", s1 );
    ChkMsg( err, MPI_ERR_OTHER, "**ptlleappend %s" );
    }
    /** src/mpid/ch3/channels/nemesis/netmod/portals4/ptl_poll.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**ptlmeunlink", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**ptlmeunlink" );
    {
    /** src/mpid/ch3/channels/nemesis/netmod/portals4/ptl_poll.c */
    char s1[] = "string1";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**ptlmeunlink", "**ptlmeunlink %s", s1 );
    ChkMsg( err, MPI_ERR_OTHER, "**ptlmeunlink %s" );
    }
    /** src/mpid/ch3/channels/nemesis/netmod/portals4/ptl_poll.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**ptlleunlink", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**ptlleunlink" );
    {
    /** src/mpid/ch3/channels/nemesis/netmod/portals4/ptl_poll.c */
    char s1[] = "string1";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**ptlleunlink", "**ptlleunlink %s", s1 );
    ChkMsg( err, MPI_ERR_OTHER, "**ptlleunlink %s" );
    }
    /** src/mpid/ch3/channels/nemesis/netmod/portals4/ptl_poll.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**ptlmeappend", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**ptlmeappend" );
    {
    /** src/mpid/ch3/channels/nemesis/netmod/portals4/ptl_poll.c */
    char s1[] = "string1";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**ptlmeappend", "**ptlmeappend %s", s1 );
    ChkMsg( err, MPI_ERR_OTHER, "**ptlmeappend %s" );
    }
    /** src/mpid/ch3/channels/nemesis/netmod/portals4/ptl_poll.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**eqdropped", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**eqdropped" );
    /** src/mpid/ch3/channels/nemesis/netmod/portals4/ptl_poll.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**ptleqget", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**ptleqget" );
    {
    /** src/mpid/ch3/channels/nemesis/netmod/portals4/ptl_poll.c */
    char s1[] = "string1";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**ptleqget", "**ptleqget %s", s1 );
    ChkMsg( err, MPI_ERR_OTHER, "**ptleqget %s" );
    }
    /** src/mpid/ch3/channels/nemesis/netmod/portals4/ptl_probe.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**ptlmesearch", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**ptlmesearch" );
    {
    /** src/mpid/ch3/channels/nemesis/netmod/portals4/ptl_probe.c */
    char s1[] = "string1";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**ptlmesearch", "**ptlmesearch %s", s1 );
    ChkMsg( err, MPI_ERR_OTHER, "**ptlmesearch %s" );
    }
    /** src/mpid/ch3/channels/nemesis/netmod/portals4/ptl_recv.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**ptlmdrelease", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**ptlmdrelease" );
    {
    /** src/mpid/ch3/channels/nemesis/netmod/portals4/ptl_recv.c */
    char s1[] = "string1";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**ptlmdrelease", "**ptlmdrelease %s", s1 );
    ChkMsg( err, MPI_ERR_OTHER, "**ptlmdrelease %s" );
    }
    /** src/mpid/ch3/channels/nemesis/netmod/portals4/ptl_recv.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**ptlget", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**ptlget" );
    {
    /** src/mpid/ch3/channels/nemesis/netmod/portals4/ptl_recv.c */
    char s1[] = "string1";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**ptlget", "**ptlget %s", s1 );
    ChkMsg( err, MPI_ERR_OTHER, "**ptlget %s" );
    }
    /** src/mpid/ch3/channels/nemesis/netmod/portals4/ptl_send.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**ptlput", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**ptlput" );
    {
    /** src/mpid/ch3/channels/nemesis/netmod/portals4/ptl_send.c */
    char s1[] = "string1";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**ptlput", "**ptlput %s", s1 );
    ChkMsg( err, MPI_ERR_OTHER, "**ptlput %s" );
    }
    /** src/mpid/ch3/channels/nemesis/netmod/scif/scif_init.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**scif_open", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**scif_open" );
    {
    /** src/mpid/ch3/channels/nemesis/netmod/scif/scif_init.c */
    char s1[] = "string1";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**scif_open", "**scif_open %s", s1 );
    ChkMsg( err, MPI_ERR_OTHER, "**scif_open %s" );
    }
    /** src/mpid/ch3/channels/nemesis/netmod/scif/scif_init.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**scif_bind", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**scif_bind" );
    {
    /** src/mpid/ch3/channels/nemesis/netmod/scif/scif_init.c */
    char s1[] = "string1";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**scif_bind", "**scif_bind %s", s1 );
    ChkMsg( err, MPI_ERR_OTHER, "**scif_bind %s" );
    }
    /** src/mpid/ch3/channels/nemesis/netmod/scif/scif_init.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**scif_listen", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**scif_listen" );
    {
    /** src/mpid/ch3/channels/nemesis/netmod/scif/scif_init.c */
    char s1[] = "string1";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**scif_listen", "**scif_listen %s", s1 );
    ChkMsg( err, MPI_ERR_OTHER, "**scif_listen %s" );
    }
    /** src/mpid/ch3/channels/nemesis/netmod/scif/scif_init.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**scif_get_nodeIDs", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**scif_get_nodeIDs" );
    {
    /** src/mpid/ch3/channels/nemesis/netmod/scif/scif_init.c */
    char s1[] = "string1";
    int i2 = 2;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**scif_get_nodeIDs", "**scif_get_nodeIDs %s %d", s1, i2 );
    ChkMsg( err, MPI_ERR_OTHER, "**scif_get_nodeIDs %s %d" );
    }
    /** src/mpid/ch3/channels/nemesis/netmod/scif/scif_init.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**argstr_missingport", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**argstr_missingport" );
    /** src/mpid/ch3/channels/nemesis/netmod/scif/scif_init.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**argstr_missingnode", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**argstr_missingnode" );
    /** src/mpid/ch3/channels/nemesis/netmod/scif/scif_init.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**scif_connect", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**scif_connect" );
    {
    /** src/mpid/ch3/channels/nemesis/netmod/scif/scif_init.c */
    char s1[] = "string1";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**scif_connect", "**scif_connect %s", s1 );
    ChkMsg( err, MPI_ERR_OTHER, "**scif_connect %s" );
    }
    /** src/mpid/ch3/channels/nemesis/netmod/scif/scif_init.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**scif_accept", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**scif_accept" );
    {
    /** src/mpid/ch3/channels/nemesis/netmod/scif/scif_init.c */
    char s1[] = "string1";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**scif_accept", "**scif_accept %s", s1 );
    ChkMsg( err, MPI_ERR_OTHER, "**scif_accept %s" );
    }
    /** src/mpid/ch3/channels/nemesis/netmod/scif/scif_init.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**scif_init_shmsend", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**scif_init_shmsend" );
    {
    /** src/mpid/ch3/channels/nemesis/netmod/scif/scif_init.c */
    char s1[] = "string1";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**scif_init_shmsend", "**scif_init_shmsend %s", s1 );
    ChkMsg( err, MPI_ERR_OTHER, "**scif_init_shmsend %s" );
    }
    /** src/mpid/ch3/channels/nemesis/netmod/scif/scif_init.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**scif_send", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**scif_send" );
    {
    /** src/mpid/ch3/channels/nemesis/netmod/scif/scif_init.c */
    char s1[] = "string1";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**scif_send", "**scif_send %s", s1 );
    ChkMsg( err, MPI_ERR_OTHER, "**scif_send %s" );
    }
    /** src/mpid/ch3/channels/nemesis/netmod/scif/scif_init.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**scif_recv", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**scif_recv" );
    {
    /** src/mpid/ch3/channels/nemesis/netmod/scif/scif_init.c */
    char s1[] = "string1";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**scif_recv", "**scif_recv %s", s1 );
    ChkMsg( err, MPI_ERR_OTHER, "**scif_recv %s" );
    }
    /** src/mpid/ch3/channels/nemesis/netmod/scif/scif_init.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**scif_init_shmrecv", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**scif_init_shmrecv" );
    {
    /** src/mpid/ch3/channels/nemesis/netmod/scif/scif_init.c */
    char s1[] = "string1";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**scif_init_shmrecv", "**scif_init_shmrecv %s", s1 );
    ChkMsg( err, MPI_ERR_OTHER, "**scif_init_shmrecv %s" );
    }
    /** src/mpid/ch3/channels/nemesis/netmod/scif/scif_send.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**scif_writev", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**scif_writev" );
    {
    /** src/mpid/ch3/channels/nemesis/netmod/scif/scif_send.c */
    char s1[] = "string1";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**scif_writev", "**scif_writev %s", s1 );
    ChkMsg( err, MPI_ERR_OTHER, "**scif_writev %s" );
    }
    /** src/mpid/ch3/channels/nemesis/netmod/scif/scif_send.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**loadsendiov", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**loadsendiov" );
    /** src/mpid/ch3/channels/nemesis/netmod/scif/scifsm.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**scif_read", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**scif_read" );
    {
    /** src/mpid/ch3/channels/nemesis/netmod/scif/scifsm.c */
    char s1[] = "string1";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**scif_read", "**scif_scif_read %s", s1 );
    ChkMsg( err, MPI_ERR_OTHER, "**scif_scif_read %s" );
    }
    /** src/mpid/ch3/channels/nemesis/netmod/scif/scifsm.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**scif_readv", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**scif_readv" );
    {
    /** src/mpid/ch3/channels/nemesis/netmod/scif/scifsm.c */
    char s1[] = "string1";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**scif_readv", "**scif_scif_readv %s", s1 );
    ChkMsg( err, MPI_ERR_OTHER, "**scif_scif_readv %s" );
    }
    /** src/mpid/ch3/channels/nemesis/netmod/scif/scifsm.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**scif_poll_send", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**scif_poll_send" );
    {
    /** src/mpid/ch3/channels/nemesis/netmod/scif/scifsm.c */
    char s1[] = "string1";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**scif_poll_send", "**scif_poll_send %s", s1 );
    ChkMsg( err, MPI_ERR_OTHER, "**scif_poll_send %s" );
    }
    /** src/mpid/ch3/channels/nemesis/netmod/scif/scifsm.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**poll", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**poll" );
    {
    /** src/mpid/ch3/channels/nemesis/netmod/scif/scifsm.c */
    char s1[] = "string1";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**poll", "**poll %s", s1 );
    ChkMsg( err, MPI_ERR_OTHER, "**poll %s" );
    }
    {
    /** src/mpid/ch3/channels/nemesis/netmod/tcp/socksm.c */
    char s1[] = "string1";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**write", "**write %s", s1 );
    ChkMsg( err, MPI_ERR_OTHER, "**write %s" );
    }
    /** src/mpid/ch3/channels/nemesis/netmod/tcp/socksm.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**read", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**read" );
    {
    /** src/mpid/ch3/channels/nemesis/netmod/tcp/socksm.c */
    char s1[] = "string1";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**read", "**read %s", s1 );
    ChkMsg( err, MPI_ERR_OTHER, "**read %s" );
    }
    {
    /** src/mpid/ch3/channels/nemesis/netmod/tcp/socksm.c */
    int i1 = 1;
    char s2[] = "string2";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**read", "**read %d %s", i1, s2 );
    ChkMsg( err, MPI_ERR_OTHER, "**read %d %s" );
    }
    /** src/mpid/ch3/channels/nemesis/netmod/tcp/socksm.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**vc_in_error_state", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**vc_in_error_state" );
    /** src/mpid/ch3/channels/nemesis/netmod/tcp/socksm.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**exceeded_connect_tries", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**exceeded_connect_tries" );
    {
    /** src/mpid/ch3/channels/nemesis/netmod/tcp/socksm.c */
    int i1 = 1;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**exceeded_connect_tries", "**exceeded_connect_tries %d", i1 );
    ChkMsg( err, MPI_ERR_OTHER, "**exceeded_connect_tries %d" );
    }
    /** src/mpid/ch3/channels/nemesis/netmod/tcp/socksm.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**tcp_cleanup_fail", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**tcp_cleanup_fail" );
    {
    /** src/mpid/ch3/channels/nemesis/netmod/tcp/socksm.c */
    int i1 = 1;
    char s2[] = "string2";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**sock_connect", "**sock_connect %d %s", i1, s2 );
    ChkMsg( err, MPI_ERR_OTHER, "**sock_connect %d %s" );
    }
    /** src/mpid/ch3/channels/nemesis/netmod/tcp/socksm.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**close", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**close" );
    {
    /** src/mpid/ch3/channels/nemesis/netmod/tcp/socksm.c */
    char s1[] = "string1";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**close", "**close %s", s1 );
    ChkMsg( err, MPI_ERR_OTHER, "**close %s" );
    }
    /** src/mpid/ch3/channels/nemesis/netmod/tcp/socksm.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**tmpvc_connect_fail", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**tmpvc_connect_fail" );
    /** src/mpid/ch3/channels/nemesis/netmod/tcp/socksm.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**sock_closed", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**sock_closed" );
    {
    /** src/mpid/ch3/channels/nemesis/netmod/tcp/socksm.c */
    int i1 = 1;
    char s2[] = "string2";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**comm_fail", "**comm_fail %d %s", i1, s2 );
    ChkMsg( err, MPI_ERR_OTHER, "**comm_fail %d %s" );
    }
    /** src/mpid/ch3/channels/nemesis/netmod/tcp/socksm.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**comm_fail_conn", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**comm_fail_conn" );
    {
    /** src/mpid/ch3/channels/nemesis/netmod/tcp/socksm.c */
    char s1[] = "string1";
    char s2[] = "string2";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**comm_fail_conn", "**comm_fail_conn %s %s", s1, s2 );
    ChkMsg( err, MPI_ERR_OTHER, "**comm_fail_conn %s %s" );
    }
    {
    /** src/mpid/ch3/channels/nemesis/netmod/tcp/socksm.c */
    char s1[] = "string1";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**sock_accept", "**sock_accept %s", s1 );
    ChkMsg( err, MPI_ERR_OTHER, "**sock_accept %s" );
    }
    /** src/mpid/ch3/channels/nemesis/netmod/tcp/tcp_finalize.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**closesocket", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**closesocket" );
    {
    /** src/mpid/ch3/channels/nemesis/netmod/tcp/tcp_finalize.c */
    char s1[] = "string1";
    int i2 = 2;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**closesocket", "**closesocket %s %d", s1, i2 );
    ChkMsg( err, MPI_ERR_OTHER, "**closesocket %s %d" );
    }
    {
    /** src/mpid/ch3/channels/nemesis/netmod/tcp/tcp_getip.c */
    int i1 = 1;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**nomem", "**nomem %d", i1 );
    ChkMsg( err, MPI_ERR_OTHER, "**nomem %d" );
    }
    /** src/mpid/ch3/channels/nemesis/netmod/tcp/tcp_getip.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**ioctl", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**ioctl" );
    {
    /** src/mpid/ch3/channels/nemesis/netmod/tcp/tcp_getip.c */
    int i1 = 1;
    char s2[] = "string2";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**ioctl", "**ioctl %d %s", i1, s2 );
    ChkMsg( err, MPI_ERR_OTHER, "**ioctl %d %s" );
    }
    /** src/mpid/ch3/channels/nemesis/netmod/tcp/tcp_init.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**signal", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**signal" );
    {
    /** src/mpid/ch3/channels/nemesis/netmod/tcp/tcp_init.c */
    char s1[] = "string1";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**signal", "**signal %s", s1 );
    ChkMsg( err, MPI_ERR_OTHER, "**signal %s" );
    }
    /** src/mpid/ch3/channels/nemesis/netmod/tcp/tcp_init.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**ifname_and_hostname", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**ifname_and_hostname" );
    /** src/mpid/ch3/channels/nemesis/netmod/tcp/tcp_init.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**iface_notfound", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**iface_notfound" );
    {
    /** src/mpid/ch3/channels/nemesis/netmod/tcp/tcp_init.c */
    char s1[] = "string1";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**iface_notfound", "**iface_notfound %s", s1 );
    ChkMsg( err, MPI_ERR_OTHER, "**iface_notfound %s" );
    }
    /** src/mpid/ch3/channels/nemesis/netmod/tcp/tcp_init.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**gethostbyname", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**gethostbyname" );
    {
    /** src/mpid/ch3/channels/nemesis/netmod/tcp/tcp_init.c */
    char s1[] = "string1";
    int i2 = 2;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**gethostbyname", "**gethostbyname %s %d", s1, i2 );
    ChkMsg( err, MPI_ERR_OTHER, "**gethostbyname %s %d" );
    }
    /** src/mpid/ch3/channels/nemesis/netmod/tcp/tcp_init.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**getsockname", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**getsockname" );
    {
    /** src/mpid/ch3/channels/nemesis/netmod/tcp/tcp_init.c */
    char s1[] = "string1";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**getsockname", "**getsockname %s", s1 );
    ChkMsg( err, MPI_ERR_OTHER, "**getsockname %s" );
    }
    /** src/mpid/ch3/channels/nemesis/netmod/tcp/tcp_init.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**argstr_missingifname", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**argstr_missingifname" );
    /** src/mpid/ch3/channels/nemesis/netmod/tcp/tcp_init.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**ifnameinvalid", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**ifnameinvalid" );
    /** src/mpid/ch3/channels/nemesis/netmod/tcp/tcp_init.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**afinetinvalid", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**afinetinvalid" );
    /** src/mpid/ch3/channels/nemesis/netmod/tcp/tcp_init.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**badportrange", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**badportrange" );
    /** src/mpid/ch3/channels/nemesis/netmod/tcp/tcp_init.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**sock|poll|bind", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**sock|poll|bind" );
    {
    /** src/mpid/ch3/channels/nemesis/netmod/tcp/tcp_init.c */
    int i1 = 1;
    int i2 = 2;
    char s3[] = "string3";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**sock|poll|bind", "**sock|poll|bind %d %d %s", i1, i2, s3 );
    ChkMsg( err, MPI_ERR_OTHER, "**sock|poll|bind %d %d %s" );
    }
    /** src/mpid/ch3/channels/nemesis/netmod/tcp/tcp_send.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**writev", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**writev" );
    {
    /** src/mpid/ch3/channels/nemesis/netmod/tcp/tcp_send.c */
    char s1[] = "string1";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**writev", "**writev %s", s1 );
    ChkMsg( err, MPI_ERR_OTHER, "**writev %s" );
    }
    /** src/mpid/ch3/channels/nemesis/netmod/tcp/tcp_send.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**ch3|loadsendiov", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**ch3|loadsendiov" );
    /** src/mpid/ch3/channels/nemesis/netmod/wintcp/wintcp_init.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**ex_create_set", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**ex_create_set" );
    /** src/mpid/ch3/channels/nemesis/netmod/wintcp/wintcp_lmt.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**sock_writev", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**sock_writev" );
    /** src/mpid/ch3/channels/nemesis/netmod/wintcp/wintcp_lmt.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**sock|poll|accept", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**sock|poll|accept" );
    {
    /** src/mpid/ch3/channels/nemesis/netmod/wintcp/wintcp_lmt.c */
    int i1 = 1;
    char s2[] = "string2";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**sock|poll|accept", "**sock|poll|accept %d %s", i1, s2 );
    ChkMsg( err, MPI_ERR_OTHER, "**sock|poll|accept %d %s" );
    }
    /** src/mpid/ch3/channels/nemesis/netmod/wintcp/wintcp_utility.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**intern", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**intern" );
    {
    /** src/mpid/ch3/channels/nemesis/netmod/wintcp/wintcp_utility.c */
    char s1[] = "string1";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**intern", "**intern %s", s1 );
    ChkMsg( err, MPI_ERR_OTHER, "**intern %s" );
    }
    /** src/mpid/ch3/channels/nemesis/src/ch3_init.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**init_progress", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**init_progress" );
    /** src/mpid/ch3/channels/nemesis/src/ch3_progress.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**ch3|pktarraytoosmall", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**ch3|pktarraytoosmall" );
    /** src/mpid/ch3/channels/nemesis/src/ch3_rma_shm.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**winflavor", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**winflavor" );
    /** src/mpid/ch3/channels/nemesis/src/mpid_nem_ckpt.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**blcr_mod", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**blcr_mod" );
    /** src/mpid/ch3/channels/nemesis/src/mpid_nem_ckpt.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**sem_init", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**sem_init" );
    {
    /** src/mpid/ch3/channels/nemesis/src/mpid_nem_ckpt.c */
    char s1[] = "string1";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**sem_init", "**sem_init %s", s1 );
    ChkMsg( err, MPI_ERR_OTHER, "**sem_init %s" );
    }
    /** src/mpid/ch3/channels/nemesis/src/mpid_nem_ckpt.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**sem_destroy", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**sem_destroy" );
    {
    /** src/mpid/ch3/channels/nemesis/src/mpid_nem_ckpt.c */
    char s1[] = "string1";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**sem_destroy", "**sem_destroy %s", s1 );
    ChkMsg( err, MPI_ERR_OTHER, "**sem_destroy %s" );
    }
    /** src/mpid/ch3/channels/nemesis/src/mpid_nem_ckpt.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**ckptpkt", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**ckptpkt" );
    /** src/mpid/ch3/channels/nemesis/src/mpid_nem_ckpt.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**sem_post", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**sem_post" );
    {
    /** src/mpid/ch3/channels/nemesis/src/mpid_nem_ckpt.c */
    char s1[] = "string1";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**sem_post", "**sem_post %s", s1 );
    ChkMsg( err, MPI_ERR_OTHER, "**sem_post %s" );
    }
    /** src/mpid/ch3/channels/nemesis/src/mpid_nem_ckpt.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**sem_wait", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**sem_wait" );
    {
    /** src/mpid/ch3/channels/nemesis/src/mpid_nem_ckpt.c */
    char s1[] = "string1";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**sem_wait", "**sem_wait %s", s1 );
    ChkMsg( err, MPI_ERR_OTHER, "**sem_wait %s" );
    }
    /** src/mpid/ch3/channels/nemesis/src/mpid_nem_init.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**sock_gethost", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**sock_gethost" );
    {
    /** src/mpid/ch3/channels/nemesis/src/mpid_nem_init.c */
    char s1[] = "string1";
    int i2 = 2;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**sock_gethost", "**sock_gethost %s %d", s1, i2 );
    ChkMsg( err, MPI_ERR_OTHER, "**sock_gethost %s %d" );
    }
    /** src/mpid/ch3/channels/nemesis/src/mpid_nem_lmt.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**nomemreq", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**nomemreq" );
    {
    /** src/mpid/ch3/channels/nemesis/src/mpid_nem_lmt.c */
    int i1 = 1;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**nomemreq", "**nomemuereq %d", i1 );
    ChkMsg( err, MPI_ERR_OTHER, "**nomemuereq %d" );
    }
    /** src/mpid/ch3/channels/nemesis/src/mpid_nem_lmt_dma.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**shm_open", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**shm_open" );
    {
    /** src/mpid/ch3/channels/nemesis/src/mpid_nem_lmt_dma.c */
    char s1[] = "string1";
    int i2 = 2;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**shm_open", "**shm_open %s %d", s1, i2 );
    ChkMsg( err, MPI_ERR_OTHER, "**shm_open %s %d" );
    }
    /** src/mpid/ch3/channels/nemesis/src/mpid_nem_lmt_dma.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**abi_version_mismatch", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**abi_version_mismatch" );
    {
    /** src/mpid/ch3/channels/nemesis/src/mpid_nem_lmt_dma.c */
    int i1 = MPI_INT;
    int i2 = MPI_INT;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**abi_version_mismatch", "**abi_version_mismatch %D %D", i1, i2 );
    ChkMsg( err, MPI_ERR_OTHER, "**abi_version_mismatch %D %D" );
    }
    /** src/mpid/ch3/channels/nemesis/src/mpid_nem_lmt_dma.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mmap", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mmap" );
    {
    /** src/mpid/ch3/channels/nemesis/src/mpid_nem_lmt_dma.c */
    int i1 = 1;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mmap", "**mmap %d", i1 );
    ChkMsg( err, MPI_ERR_OTHER, "**mmap %d" );
    }
    /** src/mpid/ch3/channels/nemesis/src/mpid_nem_lmt_dma.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**recv_status", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**recv_status" );
    {
    /** src/mpid/ch3/channels/nemesis/src/mpid_nem_lmt_dma.c */
    int i1 = 1;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**recv_status", "**recv_status %d", i1 );
    ChkMsg( err, MPI_ERR_OTHER, "**recv_status %d" );
    }
    /** src/mpid/ch3/channels/nemesis/src/mpid_nem_lmt_dma.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**invalid_knem_status", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**invalid_knem_status" );
    {
    /** src/mpid/ch3/channels/nemesis/src/mpid_nem_lmt_dma.c */
    int i1 = 1;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**invalid_knem_status", "**invalid_knem_status %d", i1 );
    ChkMsg( err, MPI_ERR_OTHER, "**invalid_knem_status %d" );
    }
    /** src/mpid/ch3/channels/nemesis/src/mpid_nem_lmt_vmsplice.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**vmsplice", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**vmsplice" );
    {
    /** src/mpid/ch3/channels/nemesis/src/mpid_nem_lmt_vmsplice.c */
    int i1 = 1;
    char s2[] = "string2";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**vmsplice", "**vmsplice %d %s", i1, s2 );
    ChkMsg( err, MPI_ERR_OTHER, "**vmsplice %d %s" );
    }
    /** src/mpid/ch3/channels/nemesis/src/mpid_nem_lmt_vmsplice.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**tempnam", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**tempnam" );
    {
    /** src/mpid/ch3/channels/nemesis/src/mpid_nem_lmt_vmsplice.c */
    int i1 = 1;
    char s2[] = "string2";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**tempnam", "**tempnam %d %s", i1, s2 );
    ChkMsg( err, MPI_ERR_OTHER, "**tempnam %d %s" );
    }
    /** src/mpid/ch3/channels/nemesis/src/mpid_nem_lmt_vmsplice.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mkfifo", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**mkfifo" );
    {
    /** src/mpid/ch3/channels/nemesis/src/mpid_nem_lmt_vmsplice.c */
    int i1 = 1;
    char s2[] = "string2";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**mkfifo", "**mkfifo %d %s", i1, s2 );
    ChkMsg( err, MPI_ERR_OTHER, "**mkfifo %d %s" );
    }
    {
    /** src/mpid/ch3/channels/nemesis/src/mpid_nem_lmt_vmsplice.c */
    int i1 = 1;
    char s2[] = "string2";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**read", "**readv %d %s", i1, s2 );
    ChkMsg( err, MPI_ERR_OTHER, "**readv %d %s" );
    }
    /** src/mpid/ch3/channels/nemesis/src/mpid_nem_mpich2_rma.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**winput_oob", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**winput_oob" );
    /** src/mpid/ch3/channels/nemesis/src/mpid_nem_mpich2_rma.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**winget_oob", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**winget_oob" );
    /** src/mpid/ch3/channels/nemesis/src/mpid_nem_mpich2_rma.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**winserialize", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**winserialize" );
    /** src/mpid/ch3/channels/nemesis/src/mpid_nem_mpich2_rma.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**windeserialize", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**windeserialize" );
    /** src/mpid/ch3/channels/nemesis/src/mpid_nem_network.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**invalid_netmod", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**invalid_netmod" );
    {
    /** src/mpid/ch3/channels/nemesis/src/mpid_nem_network.c */
    char s1[] = "string1";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**invalid_netmod", "**invalid_netmod %s", s1 );
    ChkMsg( err, MPI_ERR_OTHER, "**invalid_netmod %s" );
    }
    /** src/mpid/ch3/channels/sock/src/ch3_isend.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**ch3|sock|postwrite", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**ch3|sock|postwrite" );
    {
    /** src/mpid/ch3/channels/sock/src/ch3_isend.c */
    char s1[] = "pointer1";
    char s2[] = "pointer2";
    char s3[] = "pointer3";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**ch3|sock|postwrite", "ch3|sock|postwrite %p %p %p", s1, s2, s3 );
    ChkMsg( err, MPI_ERR_OTHER, "ch3|sock|postwrite %p %p %p" );
    }
    /** src/mpid/ch3/channels/sock/src/ch3_isend.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**ch3|sock|writefailed", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**ch3|sock|writefailed" );
    {
    /** src/mpid/ch3/channels/sock/src/ch3_isend.c */
    int i1 = 1;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**ch3|sock|writefailed", "**ch3|sock|writefailed %d", i1 );
    ChkMsg( err, MPI_ERR_OTHER, "**ch3|sock|writefailed %d" );
    }
    /** src/mpid/ch3/channels/sock/src/ch3_istartmsg.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**ch3|sock|connectionfailed", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**ch3|sock|connectionfailed" );
    /** src/mpid/ch3/channels/sock/src/ch3_progress.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**ch3|sock|handle_sock_event", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**ch3|sock|handle_sock_event" );
    /** src/mpid/ch3/channels/sock/src/ch3_progress.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**progress_sock_wait", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**progress_sock_wait" );
    /** src/mpid/ch3/channels/sock/src/ch3_progress.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**ch3|sock|immedwrite", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**ch3|sock|immedwrite" );
    {
    /** src/mpid/ch3/channels/sock/src/ch3_progress.c */
    char s1[] = "pointer1";
    char s2[] = "pointer2";
    char s3[] = "pointer3";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**ch3|sock|immedwrite", "ch3|sock|immedwrite %p %p %p", s1, s2, s3 );
    ChkMsg( err, MPI_ERR_OTHER, "ch3|sock|immedwrite %p %p %p" );
    }
    /** src/mpid/ch3/channels/sock/src/ch3_progress.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**ch3|sock|immedread", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**ch3|sock|immedread" );
    {
    /** src/mpid/ch3/channels/sock/src/ch3_progress.c */
    char s1[] = "pointer1";
    char s2[] = "pointer2";
    char s3[] = "pointer3";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**ch3|sock|immedread", "ch3|sock|immedread %p %p %p", s1, s2, s3 );
    ChkMsg( err, MPI_ERR_OTHER, "ch3|sock|immedread %p %p %p" );
    }
    /** src/mpid/ch3/channels/sock/src/ch3_progress.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**ch3|sock|postread", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**ch3|sock|postread" );
    {
    /** src/mpid/ch3/channels/sock/src/ch3_progress.c */
    char s1[] = "pointer1";
    char s2[] = "pointer2";
    char s3[] = "pointer3";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**ch3|sock|postread", "ch3|sock|postread %p %p %p", s1, s2, s3 );
    ChkMsg( err, MPI_ERR_OTHER, "ch3|sock|postread %p %p %p" );
    }
    /** src/mpid/ch3/channels/sock/src/ch3i_errno.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**ch3|sock|connclose", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**ch3|sock|connclose" );
    /** src/mpid/ch3/channels/sock/src/ch3i_errno.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**ch3|sock|hostlookup", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**ch3|sock|hostlookup" );
    /** src/mpid/ch3/channels/sock/src/ch3i_errno.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**ch3|sock|connrefused", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**ch3|sock|connrefused" );
    /** src/mpid/ch3/channels/sock/src/ch3i_errno.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**ch3|sock|connterm", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**ch3|sock|connterm" );
    /** src/mpid/ch3/channels/sock/src/ch3i_errno.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**ch3|sock|badsock", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**ch3|sock|badsock" );
    /** src/mpid/ch3/channels/sock/src/ch3i_errno.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**buffer", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**buffer" );
    /** src/mpid/ch3/channels/sock/src/ch3i_errno.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**ch3|sock|addrinuse", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**ch3|sock|addrinuse" );
    /** src/mpid/ch3/channels/sock/src/ch3i_errno.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**ch3|sock|failure", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**ch3|sock|failure" );
    {
    /** src/mpid/ch3/channels/sock/src/ch3i_errno.c */
    int i1 = 1;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**ch3|sock|failure", "**ch3|sock|failure %d", i1 );
    ChkMsg( err, MPI_ERR_OTHER, "**ch3|sock|failure %d" );
    }
    /** src/mpid/ch3/src/ch3u_comm_spawn_multiple.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**pmi_spawn_multiple", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**pmi_spawn_multiple" );
    {
    /** src/mpid/ch3/src/ch3u_comm_spawn_multiple.c */
    int i1 = 1;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**pmi_spawn_multiple", "**pmi_spawn_multiple %d", i1 );
    ChkMsg( err, MPI_ERR_OTHER, "**pmi_spawn_multiple %d" );
    }
    /** src/mpid/ch3/src/ch3u_comm_spawn_multiple.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**pmi_kvsget", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**pmi_kvsget" );
    {
    /** src/mpid/ch3/src/ch3u_comm_spawn_multiple.c */
    char s1[] = "string1";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**pmi_kvsget", "**pmi_kvsget %s", s1 );
    ChkMsg( err, MPI_ERR_OTHER, "**pmi_kvsget %s" );
    }
    {
    /** src/mpid/ch3/src/ch3u_comm_spawn_multiple.c */
    int i1 = 1;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**pmi_kvsget", "**pmi_kvsget %d", i1 );
    ChkMsg( err, MPI_ERR_OTHER, "**pmi_kvsget %d" );
    }
    /** src/mpid/ch3/src/ch3u_eager.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**ch3|eagermsg", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**ch3|eagermsg" );
    /** src/mpid/ch3/src/ch3u_eager.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**ch3|postrecv", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**ch3|postrecv" );
    {
    /** src/mpid/ch3/src/ch3u_eager.c */
    char s1[] = "string1";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**ch3|postrecv", "**ch3|postrecv %s", s1 );
    ChkMsg( err, MPI_ERR_OTHER, "**ch3|postrecv %s" );
    }
    /** src/mpid/ch3/src/ch3u_eager.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**rsendnomatch", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**rsendnomatch" );
    {
    /** src/mpid/ch3/src/ch3u_eager.c */
    int i1 = 1;
    int i2 = 2;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**rsendnomatch", "**rsendnomatch %d %d", i1, i2 );
    ChkMsg( err, MPI_ERR_OTHER, "**rsendnomatch %d %d" );
    }
    /** src/mpid/ch3/src/ch3u_eager.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**ch3|loadrecviov", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**ch3|loadrecviov" );
    /** src/mpid/ch3/src/ch3u_eagersync.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**ch3|syncack", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**ch3|syncack" );
    /** src/mpid/ch3/src/ch3u_handle_connection.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**ch3|unhandled_connection_state", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**ch3|unhandled_connection_state" );
    {
    /** src/mpid/ch3/src/ch3u_handle_connection.c */
    char s1[] = "pointer1";
    int i2 = 2;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**ch3|unhandled_connection_state", "**ch3|unhandled_connection_state %p %d", s1, i2 );
    ChkMsg( err, MPI_ERR_OTHER, "**ch3|unhandled_connection_state %p %d" );
    }
    /** src/mpid/ch3/src/ch3u_handle_connection.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**ch3|send_close_ack", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**ch3|send_close_ack" );
    /** src/mpid/ch3/src/ch3u_handle_connection.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**ch3|close_progress", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**ch3|close_progress" );
    /** src/mpid/ch3/src/ch3u_handle_connection.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**pmi_kvs_get_value_length_max", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**pmi_kvs_get_value_length_max" );
    /** src/mpid/ch3/src/ch3u_handle_recv_req.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**ch3|rmamsg", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**ch3|rmamsg" );
    {
    /** src/mpid/ch3/src/ch3u_handle_recv_req.c */
    int i1 = 1;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**opnotpredefined", "**opnotpredefined %d", i1 );
    ChkMsg( err, MPI_ERR_OTHER, "**opnotpredefined %d" );
    }
    /** src/mpid/ch3/src/ch3u_port.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**init_vcrt", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**init_vcrt" );
    /** src/mpid/ch3/src/ch3u_port.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**init_getptr", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**init_getptr" );
    /** src/mpid/ch3/src/ch3u_port.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**portexist", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**portexist" );
    {
    /** src/mpid/ch3/src/ch3u_port.c */
    char s1[] = "string1";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**portexist", "**portexist %s", s1 );
    ChkMsg( err, MPI_ERR_OTHER, "**portexist %s" );
    }
    /** src/mpid/ch3/src/ch3u_request.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**invalid_handle", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**invalid_handle" );
    {
    /** src/mpid/ch3/src/ch3u_request.c */
    int i1 = 1;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**invalid_handle", "**invalid_handle %d", i1 );
    ChkMsg( err, MPI_ERR_OTHER, "**invalid_handle %d" );
    }
    /** src/mpid/ch3/src/ch3u_request.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**invalid_refcount", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**invalid_refcount" );
    {
    /** src/mpid/ch3/src/ch3u_request.c */
    int i1 = 1;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**invalid_refcount", "**invalid_refcount %d", i1 );
    ChkMsg( err, MPI_ERR_OTHER, "**invalid_refcount %d" );
    }
    /** src/mpid/ch3/src/ch3u_rma_ops.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**winnoprogress", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**winnoprogress" );
    /** src/mpid/ch3/src/ch3u_rma_sync.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**winInvalidOp", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**winInvalidOp" );
    /** src/mpid/ch3/src/ch3u_rma_sync.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**rmasync", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**rmasync" );
    /** src/mpid/ch3/src/ch3u_rma_sync.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**winunlockrank", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**winunlockrank" );
    {
    /** src/mpid/ch3/src/ch3u_rma_sync.c */
    int i1 = 1;
    int i2 = 2;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**winunlockrank", "**winunlockrank %d %d", i1, i2 );
    ChkMsg( err, MPI_ERR_OTHER, "**winunlockrank %d %d" );
    }
    /** src/mpid/ch3/src/ch3u_rma_sync.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**winRMAmessage", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**winRMAmessage" );
    /** src/mpid/ch3/src/ch3u_rndv.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**ch3|rtspkt", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**ch3|rtspkt" );
    /** src/mpid/ch3/src/ch3u_rndv.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**ch3|ctspkt", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**ch3|ctspkt" );
    /** src/mpid/ch3/src/ch3u_rndv.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**ch3|senddata", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**ch3|senddata" );
    /** src/mpid/ch3/src/mpid_cancel_send.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**ch3|cancelrndv", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**ch3|cancelrndv" );
    /** src/mpid/ch3/src/mpid_cancel_send.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**ch3|cancelreq", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**ch3|cancelreq" );
    /** src/mpid/ch3/src/mpid_cancel_send.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**ch3|cancelresp", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**ch3|cancelresp" );
    {
    /** src/mpid/ch3/src/mpid_comm_spawn_multiple.c */
    char s1[] = "string1";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**notimpl", "**notimpl %s", s1 );
    ChkMsg( err, MPI_ERR_OTHER, "**notimpl %s" );
    }
    /** src/mpid/ch3/src/mpid_get_universe_size.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**pmi_get_universe_size", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**pmi_get_universe_size" );
    {
    /** src/mpid/ch3/src/mpid_get_universe_size.c */
    int i1 = 1;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**pmi_get_universe_size", "**pmi_get_universe_size %d", i1 );
    ChkMsg( err, MPI_ERR_OTHER, "**pmi_get_universe_size %d" );
    }
    /** src/mpid/ch3/src/mpid_getpname.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**procnamefailed", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**procnamefailed" );
    /** src/mpid/ch3/src/mpid_imrecv.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**ch3|badmsgtype", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**ch3|badmsgtype" );
    {
    /** src/mpid/ch3/src/mpid_imrecv.c */
    int i1 = 1;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**ch3|badmsgtype", "**ch3|badmsgtype %d", i1 );
    ChkMsg( err, MPI_ERR_OTHER, "**ch3|badmsgtype %d" );
    }
    /** src/mpid/ch3/src/mpid_init.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**ch3|ch3_init", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**ch3|ch3_init" );
    /** src/mpid/ch3/src/mpid_init.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**dev|vcrt_create", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**dev|vcrt_create" );
    {
    /** src/mpid/ch3/src/mpid_init.c */
    char s1[] = "string1";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**dev|vcrt_create", "**dev|vcrt_create %s", s1 );
    ChkMsg( err, MPI_ERR_OTHER, "**dev|vcrt_create %s" );
    }
    /** src/mpid/ch3/src/mpid_init.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**dev|vcrt_get*", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**dev|vcrt_get*" );
    {
    /** src/mpid/ch3/src/mpid_init.c */
    char s1[] = "string1";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**dev|vcrt_get*", "dev|vcrt_get* %s", s1 );
    ChkMsg( err, MPI_ERR_OTHER, "dev|vcrt_get* %s" );
    }
    /** src/mpid/ch3/src/mpid_init.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**ch3|get_parent_port", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**ch3|get_parent_port" );
    /** src/mpid/ch3/src/mpid_init.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**ch3|conn_parent", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**ch3|conn_parent" );
    {
    /** src/mpid/ch3/src/mpid_init.c */
    char s1[] = "string1";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**ch3|conn_parent", "**ch3|conn_parent %s", s1 );
    ChkMsg( err, MPI_ERR_OTHER, "**ch3|conn_parent %s" );
    }
    /** src/mpid/ch3/src/mpid_init.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**pmi_init", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**pmi_init" );
    {
    /** src/mpid/ch3/src/mpid_init.c */
    int i1 = 1;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**pmi_init", "**pmi_init %d", i1 );
    ChkMsg( err, MPI_ERR_OTHER, "**pmi_init %d" );
    }
    /** src/mpid/ch3/src/mpid_init.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**pmi_get_rank", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**pmi_get_rank" );
    {
    /** src/mpid/ch3/src/mpid_init.c */
    int i1 = 1;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**pmi_get_rank", "**pmi_get_rank %d", i1 );
    ChkMsg( err, MPI_ERR_OTHER, "**pmi_get_rank %d" );
    }
    /** src/mpid/ch3/src/mpid_init.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**pmi_get_size", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**pmi_get_size" );
    {
    /** src/mpid/ch3/src/mpid_init.c */
    int i1 = 1;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**pmi_get_size", "**pmi_get_size %d", i1 );
    ChkMsg( err, MPI_ERR_OTHER, "**pmi_get_size %d" );
    }
    /** src/mpid/ch3/src/mpid_init.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**pmi_get_appnum", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**pmi_get_appnum" );
    {
    /** src/mpid/ch3/src/mpid_init.c */
    int i1 = 1;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**pmi_get_appnum", "**pmi_get_appnum %d", i1 );
    ChkMsg( err, MPI_ERR_OTHER, "**pmi_get_appnum %d" );
    }
    /** src/mpid/ch3/src/mpid_init.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**pmi_get_id_length_max", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**pmi_get_id_length_max" );
    {
    /** src/mpid/ch3/src/mpid_init.c */
    int i1 = 1;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**pmi_get_id_length_max", "**pmi_get_id_length_max %d", i1 );
    ChkMsg( err, MPI_ERR_OTHER, "**pmi_get_id_length_max %d" );
    }
    /** src/mpid/ch3/src/mpid_init.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**pmi_get_id", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**pmi_get_id" );
    {
    /** src/mpid/ch3/src/mpid_init.c */
    int i1 = 1;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**pmi_get_id", "**pmi_get_id %d", i1 );
    ChkMsg( err, MPI_ERR_OTHER, "**pmi_get_id %d" );
    }
    /** src/mpid/ch3/src/mpid_init.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**dev|pg_init", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**dev|pg_init" );
    /** src/mpid/ch3/src/mpid_init.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**dev|pg_create", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**dev|pg_create" );
    {
    /** src/mpid/ch3/src/mpid_init.c */
    int i1 = 1;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**pmi_kvs_get_value_length_max", "**pmi_kvs_get_value_length_max %d", i1 );
    ChkMsg( err, MPI_ERR_OTHER, "**pmi_kvs_get_value_length_max %d" );
    }
    /** src/mpid/ch3/src/mpid_port.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**argstr_port_name_tag", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**argstr_port_name_tag" );
    /** src/mpid/ch3/src/mpid_port.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**argstr_no_port_name_tag", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**argstr_no_port_name_tag" );
    /** src/mpid/ch3/src/mpid_send.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**dev|selfsenddeadlock", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**dev|selfsenddeadlock" );
    /** src/mpid/ch3/src/mpid_startall.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**ch3|badreqtype", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**ch3|badreqtype" );
    {
    /** src/mpid/ch3/src/mpid_startall.c */
    int i1 = 1;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**ch3|badreqtype", "**ch3|badreqtype %d", i1 );
    ChkMsg( err, MPI_ERR_OTHER, "**ch3|badreqtype %d" );
    }
    /** src/mpid/ch3/src/mpid_vc.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**unknowngpid", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**unknowngpid" );
    {
    /** src/mpid/ch3/src/mpid_vc.c */
    int i1 = 1;
    int i2 = 2;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**unknowngpid", "**unknowngpid %d %d", i1, i2 );
    ChkMsg( err, MPI_ERR_OTHER, "**unknowngpid %d %d" );
    }
    /** src/mpid/ch3/src/mpidi_pg.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**ch3|pmi_finalize", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**ch3|pmi_finalize" );
    {
    /** src/mpid/ch3/src/mpidi_pg.c */
    int i1 = 1;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**ch3|pmi_finalize", "**ch3|pmi_finalize %d", i1 );
    ChkMsg( err, MPI_ERR_OTHER, "**ch3|pmi_finalize %d" );
    }
    /** src/mpid/ch3/src/mpidi_pg.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**dev|pg_finalize|list_not_empty", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**dev|pg_finalize|list_not_empty" );
    /** src/mpid/ch3/src/mpidi_pg.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**dev|pg_not_found", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**dev|pg_not_found" );
    {
    /** src/mpid/ch3/src/mpidi_pg.c */
    char s1[] = "pointer1";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**dev|pg_not_found", "**dev|pg_not_found %p", s1 );
    ChkMsg( err, MPI_ERR_OTHER, "**dev|pg_not_found %p" );
    }
    /** src/mpid/ch3/src/mpidi_pg.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**noConnInfoToString", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**noConnInfoToString" );
    /** src/mpid/ch3/src/mpidi_pg.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**snprintf", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**snprintf" );
    {
    /** src/mpid/ch3/src/mpidi_pg.c */
    int i1 = 1;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**snprintf", "**snprintf %d", i1 );
    ChkMsg( err, MPI_ERR_OTHER, "**snprintf %d" );
    }
    /** src/mpid/ch3/src/mpidi_pg.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**pmi_kvs_get_name_length_max", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**pmi_kvs_get_name_length_max" );
    {
    /** src/mpid/ch3/src/mpidi_pg.c */
    int i1 = 1;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**pmi_kvs_get_name_length_max", "**pmi_kvs_get_name_length_max %d", i1 );
    ChkMsg( err, MPI_ERR_OTHER, "**pmi_kvs_get_name_length_max %d" );
    }
    /** src/mpid/ch3/src/mpidi_pg.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**pmi_kvs_get_my_name", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**pmi_kvs_get_my_name" );
    {
    /** src/mpid/ch3/src/mpidi_pg.c */
    int i1 = 1;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**pmi_kvs_get_my_name", "**pmi_kvs_get_my_name %d", i1 );
    ChkMsg( err, MPI_ERR_OTHER, "**pmi_kvs_get_my_name %d" );
    }
    /** src/mpid/ch3/util/ftb/ftb.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**pmi_jobgetid", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**pmi_jobgetid" );
    /** src/mpid/ch3/util/ftb/ftb.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**ftb_connect", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**ftb_connect" );
    /** src/mpid/ch3/util/ftb/ftb.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**ftb_declare_publishable_events", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**ftb_declare_publishable_events" );
    /** src/mpid/ch3/util/sock/ch3u_connect_sock.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**ch3|sock|badhost", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**ch3|sock|badhost" );
    {
    /** src/mpid/ch3/util/sock/ch3u_connect_sock.c */
    char s1[] = "string1";
    int i2 = 2;
    char s3[] = "string3";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**ch3|sock|badhost", "**ch3|sock|badhost %s %d %s", s1, i2, s3 );
    ChkMsg( err, MPI_ERR_OTHER, "**ch3|sock|badhost %s %d %s" );
    }
    {
    /** src/mpid/ch3/util/sock/ch3u_connect_sock.c */
    char s1[] = "string1";
    int i2 = 2;
    char s3[] = "string3";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**ch3|sock|connrefused", "**ch3|sock|connrefused %s %d %s", s1, i2, s3 );
    ChkMsg( err, MPI_ERR_OTHER, "**ch3|sock|connrefused %s %d %s" );
    }
    /** src/mpid/ch3/util/sock/ch3u_connect_sock.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**argstr_missinghost", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**argstr_missinghost" );
    /** src/mpid/ch3/util/sock/ch3u_connect_sock.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**argstr_port", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**argstr_port" );
    /** src/mpid/ch3/util/sock/ch3u_connect_sock.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**ch3|sock|accept", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**ch3|sock|accept" );
    /** src/mpid/ch3/util/sock/ch3u_connect_sock.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**ch3|sock|connfailed", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**ch3|sock|connfailed" );
    /** src/mpid/ch3/util/sock/ch3u_connect_sock.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**ch3|sock|scconnaccept", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**ch3|sock|scconnaccept" );
    /** src/mpid/ch3/util/sock/ch3u_connect_sock.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**ch3|sock|scopenresp", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**ch3|sock|scopenresp" );
    /** src/mpid/ch3/util/sock/ch3u_connect_sock.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**ch3|sock|badpacket", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**ch3|sock|badpacket" );
    {
    /** src/mpid/ch3/util/sock/ch3u_connect_sock.c */
    int i1 = 1;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**ch3|sock|badpacket", "**ch3|sock|badpacket %d", i1 );
    ChkMsg( err, MPI_ERR_OTHER, "**ch3|sock|badpacket %d" );
    }
    /** src/mpid/ch3/util/sock/ch3u_connect_sock.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**pglookup", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**pglookup" );
    {
    /** src/mpid/ch3/util/sock/ch3u_connect_sock.c */
    char s1[] = "string1";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**pglookup", "**pglookup %s", s1 );
    ChkMsg( err, MPI_ERR_OTHER, "**pglookup %s" );
    }
    /** src/mpid/ch3/util/sock/ch3u_connect_sock.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**ch3|sock|open_lrecv_data", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**ch3|sock|open_lrecv_data" );
    /** src/mpid/ch3/util/sock/ch3u_connect_sock.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**ch3|sock|openlsend", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**ch3|sock|openlsend" );
    /** src/mpid/ch3/util/sock/ch3u_connect_sock.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**sock_post_close", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**sock_post_close" );
    /** src/mpid/ch3/util/sock/ch3u_connect_sock.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**ch3|sock|postconnect", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**ch3|sock|postconnect" );
    {
    /** src/mpid/ch3/util/sock/ch3u_connect_sock.c */
    int i1 = 1;
    int i2 = 2;
    char s3[] = "string3";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**ch3|sock|postconnect", "**ch3|sock|postconnect %d %d %s", i1, i2, s3 );
    ChkMsg( err, MPI_ERR_OTHER, "**ch3|sock|postconnect %d %d %s" );
    }
    /** src/mpid/ch3/util/sock/ch3u_connect_sock.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**ch3|sock|connalloc", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**ch3|sock|connalloc" );
    /** src/mpid/ch3/util/sock/ch3u_init_sock.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**init_buscard", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**init_buscard" );
    /** src/mpid/ch3/util/unordered/unordered.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**ch3|pktordered", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**ch3|pktordered" );
    /** src/mpid/ch3/util/unordered/unordered.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**ch3|nopktcontainermem", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**ch3|nopktcontainermem" );
    /** src/mpid/ch3/util/unordered/unordered.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**ch3|ooocancelreq", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**ch3|ooocancelreq" );
    /** src/mpid/common/datatype/mpid_datatype.h */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**dtypecommit", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**dtypecommit" );
    /** src/mpid/common/sched/mpid_sched.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**toomanynbc", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**toomanynbc" );
    /** src/mpid/common/sock/iocp/sock.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**socket", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**socket" );
    {
    /** src/mpid/common/sock/iocp/sock.c */
    char s1[] = "string1";
    int i2 = 2;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**socket", "**socket %s %d", s1, i2 );
    ChkMsg( err, MPI_ERR_OTHER, "**socket %s %d" );
    }
    /** src/mpid/common/sock/iocp/sock.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**duphandle", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**duphandle" );
    {
    /** src/mpid/common/sock/iocp/sock.c */
    char s1[] = "string1";
    int i2 = 2;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**duphandle", "**duphandle %s %d", s1, i2 );
    ChkMsg( err, MPI_ERR_OTHER, "**duphandle %s %d" );
    }
    /** src/mpid/common/sock/iocp/sock.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**wsasock", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**wsasock" );
    {
    /** src/mpid/common/sock/iocp/sock.c */
    char s1[] = "string1";
    int i2 = 2;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**wsasock", "**wsasock %s %d", s1, i2 );
    ChkMsg( err, MPI_ERR_OTHER, "**wsasock %s %d" );
    }
    /** src/mpid/common/sock/iocp/sock.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**sock_init", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**sock_init" );
    /** src/mpid/common/sock/iocp/sock.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**getinfo", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**getinfo" );
    {
    /** src/mpid/common/sock/iocp/sock.c */
    char s1[] = "string1";
    int i2 = 2;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**getinfo", "**getinfo %s %d", s1, i2 );
    ChkMsg( err, MPI_ERR_OTHER, "**getinfo %s %d" );
    }
    /** src/mpid/common/sock/iocp/sock.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**desc_len", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**desc_len" );
    /** src/mpid/common/sock/iocp/sock.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**iocp", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**iocp" );
    {
    /** src/mpid/common/sock/iocp/sock.c */
    char s1[] = "string1";
    int i2 = 2;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**iocp", "**iocp %s %d", s1, i2 );
    ChkMsg( err, MPI_ERR_OTHER, "**iocp %s %d" );
    }
    /** src/mpid/common/sock/iocp/sock.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**bad_set", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**bad_set" );
    /** src/mpid/common/sock/iocp/sock.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**post_accept", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**post_accept" );
    /** src/mpid/common/sock/iocp/sock.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**sock_nop_accept", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**sock_nop_accept" );
    {
    /** src/mpid/common/sock/iocp/sock.c */
    char s1[] = "string1";
    int i2 = 2;
    char s3[] = "string3";
    int i4 = 4;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**sock_connect", "**sock_connect %s %d %s %d", s1, i2, s3, i4 );
    ChkMsg( err, MPI_ERR_OTHER, "**sock_connect %s %d %s %d" );
    }
    /** src/mpid/common/sock/iocp/sock.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**bad_sock", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**bad_sock" );
    /** src/mpid/common/sock/iocp/sock.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**pctwice", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**pctwice" );
    /** src/mpid/common/sock/iocp/sock.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**bad_listenersock", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**bad_listenersock" );
    /** src/mpid/common/sock/iocp/sock.c */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**shutdown", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**shutdown" );
    {
    /** src/mpid/common/sock/iocp/sock.c */
    char s1[] = "string1";
    int i2 = 2;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**shutdown", "**shutdown %s %d", s1, i2 );
    ChkMsg( err, MPI_ERR_OTHER, "**shutdown %s %d" );
    }
    /** src/mpid/common/sock/poll/sock_immed.i */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**sock|listener_bad_sock", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**sock|listener_bad_sock" );
    {
    /** src/mpid/common/sock/poll/sock_immed.i */
    int i1 = 1;
    int i2 = 2;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**sock|listener_bad_sock", "**sock|listener_bad_sock %d %d", i1, i2 );
    ChkMsg( err, MPI_ERR_OTHER, "**sock|listener_bad_sock %d %d" );
    }
    /** src/mpid/common/sock/poll/sock_immed.i */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**sock|listener_bad_state", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**sock|listener_bad_state" );
    {
    /** src/mpid/common/sock/poll/sock_immed.i */
    int i1 = 1;
    int i2 = 2;
    int i3 = 3;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**sock|listener_bad_state", "**sock|listener_bad_state %d %d %d", i1, i2, i3 );
    ChkMsg( err, MPI_ERR_OTHER, "**sock|listener_bad_state %d %d %d" );
    }
    /** src/mpid/common/sock/poll/sock_immed.i */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**sock|nosock", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**sock|nosock" );
    /** src/mpid/common/sock/poll/sock_immed.i */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**sock|osnomem", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**sock|osnomem" );
    /** src/mpid/common/sock/poll/sock_immed.i */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**sock|badhandle", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**sock|badhandle" );
    {
    /** src/mpid/common/sock/poll/sock_immed.i */
    int i1 = 1;
    int i2 = 2;
    int i3 = 3;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**sock|badhandle", "**sock|poll|badhandle %d %d %d", i1, i2, i3 );
    ChkMsg( err, MPI_ERR_OTHER, "**sock|poll|badhandle %d %d %d" );
    }
    /** src/mpid/common/sock/poll/sock_immed.i */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**sock|poll|nonblock", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**sock|poll|nonblock" );
    {
    /** src/mpid/common/sock/poll/sock_immed.i */
    int i1 = 1;
    char s2[] = "string2";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**sock|poll|nonblock", "**sock|poll|nonblock %d %s", i1, s2 );
    ChkMsg( err, MPI_ERR_OTHER, "**sock|poll|nonblock %d %s" );
    }
    /** src/mpid/common/sock/poll/sock_immed.i */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**sock|poll|nodelay", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**sock|poll|nodelay" );
    {
    /** src/mpid/common/sock/poll/sock_immed.i */
    int i1 = 1;
    char s2[] = "string2";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**sock|poll|nodelay", "**sock|poll|nodelay %d %s", i1, s2 );
    ChkMsg( err, MPI_ERR_OTHER, "**sock|poll|nodelay %d %s" );
    }
    /** src/mpid/common/sock/poll/sock_immed.i */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**sock|sockalloc", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**sock|sockalloc" );
    /** src/mpid/common/sock/poll/sock_immed.i */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**sock|connclosed", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**sock|connclosed" );
    {
    /** src/mpid/common/sock/poll/sock_immed.i */
    int i1 = 1;
    int i2 = 2;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**sock|connclosed", "**sock|connclosed %d %d", i1, i2 );
    ChkMsg( err, MPI_ERR_OTHER, "**sock|connclosed %d %d" );
    }
    /** src/mpid/common/sock/poll/sock_misc.i */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**sock|badhdmax", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**sock|badhdmax" );
    /** src/mpid/common/sock/poll/sock_misc.i */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**sock|badhdlen", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**sock|badhdlen" );
    /** src/mpid/common/sock/poll/sock_misc.i */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**sock|badhdbuf", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**sock|badhdbuf" );
    /** src/mpid/common/sock/poll/sock_misc.i */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**sock|oserror", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**sock|oserror" );
    {
    /** src/mpid/common/sock/poll/sock_misc.i */
    int i1 = 1;
    char s2[] = "string2";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**sock|oserror", "**sock|poll|oserror %d %s", i1, s2 );
    ChkMsg( err, MPI_ERR_OTHER, "**sock|poll|oserror %d %s" );
    }
    /** src/mpid/common/sock/poll/sock_misc.i */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**sock|badsock", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**sock|badsock" );
    /** src/mpid/common/sock/poll/sock_post.i */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**sock|poll|socket", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**sock|poll|socket" );
    {
    /** src/mpid/common/sock/poll/sock_post.i */
    int i1 = 1;
    char s2[] = "string2";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**sock|poll|socket", "**sock|poll|socket %d %s", i1, s2 );
    ChkMsg( err, MPI_ERR_OTHER, "**sock|poll|socket %d %s" );
    }
    /** src/mpid/common/sock/poll/sock_post.i */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**sock|connrefused", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**sock|connrefused" );
    {
    /** src/mpid/common/sock/poll/sock_post.i */
    int i1 = 1;
    int i2 = 2;
    char s3[] = "string3";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**sock|connrefused", "**sock|poll|connrefused %d %d %s", i1, i2, s3 );
    ChkMsg( err, MPI_ERR_OTHER, "**sock|poll|connrefused %d %d %s" );
    }
    {
    /** src/mpid/common/sock/poll/sock_post.i */
    int i1 = 1;
    int i2 = 2;
    int i3 = 3;
    char s4[] = "string4";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**sock|oserror", "**sock|poll|oserror %d %d %d %s", i1, i2, i3, s4 );
    ChkMsg( err, MPI_ERR_OTHER, "**sock|poll|oserror %d %d %d %s" );
    }
    /** src/mpid/common/sock/poll/sock_post.i */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**sock|badport", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**sock|badport" );
    {
    /** src/mpid/common/sock/poll/sock_post.i */
    int i1 = 1;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**sock|badport", "**sock|badport %d", i1 );
    ChkMsg( err, MPI_ERR_OTHER, "**sock|badport %d" );
    }
    /** src/mpid/common/sock/poll/sock_post.i */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**sock|poll|reuseaddr", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**sock|poll|reuseaddr" );
    {
    /** src/mpid/common/sock/poll/sock_post.i */
    int i1 = 1;
    char s2[] = "string2";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**sock|poll|reuseaddr", "**sock|poll|reuseaddr %d %s", i1, s2 );
    ChkMsg( err, MPI_ERR_OTHER, "**sock|poll|reuseaddr %d %s" );
    }
    /** src/mpid/common/sock/poll/sock_post.i */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**sock|poll|listen", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**sock|poll|listen" );
    {
    /** src/mpid/common/sock/poll/sock_post.i */
    int i1 = 1;
    char s2[] = "string2";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**sock|poll|listen", "**sock|poll|listen %d %s", i1, s2 );
    ChkMsg( err, MPI_ERR_OTHER, "**sock|poll|listen %d %s" );
    }
    /** src/mpid/common/sock/poll/sock_post.i */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**sock|getport", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**sock|getport" );
    {
    /** src/mpid/common/sock/poll/sock_post.i */
    int i1 = 1;
    char s2[] = "string2";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**sock|getport", "**sock|poll|getport %d %s", i1, s2 );
    ChkMsg( err, MPI_ERR_OTHER, "**sock|poll|getport %d %s" );
    }
    /** src/mpid/common/sock/poll/sock_post.i */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**sock|badlen", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**sock|badlen" );
    {
    /** src/mpid/common/sock/poll/sock_post.i */
    int i1 = 1;
    int i2 = 2;
    int i3 = 3;
    int i4 = 4;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**sock|badlen", "**sock|badlen %d %d %d %d", i1, i2, i3, i4 );
    ChkMsg( err, MPI_ERR_OTHER, "**sock|badlen %d %d %d %d" );
    }
    /** src/mpid/common/sock/poll/sock_post.i */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**sock|badiovn", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**sock|badiovn" );
    {
    /** src/mpid/common/sock/poll/sock_post.i */
    int i1 = 1;
    int i2 = 2;
    int i3 = 3;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**sock|badiovn", "**sock|badiovn %d %d %d", i1, i2, i3 );
    ChkMsg( err, MPI_ERR_OTHER, "**sock|badiovn %d %d %d" );
    }
    /** src/mpid/common/sock/poll/sock_post.i */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**sock|closing_already", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**sock|closing_already" );
    {
    /** src/mpid/common/sock/poll/sock_post.i */
    int i1 = 1;
    int i2 = 2;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**sock|closing_already", "**sock|closing_already %d %d", i1, i2 );
    ChkMsg( err, MPI_ERR_OTHER, "**sock|closing_already %d %d" );
    }
    /** src/mpid/common/sock/poll/sock_post.i */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**sock|close_cancel", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**sock|close_cancel" );
    {
    /** src/mpid/common/sock/poll/sock_post.i */
    int i1 = 1;
    int i2 = 2;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**sock|close_cancel", "**sock|close_cancel %d %d", i1, i2 );
    ChkMsg( err, MPI_ERR_OTHER, "**sock|close_cancel %d %d" );
    }
    /** src/mpid/common/sock/poll/sock_set.i */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**sock|setalloc", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**sock|setalloc" );
    /** src/mpid/common/sock/poll/sock_set.i */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**sock|poll|pipe", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**sock|poll|pipe" );
    {
    /** src/mpid/common/sock/poll/sock_set.i */
    int i1 = 1;
    char s2[] = "string2";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**sock|poll|pipe", "**sock|poll|pipe %d %s", i1, s2 );
    ChkMsg( err, MPI_ERR_OTHER, "**sock|poll|pipe %d %s" );
    }
    /** src/mpid/common/sock/poll/sock_set.i */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**sock|poll|pipenonblock", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**sock|poll|pipenonblock" );
    {
    /** src/mpid/common/sock/poll/sock_set.i */
    int i1 = 1;
    char s2[] = "string2";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**sock|poll|pipenonblock", "**sock|poll|pipenonblock %d %s", i1, s2 );
    ChkMsg( err, MPI_ERR_OTHER, "**sock|poll|pipenonblock %d %s" );
    }
    {
    /** src/mpid/common/sock/poll/sock_wait.i */
    int i1 = 1;
    int i2 = 2;
    int i3 = 3;
    int i4 = 4;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**sock|badhandle", "**sock|poll|badhandle %d %d %d %d", i1, i2, i3, i4 );
    ChkMsg( err, MPI_ERR_OTHER, "**sock|poll|badhandle %d %d %d %d" );
    }
    /** src/mpid/common/sock/poll/sock_wait.i */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**sock|poll|unhandledstate", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**sock|poll|unhandledstate" );
    {
    /** src/mpid/common/sock/poll/sock_wait.i */
    int i1 = 1;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**sock|poll|unhandledstate", "**sock|poll|unhandledstate %d", i1 );
    ChkMsg( err, MPI_ERR_OTHER, "**sock|poll|unhandledstate %d" );
    }
    /** src/mpid/common/sock/poll/sock_wait.i */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**sock|poll|unhandledtype", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**sock|poll|unhandledtype" );
    {
    /** src/mpid/common/sock/poll/sock_wait.i */
    int i1 = 1;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**sock|poll|unhandledtype", "**sock|poll|unhandledtype %d", i1 );
    ChkMsg( err, MPI_ERR_OTHER, "**sock|poll|unhandledtype %d" );
    }
    /** src/mpid/common/sock/poll/sock_wait.i */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**sock|connfailed", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**sock|connfailed" );
    {
    /** src/mpid/common/sock/poll/sock_wait.i */
    int i1 = 1;
    int i2 = 2;
    int i3 = 3;
    char s4[] = "string4";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**sock|connfailed", "**sock|poll|connfailed %d %d %d %s", i1, i2, i3, s4 );
    ChkMsg( err, MPI_ERR_OTHER, "**sock|poll|connfailed %d %d %d %s" );
    }
    /** src/mpid/common/sock/poll/socki_util.i */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**sock|poll|eqfail", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**sock|poll|eqfail" );
    {
    /** src/mpid/common/sock/poll/socki_util.i */
    int i1 = 1;
    int i2 = 2;
    int i3 = 3;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**sock|poll|eqfail", "**sock|poll|eqfail %d %d %d", i1, i2, i3 );
    ChkMsg( err, MPI_ERR_OTHER, "**sock|poll|eqfail %d %d %d" );
    }
    {
    /** src/mpid/common/sock/poll/socki_util.i */
    char s1[] = "string1";
    int i2 = 2;
    int i3 = 3;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**sock|osnomem", "**sock|osnomem %s %d %d", s1, i2, i3 );
    ChkMsg( err, MPI_ERR_OTHER, "**sock|osnomem %s %d %d" );
    }
    {
    /** src/mpid/common/sock/poll/socki_util.i */
    char s1[] = "string1";
    int i2 = 2;
    int i3 = 3;
    int i4 = 4;
    char s5[] = "string5";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**sock|oserror", "**sock|poll|oserror %s %d %d %d %s", s1, i2, i3, i4, s5 );
    ChkMsg( err, MPI_ERR_OTHER, "**sock|poll|oserror %s %d %d %d %s" );
    }
    /** src/mpid/common/sock/poll/socki_util.i */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**sock|uninit", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**sock|uninit" );
    /** src/mpid/common/sock/poll/socki_util.i */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**sock|notconnected", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**sock|notconnected" );
    {
    /** src/mpid/common/sock/poll/socki_util.i */
    int i1 = 1;
    int i2 = 2;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**sock|notconnected", "**sock|notconnected %d %d", i1, i2 );
    ChkMsg( err, MPI_ERR_OTHER, "**sock|notconnected %d %d" );
    }
    /** src/mpid/common/sock/poll/socki_util.i */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**sock|closing", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**sock|closing" );
    {
    /** src/mpid/common/sock/poll/socki_util.i */
    int i1 = 1;
    int i2 = 2;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**sock|closing", "**sock|closing %d %d", i1, i2 );
    ChkMsg( err, MPI_ERR_OTHER, "**sock|closing %d %d" );
    }
    /** src/mpid/common/sock/poll/socki_util.i */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**sock|listener_read", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**sock|listener_read" );
    {
    /** src/mpid/common/sock/poll/socki_util.i */
    int i1 = 1;
    int i2 = 2;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**sock|listener_read", "**sock|listener_read %d %d", i1, i2 );
    ChkMsg( err, MPI_ERR_OTHER, "**sock|listener_read %d %d" );
    }
    /** src/mpid/common/sock/poll/socki_util.i */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**sock|listener_write", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**sock|listener_write" );
    {
    /** src/mpid/common/sock/poll/socki_util.i */
    int i1 = 1;
    int i2 = 2;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**sock|listener_write", "**sock|listener_write %d %d", i1, i2 );
    ChkMsg( err, MPI_ERR_OTHER, "**sock|listener_write %d %d" );
    }
    /** src/mpid/common/sock/poll/socki_util.i */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**sock|reads", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**sock|reads" );
    {
    /** src/mpid/common/sock/poll/socki_util.i */
    int i1 = 1;
    int i2 = 2;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**sock|reads", "**sock|reads %d %d", i1, i2 );
    ChkMsg( err, MPI_ERR_OTHER, "**sock|reads %d %d" );
    }
    /** src/mpid/common/sock/poll/socki_util.i */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**sock|writes", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**sock|writes" );
    {
    /** src/mpid/common/sock/poll/socki_util.i */
    int i1 = 1;
    int i2 = 2;
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**sock|writes", "**sock|writes %d %d", i1, i2 );
    ChkMsg( err, MPI_ERR_OTHER, "**sock|writes %d %d" );
    }
    {
    /** src/mpid/common/sock/poll/socki_util.i */
    int i1 = 1;
    int i2 = 2;
    int i3 = 3;
    char s4[] = "string4";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**sock|osnomem", "**sock|poll|osnomem %d %d %d %s", i1, i2, i3, s4 );
    ChkMsg( err, MPI_ERR_OTHER, "**sock|poll|osnomem %d %d %d %s" );
    }
    /** src/mpid/common/sock/poll/socki_util.i */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**sock|badbuf", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**sock|badbuf" );
    {
    /** src/mpid/common/sock/poll/socki_util.i */
    int i1 = 1;
    int i2 = 2;
    int i3 = 3;
    char s4[] = "string4";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**sock|badbuf", "**sock|poll|badbuf %d %d %d %s", i1, i2, i3, s4 );
    ChkMsg( err, MPI_ERR_OTHER, "**sock|poll|badbuf %d %d %d %s" );
    }
    {
    /** src/mpid/common/sock/poll/socki_util.i */
    int i1 = 1;
    int i2 = 2;
    int i3 = 3;
    char s4[] = "string4";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**sock|connclosed", "**sock|poll|connclosed %d %d %d %s", i1, i2, i3, s4 );
    ChkMsg( err, MPI_ERR_OTHER, "**sock|poll|connclosed %d %d %d %s" );
    }
    /** src/mpid/common/sock/poll/socki_util.i */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**sock|poll|eqmalloc", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**sock|poll|eqmalloc" );
    /** src/mpid/common/sock/poll/socki_util.i */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**sock|poll|setsndbufsz", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**sock|poll|setsndbufsz" );
    {
    /** src/mpid/common/sock/poll/socki_util.i */
    int i1 = 1;
    int i2 = 2;
    char s3[] = "string3";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**sock|poll|setsndbufsz", "**sock|poll|setsndbufsz %d %d %s", i1, i2, s3 );
    ChkMsg( err, MPI_ERR_OTHER, "**sock|poll|setsndbufsz %d %d %s" );
    }
    /** src/mpid/common/sock/poll/socki_util.i */
    err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**sock|poll|setrcvbufsz", 0);
    ChkMsg( err, MPI_ERR_OTHER, "**sock|poll|setrcvbufsz" );
    {
    /** src/mpid/common/sock/poll/socki_util.i */
    int i1 = 1;
    int i2 = 2;
    char s3[] = "string3";
     err = MPIR_Err_create_code(MPI_SUCCESS, MPIR_ERR_RECOVERABLE, "errcode::main", __LINE__, MPI_ERR_OTHER, "**sock|poll|setrcvbufsz", "**sock|poll|setrcvbufsz %d %d %s", i1, i2, s3 );
    ChkMsg( err, MPI_ERR_OTHER, "**sock|poll|setrcvbufsz %d %d %s" );
    }
    MPI_Finalize();
    return 0;
}

}