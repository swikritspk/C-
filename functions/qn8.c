//Write a program to find this sub and print the terms of Fibonacci series using a user defined function
#include <stdio.h>
#include <conio.h>
void fibonacci(int n);
int main() {
    int terms;

    printf("Enter the number of terms: ");
    scanf("%d", &terms);

    fibonacci(terms);

    getch();
    return 0;
}

void fibonacci(int n) {
    int a = 0, b = 1, c, i;

    printf("Fibonacci series up to %d terms:\n", n);

    for (i = 1; i <= n; i++) {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }
}

