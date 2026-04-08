#include <stdio.h>
#include <conio.h>

struct student {
    int roll_no;
    char name[80];
    float fees;
    char DOB[20];
};

int main() {
    struct student studi;



    printf("\nEnter the roll number: ");
    scanf("%d", &studi.roll_no);

    printf("Enter the name: ");
    scanf("%s", studi.name);

    printf("Enter the fees: ");
    scanf("%f", &studi.fees);

    printf("Enter DOB: ");
    scanf("%s", studi.DOB);

    printf("\n--- Student Details ---\n");
    printf("Roll No: %d\n", studi.roll_no);
    printf("Name: %s\n", studi.name);
    printf("Fees: %.2f\n", studi.fees);
    printf("DOB: %s\n", studi.DOB);

    getch();
    return 0;
}