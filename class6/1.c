//check if no is armstrong
#include <stdio.h>
int main(){
    int num;
    printf("enter no: ");
    scanf("%d" ,&num );

    int temp = num; 
    int temp2 = num ;
    int sum=0;
   
    int count=0;
    int digit=0;
    for(int i = 1 ; temp!=0; i++){
        digit = temp%10;
        temp = temp/10;
        
        count = count +1;
    }
    printf("%d\n" , count);
    if(count ==2){
        for(int i = 1 ; temp2!=0; i++){
        digit = temp2%10;
        temp2 = temp2/10;
        sum = sum + (digit*digit);
        }
    }
    else if(count ==3){
        for(int i = 1 ; temp2!=0; i++){
        digit = temp2%10;
        temp2 = temp2/10;
        sum = sum + (digit*digit*digit);
        }
    }
    if(sum == num){
        printf("the number is an armstrong number");
    }
    else{
        printf("the number is not an armstrong");
    }
    return 0;
}