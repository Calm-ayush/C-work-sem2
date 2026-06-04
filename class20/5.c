#include <stdio.h>
#include <stdlib.h>

int abc(const void *c,const void *d){
    return(*(int*)c-*(int*)d);
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i =0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    qsort(arr,n,sizeof(int),abc);

    printf("%d",arr[1]);
}