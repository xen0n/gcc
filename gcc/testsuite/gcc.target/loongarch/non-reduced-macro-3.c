/* { dg-do preprocess } */
/* { dg-options "-march=loongarch64" } */

/* LA64 does not have any reduced variant.  */
#ifndef __loongarch_non_reduced
#error __loongarch_non_reduced should be defined here
#endif
