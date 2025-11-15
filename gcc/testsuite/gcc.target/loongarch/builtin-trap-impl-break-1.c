/* { dg-do compile } */
/* { dg-options "-O2 -w -fisolate-erroneous-paths-dereference -mbuiltin-trap-impl=break-1" } */
/* { dg-final { scan-assembler "break\\t1" } } */

#define BUILTIN_TRAP_IMPL_TEST
#include "builtin-trap-impl-test.c"
