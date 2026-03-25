#include <stdio.h>
int main(){
    int i,n;
    int arr[10],*parr = arr;
    printf("\n Enter the number of elements: ");
    scanf("%d",&n);
    printf("\n Enter the elements: ");
    for(i=0; i<n;i++){
        scanf("%d",parr+i);
    printf("\n The elements entered area: ");
    for(i=0;i<n;i++){
        printf("\t %d",*(parr+i));
        return 0;
    }

    }
}