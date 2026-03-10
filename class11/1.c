#include <stdio.h>
#include <conio.h>

int check_relation(int a, int b) {
    if(a > b)
        return 1;   // a is greater
    else if(a < b)
        return -1;  // a is smaller
    else
        return 0;   // equal
}

int main() {
    int a = 5, b = 3, res;
    clrscr();

    res = check_relation(a, b);

    if(res == 1)
        printf("%d is greater than %d\n", a, b);
    else if(res == -1)
        printf("%d is smaller than %d\n", a, b);
    else
        printf("%d is equal to %d\n", a, b);

    getch();
    return 0;
}