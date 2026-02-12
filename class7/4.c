#include <stdio.h>
int main(){
    int x,y,p,l;
    printf("Enter numbers");
    scanf("%d %d",&x,&y);
    if(x-y>0){
        p=x-y;
        printf("Profit of %d",p);
    }
    else{
        l=y-x;
        printf("Loss of %d",l);
    }
    return 0;
}