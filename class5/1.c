#include <stdio.h>
int main(){
    int a=10;
    int b=20;
    int c=0;
    c=a;
    a=b;
    b=c;
    printf("%d\n", a);
    printf("%d\n", b);
    return 0;
}