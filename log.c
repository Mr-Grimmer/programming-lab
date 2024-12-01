#include <stdio.h>
#include <math.h>

// Function to compute log(1 + x) using Taylor series
double logOnePlusX(double x) {
    double result = 0.0;
    int n;
    for (n = 1; n <= 10; n++) {
        double term = pow(-1, n + 1) * pow(x, n) / n;
        result += term;
    }
    return result;
}

int main() {
    double x;
    printf("Enter the value of x: ");
    scanf("%lf", &x);
    printf("log(1 + %.2f) = %.5f\n", x, logOnePlusX(x));
    return 0;
}
