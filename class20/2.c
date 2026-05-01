#include <stdio.h>

int main(){
    int d;
    int octal=0;
    scanf("%d",&d);
    int digits[32];
    int temp =d;
    int i=0;

    while(temp>0){
        digits[i++]=temp%8;
        temp=temp/8;
    }

    printf("octal no is: ");
    for(int j=i-1;j>=0;j--){
        printf("%d",digits[j]);
    }

}