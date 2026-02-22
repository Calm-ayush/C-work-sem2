//wap to check if a matrix is symmetric
#include <stdio.h>
int main(){
    int r,c;
    int f=0;
    scanf("%d %d",&r,&c);
    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    if(r != c) {
        printf("not symmetric");
        return 0;
    }

    for(int i = 0; i < r; i++) {
        for(int j = i + 1; j < c; j++) {
            if(arr[i][j] != arr[j][i]) {
                printf("not symmetric");
                return 0;
            }
        }
    }

    printf("symmetric");
    return 0;
}