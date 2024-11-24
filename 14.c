#include <stdio.h>

int main() {
    float temp, converted;
    int choice;

    printf("Temperature Conversion Menu:\n");
    printf("1. Convert Centigrade to Fahrenheit\n");
    printf("2. Convert Fahrenheit to Centigrade\n");
    printf("Enter your choice (1/2): ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Enter temperature in Centigrade: ");
        scanf("%f", &temp);
        converted = (temp * 9 / 5) + 32;
        printf("Temperature in Fahrenheit: %.2f°F\n", converted);
    } else if (choice == 2) {
        printf("Enter temperature in Fahrenheit: ");
        scanf("%f", &temp);
        converted = (temp - 32) * 5 / 9;
        printf("Temperature in Centigrade: %.2f°C\n", converted);
    } else {
        printf("Invalid choice. Please select 1 or 2.\n");
    }

    return 0;
}
