#include <stdio.h>

int main() {
    int n, o, r = 0, re;
    printf("Enter a number: ");
    scanf("%d", &n);
    o = n;
    while (n != 0) {
        re = n % 10;
        r = r * 10 + re;
        n = n / 10;
    }
    if (o == r)
        printf("The number is a palindrome.\n");
    else
        printf("The number is not a palindrome.\n");
    return 0;
}
