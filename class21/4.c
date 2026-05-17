#include <stdio.h>

int main(){
    FILE *f1;
    char fn[500];
    scanf("%s",fn);

    f1=fopen(fn,"w");

    if(f1==NULL){
        printf("not available");
        return 1;
    }

    printf("file created sucessfully\n");
    fclose(f1);
}