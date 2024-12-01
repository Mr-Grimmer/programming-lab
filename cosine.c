#include <stdio.h>
#include <math.h>

// Function to compute cosine of x using Taylor series
double cosine(double x) {
    double result = 0.0;
    int n;
    for (n = 0; n < 10; n++) {
        double term = pow(-1, n) * pow(x, 2 * n) / factorial(2 * n);
        result += term;
    }
    return result;
}

int main() {
    double x;
    printf("Enter the value of x (in radians): ");
    scanf("%lf", &x);
    printf("cos(%lf) = %.5f\n", x, cosine(x));
    return 0;
}
