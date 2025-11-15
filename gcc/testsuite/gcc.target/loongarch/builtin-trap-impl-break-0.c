/* { dg-do compile } */
/* { dg-options "-O2 -w -fisolate-erroneous-paths-dereference -mbuiltin-trap-impl=break-0" } */
/* { dg-final { scan-assembler "break\\t0" } } */

#define BUILTIN_TRAP_IMPL_TEST
#include "builtin-trap-impl-test.c"
