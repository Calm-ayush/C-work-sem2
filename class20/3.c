#include <stdio.h>
int main(){
    char hexa[100];
    scanf("%s",hexa);

    int d=0,i=0,temp;

    while(hexa[i] !='\0'){
        char digit=hexa[i];

        if(digit>='0' && digit <='9'){
            temp=digit-'0';
        }
        else if(digit>='A' && digit <='F'){
            temp=digit-'A'+10;
        }else{
            printf("invalid\n");
            return 1;
        }

        d=d*16+temp;
        i++;
    }
    printf("%d\n",d);
    return 0;
}