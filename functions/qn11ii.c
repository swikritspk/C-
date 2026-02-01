//1! + 2! + 3! + . . . + n!
#include <stdio.h>

long int sumOddFactorial(int n);

int main() {
    int n;
    long int sum;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    sum = sumOddFactorial(n);

    printf("Sum of the series = %ld", sum);

    return 0;
}

long int sumOddFactorial(int n) {
    int i, j;
    long int fact, sum = 0;

    for (i = 1; i <= n; i ++) {
        fact = 1;
        for (j = (2*i)-1; j <= i; j++) {
            fact = fact * j;
        }
        sum = sum + fact;
    }

    return sum;
}
