#include <stdio.h>

struct Time {
    int hours;
    int minutes;
    int seconds;
};

struct Time addTime(struct Time t1, struct Time t2) {
    struct Time sum;
    sum.seconds = t1.seconds + t2.seconds;
    sum.minutes = t1.minutes + t2.minutes + sum.seconds / 60;
    sum.seconds %= 60;
    sum.hours = t1.hours + t2.hours + sum.minutes / 60;
    sum.minutes %= 60;
    return sum;
}

int main() {
    struct Time t1, t2, result;
    
    printf("Enter time 1 (hours minutes seconds): ");
    scanf("%d %d %d", &t1.hours, &t1.minutes, &t1.seconds);
    
    printf("Enter time 2 (hours minutes seconds): ");
    scanf("%d %d %d", &t2.hours, &t2.minutes, &t2.seconds);
    
    result = addTime(t1, t2);
    
    printf("Sum of times: %02d:%02d:%02d\n", result.hours, result.minutes, result.seconds);
    
    return 0;
}
