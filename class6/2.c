// valid triangle then check equil isosceles,scaler
#include <stdio.h>
int main(){
    int l;
    int b;
    int p;
    scanf("%d",&l);
    scanf("%d",&b);
    scanf("%d",&p);
    if (l+b>p && b+p>l && l+p>b){
        printf("triangle is valid");
         if (l == b && b == p) {
            printf("Equilateral triangle");
        }
        else if (l == b || b == p || l == p) {
            printf("Isosceles triangle");
        }
        else {
            printf("Scalene triangle");
        }
    }
    else{
        printf("triangle is invalid");
    }
    return 0;
}