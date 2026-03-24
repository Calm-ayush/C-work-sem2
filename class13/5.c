#include <stdio.h>
int main(){
    int a =3, b=5;
    int *pnum;
    pnum = &a;
    printf("\n a = %d", *pnum);
    pnum = &b;
    printf("\n b = %d", *pnum);
    return 0;
}