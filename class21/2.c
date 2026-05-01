//wap recursive function to check if given string is palindrome ignoring case and non alphabetic char
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int pal(char arr[],int a, int b){
    if(a>=b){
        return 1;
    }
    if(tolower(arr[a])!=tolower(arr[b])){
        return 0;
    }
    return pal(arr,a+1,b-1);
}
int main(){
    char s[100];
    scanf("%s",s);

    int len =strlen(s);
    if(pal(s,0,len-1)){
        printf("palindrome");
    }
    else{
        printf("no");
    }
    return 0;
}