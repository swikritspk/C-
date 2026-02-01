//write a program to find the sum of the series x+x^2+x^3+....+x^n using a user-defined function
#include <stdio.h>

float seriesSum(int x, int n);   // function declaration

int main() {
    int x, n;
    float sum;

    printf("Enter value of x: ");
    scanf("%d", &x);

    printf("Enter value of n: ");
    scanf("%d", &n);

    sum = seriesSum(x, n);   // function calling

    printf("Sum of the series = %.2f", sum);

    return 0;
}

float seriesSum(int x, int n) {   // function definition
    int i;
    float sum = 0, term = x;

    for (i = 1; i <= n; i++) {
        sum = sum + term;
        term = term * x;
    }

    return sum;   // returning the sum
}
