#include <stdio.h>
#include <math.h>
//1
int main (){
    float a,cal=0;
    printf("Enter Number of Terms\n");
    scanf("%f", &a);
    for(int i = 1; i<=a; i++){
        float dev=1;
        for (int j = 1;j<=i;j++){
            dev=dev*j;
        }
        cal+= (pow(i,2))/(dev);
    }
    printf("%f", cal);
    return 0;
}