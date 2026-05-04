#include <stdio.h>
#include <math.h>

int main(){
    int L,n;
    scanf("%d",&L);
    scanf("%d",&n);
    int arm=0;
    int temp=n;

    while(temp>0){
        int digit=temp%10;
        arm+=pow(digit,L);
        temp=temp/10;
    }
    printf("%d\n",arm);
    if(n==arm)
    printf("true");
    else
    printf("false");
    return  0;
}