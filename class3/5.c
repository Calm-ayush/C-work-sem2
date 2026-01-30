#include <stdio.h>
int main(){
    int ayush[5]={1,2,3,4,5};
    for (int i = 0; i < 5; i++) {
        printf("%d\n", ayush[5-i-1]);
    }
}