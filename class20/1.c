#include <stdio.h>

int main(){
    int x;
    int s=0;
    int rev=0;
    scanf("%d",&x);

    int v=x;
    while(v>0){
        x=v%10;  
        rev=rev*10+x;
        s+=x;
        v=v/10;
    }
    printf("sum is %d and rev is %d",s,rev);
    return 0;
}