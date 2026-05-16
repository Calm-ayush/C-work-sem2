#include <stdio.h>

int reversenum(int x){
    static int y=0;
    if (x==0)
    return y;
    y=y*10+(x%10);
    return reversenum(x/10);
}

int main(){
    int x=1234;
    printf("%d",reversenum(x));
    return 0;
}