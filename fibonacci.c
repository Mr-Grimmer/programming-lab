#include <stdio.h>
#include <math.h>

// Function to calculate n-th Fibonacci number using the formula
double fibonacciFormula(int n) {
    double sqrt5 = sqrt(5);
    double phi = (1 + sqrt5) / 2;
    double psi = (1 - sqrt5) / 2;
    return (pow(phi, n) - pow(psi, n)) / sqrt5;
}

// Function to calculate n-th Fibonacci number iteratively
int fibonacciIterative(int n) {
    int a = 0, b = 1, c;
    for (int i = 2; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    return n == 0 ? a : b;
}

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    double fibFormula = fibonacciFormula(n);
    int fibIterative = fibonacciIterative(n);

    printf("Fibonacci number using formula: %.0f\n", fibFormula);
    printf("Fibonacci number using iterative approach: %d\n", fibIterative);

    if ((int)fibFormula == fibIterative) {
        printf("Both methods yield the same result.\n");
    } else {
        printf("The methods yield different results.\n");
    }
    return 0;
}
