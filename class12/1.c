#include<stdio.h>
int Fact(int);
int main(){
    int num, factorial;
    printf("\n Enter the no. ");
    scanf("%d", &num);
    factorial = Fact(num);
    printf("\n Factorial of %d = %d", num,
        factorial);
    return 0;
}
int Fact(int n){
    if (n==1)
        return 1;
    else
        return (n*Fact(n-1));
}