#include <stdio.h>
#include <math.h>
int main(){
    float p,r,t,amt;
    printf("Enter principal: ");
    scanf("%f",&p);
    printf("Enter rate: ");
    scanf("%f",&r);
    printf("Enter time: ");
    scanf("%f",&t);
    amt = p * pow(1 + r/100, t);
    printf("Amount is %.1f",amt);
    return 0;
}



