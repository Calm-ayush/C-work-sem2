//Check whether a given string is palindrome or not
#include <stdio.h>
int main(){
    char str[100];
    int i, j, flag = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

  
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == '\n') {
            str[i] = '\0';
            break;
        }
    }


    for (i = 0, j = strlen(str) - 1; i < j; i++, j--) {
        if (str[i] != str[j]) {
            flag = 1;
            break;
        }
    }

    if (flag == 0) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}
