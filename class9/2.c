//Wap to swap the largest and smalles number in an array
#include <stdio.h>

int main() {
    int arr[] = {12, 45, 7, 89, 23, 5, 67};
    int n = 7;  
    int i, minIndex = 0, maxIndex = 0, temp;

   
    for(i = 1; i < n; i++) {
        if(arr[i] < arr[minIndex]) {
            minIndex = i;
        }
        if(arr[i] > arr[maxIndex]) {
            maxIndex = i;
        }
    }

    temp = arr[minIndex];
    arr[minIndex] = arr[maxIndex];
    arr[maxIndex] = temp;

    
    printf("Array after swapping smallest and largest:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}