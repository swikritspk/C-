#include <stdio.h>
int sum(int n);

int main()
{
    int n, result;

    printf("Enter a natural number: ");
    scanf("%d", &n);

    result = sum(n);

    printf("Sum of first %d natural numbers = %d", n, result);

    return 0;
}
int sum(int n)
{
    if(n == 0)
        return 0;
    else
        return n + sum(n - 1);
}
