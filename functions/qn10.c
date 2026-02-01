#include <stdio.h>

int isPrime(int n);   // function declaration

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);
printf("****%d***\n",num/2);
    if (isPrime(num))
        printf("%d is a prime number.", num);
    else
        printf("%d is not a prime number.", num);

    return 0;
}

int isPrime(int n) {   // function definition
    int i;

    if (n <= 1)
        return 0;

    for (i = 2; i <= n / 2; i++) {
        if (n % i == 0)
            return 0;
    }
    return 1;
}
