#include <stdio.h>
#include <string.h>
int main() {
    char str1[20]="c";
    char str2[]= "programming";
    strcat(str1,str2);
    printf("%s",str1);
    char str3[20];
    strcpy(str3,str1);
    printf("copied:%s\n",str3);
    printf("compare: %d",strcmp(str1,str3));
     return 0;
}