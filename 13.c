#include <stdio.h>

int main() {
    int num, first, middle, last;
    printf("Enter a three-digit number: ");
    scanf("%d", &num);

    if (num < 100 || num > 999) {
        printf("Please enter a valid three-digit number.\n");
        return 1;
    }

    first = num / 100;             // Extract the first digit
    middle = (num / 10) % 10;      // Extract the middle digit
    last = num % 10;               // Extract the last digit

    if ((first + last) == 2 * middle) {
        printf("The sum of the first and last digits equals twice the middle digit.\n");
    } else {
        printf("The condition is not satisfied.\n");
    }

    return 0;
}
