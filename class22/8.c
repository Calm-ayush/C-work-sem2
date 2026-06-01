//arange in decreasing order of marks
//if marks same smaller roll no comes first
#include <stdio.h>

struct student{
    char name[100];
    int roll;
    int marks;
};

int main()
{
    int n;
    scanf("%d",&n);

    struct student s[n],temp;

    for(int i=0;i<n;i++){
        scanf("%s",s[i].name);
        scanf("%d",&s[i].roll);
        scanf("%d",&s[i].marks);
    }

    for(int i=0;i<n;i++){
       for(int j=0;j<n;j++){
        if(s[i].marks>s[j].marks){
            temp=s[i];
            s[i]=s[j];
            s[j]=temp;
        }
        else if(s[i].marks==s[j].marks){
            if(s[i].roll<s[j].roll){
                temp=s[i];
                s[i]=s[j];
                s[j]=temp;
            }
        }
    } 
}
    for(int i=0;i<n;i++){
        printf("%s ",s[i].name);
        printf("%d ",s[i].roll);
        printf("%d\n",s[i].marks);
        printf("\n");
    }
    return 0;
}