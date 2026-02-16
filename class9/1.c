#include <stdio.h>

int main() {
    int a[] = {12, 45, 7, 89, 23, 5, 67};
    int n = 7;   

    int min = a[0];
    int pos = 0;


    for (int i = 1; i < n; i++) {
        if (a[i] < min) {
            min = a[i];
            pos = i;
        }
    }


    printf("The smallest number is %d\n", min);
    printf("Index of smallest number: %d\n", pos);
    printf("Position of smallest number: %d\n", pos + 1);

    return 0;
}