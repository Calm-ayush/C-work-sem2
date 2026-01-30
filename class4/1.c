#include <stdio.h>
int main() {
    char name[4];
    fgets(name, 4, stdin);
    printf("%s", name);
    return 0;
}