/* { dg-do compile } */
/* { dg-options "-mbuiltin-trap-impl=break" } */

int dummy;

/* { dg-error "unrecognized strategy for '-mbuiltin-trap-impl': 'break'" "" { target { "loongarch*-*-*" } } 0 } */
/* { dg-message "note: valid values are 'break-CODE' \\(CODE between 0 and 32767, inclusive\\) and 'amswap.w'" "" { target { "loongarch*-*-*" } } 0 } */
