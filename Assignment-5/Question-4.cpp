#include <stdio.h>

struct Date {
    int day, month, year;
};

int compareDates(struct Date d1, struct Date d2) {
    if (d1.year == d2.year && d1.month == d2.month && d1.day == d2.day)
        return 1;
    else
        return 0;
}

int main() {
    struct Date date1, date2;

    printf("Enter first date (dd mm yyyy): ");
    scanf("%d %d %d", &date1.day, &date1.month, &date1.year);

    printf("Enter second date (dd mm yyyy): ");
    scanf("%d %d %d", &date2.day, &date2.month, &date2.year);

    if (compareDates(date1, date2))
        printf("Equal\n");
    else
        printf("Unequal\n");

    return 0;
}
