#include <stdio.h>
int main() {
    int abc[5];
    for (int i = 0; i < 5; i++) {
        scanf("%d", &abc[i]);
    }
    for (int i = 0; i < 5; i++) {
        printf("%d ", abc[i]);
    }
    return 0;
}