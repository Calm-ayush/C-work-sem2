#include <stdio.h>
int main(){
    int x,y;
    printf("Enter numbers");
    scanf("%d %d",&x,&y);
    if(x==y){
        printf("Equal");
    }
    else{
        printf("Not Equal");
    }
    return 0;
}