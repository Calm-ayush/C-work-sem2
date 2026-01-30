#include <stdio.h>
#include <string.h>
int main() {
    char a[]="hello";
    char b[]="World";
    strcat(a,b);
    printf("%s",a);
    return 0;
}