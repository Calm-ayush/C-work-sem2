#include <stdio.h>
int main(){
    int a[5]={3,5,99,1,6};
    int max1=a[0];
    for(int i=0;i<5;i++){
        if (a[i]>max1){
            max1=a[i];
        }
    }
    printf("max elt is %d",max1);
    return 0;
}