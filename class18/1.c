#include <stdio.h>
#include <conio.h>
int main(){
    struct student{
        int roll_no;
        char name [80];
        int fees;
        char DOB[80];
    };
    struct student stud[50];
    int n,i;
    clrscr();
    printf("Enter the number of students: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("\n Enter the roll number: ");
        scanf("%d",&stud[i].roll_no);
        printf("Enter the name: ");
        gets(stud[i].name);
        printf("\n Enter the fees: ");
        scanf("%d",&stud[i].fees);
        printf("\n Enter the DOB: ");
        gets(stud[i].DOB);

    }
    for(i=0;i<n;i++){
        printf("\n ********DETAILS OF STUDENT %d********",i+1);
        printf("\n Roll number: %d",stud[i].roll_no);
        printf("\n Name: %s",stud[i].name);
        printf("\n Fees: %d",stud[i].fees);
        printf("\n DOB: %s",stud[i].DOB);
    }
}