#include <stdio.h>

int main(){
    FILE *f1;
    char fname[500];
    scanf("%s",fname);

    f1=fopen(fname,"w");

    if(f1==NULL){
        printf("not available");
        return 1;
    }

    printf("file created sucessfully\n");
    fclose(f1);
}