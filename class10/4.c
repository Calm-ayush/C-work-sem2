// wap to calculate sumn of upper and lower trangles of a matrix
#include <stdio.h>
int main(){
    int m,n;
    int ls=0;
    int us=0;
    scanf("%d %d",&m,&n);
    int arr[m][n];

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    //lower
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(i>=j){
            ls+=arr[i][j];
        }
        }
    }
    //upper
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(i<=j){
            us+=arr[i][j];
        }
        }
    }

    printf("The sum of lower triangular matrix is %d",ls);
    printf("\nThe sum of upper triangular matrix is %d",us);
    return 0;
}