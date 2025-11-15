/* { dg-do compile } */
/* { dg-options "-mbuiltin-trap-impl=break-32768" } */

int dummy;

/* { dg-error "code '32768' invalid for the 'break' instruction" "" { target { "loongarch*-*-*" } } 0 } */
/* { dg-message "note: code for the 'break' instruction must be an integer between 0 and 32767, inclusive" "" { target { "loongarch*-*-*" } } 0 } */
