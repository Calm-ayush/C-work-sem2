#include<stdio.h>
int greater(int *a,int *b,int *c,int *large);
int main(){
    int num1, num2, num3,large;
    printf("\n Enter the first number: ");
    scanf("%d,&num2");
    printf("\n Enter the second number: ");
    scanf("%d",&num2);
    printf("\n Enter the third number: ");
    scanf("%d",&num3);
    greater(&num1,&num2,&num3,&large);
    return 0;
}