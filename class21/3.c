// arrange in increasing order of age
// if age same then higher salary comes first

#include <stdio.h>

struct worker{
    char name[100];
    int age;
    int salary;
};

int main()
{
    int n;
    scanf("%d",&n);

    struct worker s[n],temp;

    for(int i=0;i<n;i++){
        scanf("%s",s[i].name);
        scanf("%d",&s[i].age);
        scanf("%d",&s[i].salary);
    }

for(int i=0;i<n;i++){
       for(int j=0;j<n;j++){
        if(s[i].age<s[j].age){
            temp=s[i];
            s[i]=s[j];
            s[j]=temp;
        }
        else if(s[i].age==s[j].age){
            if(s[i].salary>s[j].salary){
                temp=s[i];
                s[i]=s[j];
                s[j]=temp;
            }
        }
    } 
}

    for(int i=0;i<n;i++){
        printf("%s ",s[i].name);
        printf("%d ",s[i].age);
        printf("%d\n",s[i].salary);
    }

    return 0;
}