//wap to multiply to matrices
#include <stdio.h>
int main(){
    //initialization
    int r1,c1,r2,c2;
    scanf("%d %d",&r1,&c1);
    scanf("%d %d",&r2,&c2);
    int arr1[r1][c1];
    int arr2[r2][c2];
    int arr3[r1][c2];

    //matrix inputs
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            scanf("%d",&arr1[i][j]);
        }
    }

    for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            scanf("%d",&arr2[i][j]);
        }
    }

    //multiplication
    if(c1==r2){
        for(int i=0;i<r1;i++){
            for(int j=0;j<c2;j++){
                arr3[i][j]=0;
                for(int k=0;k<c1;k++){
                    arr3[i][j]+=arr1[i][k]*arr2[k][j];
                }
            }
        }
    //print
        for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            printf("%d ",arr3[i][j]);
        }
        printf("\n");
    }
    }
    else{
        printf("martrices cant be multiplied");
    }
    
    return 0;
    
}