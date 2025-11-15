/* { dg-do compile } */
/* { dg-options "-O2 -w -fisolate-erroneous-paths-dereference -mbuiltin-trap-impl=amswap.w" } */
/* { dg-final { scan-assembler "amswap\\.w\\t\\\$r0,\\\$r1,\\\$r0" } } */

#define BUILTIN_TRAP_IMPL_TEST
#include "builtin-trap-impl-test.c"
