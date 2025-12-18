/* { dg-do preprocess } */
/* { dg-options "-march=la32rv1.0" } */

#ifdef __loongarch_non_reduced
#error __loongarch_non_reduced should not be defined here
#endif

#pragma GCC push_options
#pragma GCC target "arch=la32v1.0"

#ifndef __loongarch_non_reduced
#error __loongarch_non_reduced should be defined here
#endif

#pragma GCC pop_options

#ifdef __loongarch_non_reduced
#error __loongarch_non_reduced should not be defined here
#endif
