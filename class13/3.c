#include <stdio.h>
int main(){
    int num, *pnum;
    pnum = &num;
    *pnum = 10;
    printf("\n *pnum = %d",*pnum);
    printf("\n num = %d",num);
    *pnum = *pnum +1;
    //increments the value of num 
    printf("\nAfter increment *pnum = %d",*pnum);
    printf("\nAfter increment num = %d",num);
    return 0;

}