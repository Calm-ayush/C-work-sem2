#include <stdio.h>
char *day_of_week(int day);
int main(){
    int day_num;
    char *day;
    printf("\n Enter the day from 1 to 7: ");
    scanf("%d",&day_num);
    day = day_of_week(day_num);
    if(day)
    
        printf("%s", day);

    else 
        printf("\n Invalid Day");

}
char *day_of_week(int day){

char *week_day[7] = {"SUNDAY","MONDAY","TUESDAY","WEDNESDAY","THURSDAY","FRIDAY","SATURDAY"};
    if(day>=1 || day <=7)
        return week_day[day-1];
    else 
        return NULL;
}