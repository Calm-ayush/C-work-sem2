#include <stdio.h>

int main(){
    int x;
    int s=0;
    int rev=0;
    scanf("%d",&x);

    int temp=x;
    while(temp>0){
        x=temp%10;  
        rev=rev*10+x;
        s+=x;
        temp=temp/10;
    }
    printf("sum is %d and rev is %d",s,rev);
    return 0;
}