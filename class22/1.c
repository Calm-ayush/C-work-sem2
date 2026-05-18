#include <stdio.h>

int main(){
    FILE *f1;
    f1 = fopen("test.txt","a");
    fputs("\nAbc",f1);
    fclose(f1);
}