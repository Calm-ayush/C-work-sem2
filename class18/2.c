#include <stdio.h>

typedef struct time {
    int hours;
    int minutes;
    int seconds;
} Time;

Time addTime(Time t1, Time t2) {
    Time result;
    result.seconds = t1.seconds + t2.seconds;
    result.minutes = t1.minutes + t2.minutes + result.seconds / 60;
    result.seconds %= 60;
    result.hours = t1.hours + t2.hours + result.minutes / 60;
    result.minutes %= 60;
    return result;
}

int main() {
    Time t1, t2, sum;

    printf("Enter first time (hh mm ss): ");
    scanf("%d %d %d", &t1.hours, &t1.minutes, &t1.seconds);

    printf("Enter second time (hh mm ss): ");
    scanf("%d %d %d", &t2.hours, &t2.minutes, &t2.seconds);

    sum = addTime(t1, t2);

    printf("Sum of times = %02d:%02d:%02d\n", sum.hours, sum.minutes, sum.seconds);

    return 0;
}
