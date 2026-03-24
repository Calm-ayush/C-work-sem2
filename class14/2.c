#include <stdio.h>

void read(float *b, float *h) {
    printf("Enter base: ");
    scanf("%f", b);
    printf("Enter height: ");
    scanf("%f", h);
}

void calculate_area(float *b, float *h, float *a) {
    *a = 0.5 * (*b) * (*h);
}

int main() {
    float base, height, area;
    read(&base, &height);
    calculate_area(&base, &height, &area);
    printf("Area of triangle = %.2f\n", area);
    return 0;
}