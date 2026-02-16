//wap to enter n number of digits.Form a no using these digits
#include <stdio.h>

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int n = 5;
    int number = 0;

    for (int i = 0; i < n; i++) {
        number = number * 10 + arr[i];  
    }

    printf("The formed number is %d\n", number);

    return 0;
}