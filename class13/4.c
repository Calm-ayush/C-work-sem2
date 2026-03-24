#include <stdio.h>
int main(){
int num, *pnum1,*pnum2,
pnum1 = &num;
*pnum1 = 10;
pnum2 = pnum1;

printf ("\n'Value of num using all three variables (num, *pnum1, *pnum2) = *d *d %d", num, *pnum1, *pnum2);

printf("\n Address of num using all three variables (&num, pnum1, pnum2) = *x *x *x", num, pnum1, pnum2); return 0;
}