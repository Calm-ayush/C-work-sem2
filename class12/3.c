#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

double findMedianSortedArrays(int* nums1, int n1, int* nums2, int n2) {
    int n = n1 + n2;
    int *num3 = (int*)malloc(n * sizeof(int));
    for (int i = 0; i < n1; i++) {
        num3[i] = nums1[i];
    }
    for (int i = 0; i < n2; i++) {
        num3[n1 + i] = nums2[i];
    }
    qsort(num3, n, sizeof(int), compare);
    double median;
    if (n % 2 == 0) {
        median = (num3[n/2 - 1] + num3[n/2]) / 2.0;
    } else {
        median = num3[n/2];
    }
    free(num3);
    return median;
}

int main() {
    int nums1[] = {1, 3};
    int nums2[] = {2};
    int n1 = sizeof(nums1) / sizeof(nums1[0]);
    int n2 = sizeof(nums2) / sizeof(nums2[0]);
    double result = findMedianSortedArrays(nums1, n1, nums2, n2);
    printf("%f\n", result);
    return 0;
}