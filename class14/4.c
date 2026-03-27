#include <stdio.h>
#include <conio.h>
int main(){
    int ch, *pch  = &ch;
    clrcr();
    printf("\n Enter the character: ");
    scanf("%c",&ch);
    printf("\n The char entered is: %c", *pch);
    printf("\n ASCII value of the char is: %d", *pch);
    printf("\n The char is: %c",*pch);


}