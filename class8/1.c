#include <stdio.h>
#include <math.h>
int main(){
    float a,b,c;
    printf("enter 2 numbers");
    scanf("%f %f %f",&a,&b,&c);
    float form= (pow(a,2)+pow(b,2))-(2*a*b)+(c/(a-b));
    printf("The equation is %.2f",form);
    return 0;
}