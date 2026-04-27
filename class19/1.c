//q2 wap to read and display add and subtract 2 heights (given in feet and inches) using pointer.
#include <stdio.h>

void add(int x1, int x2,int y1,int y2,int *tf, int *ti){
    *tf=x1+y1;
    *ti= x2+y2;
    if(*ti>=12){
        *tf+=1;
        *ti=*ti%12;
    }
}
void subtract(int f1, int i1, int f2, int i2, int *rf, int *ri) {
    *rf = f1 - f2;
    *ri = i1 - i2;

    if (*ri < 0) {
        *rf -= 1;
        *ri += 12;
    }
}
int main()
{
    int feet1, inches1, feet2, inches2;
    int afeet,ainches;
    int sfeet,sinches;
    printf("Enter the first height (feet and inches): ");
    scanf("%d %d", &feet1, &inches1);
    printf("Enter the second height (feet and inches): ");
    scanf("%d %d", &feet2, &inches2);

    subtract(feet1,inches1,feet2,inches2,&sfeet,&sinches);
    add(feet1,inches1,feet2,inches2,&afeet,&ainches);

    printf("sum = %d feet %d inches",afeet,ainches);
    printf("diff = %d feet %d inches",sfeet,sinches);

    return 0;
}