#include <stdio.h>

void find_small(int *arr, int n, int *small, int *pos) {
    *small = *arr;   // initialize with first element
    *pos = 0;

    for (int i = 1; i < n; i++) {
        if (*(arr + i) < *small) {
            *small = *(arr + i);
            *pos = i;
        }
    }
}

int main() {
    int arr[] = {12, 5, 7, 3, 19, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int smallest, position;

    find_small(arr, n, &smallest, &position);

    printf("Smallest number: %d at position %d\n", smallest, position);
    return 0;
}
