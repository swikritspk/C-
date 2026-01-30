//Write a program to find the HCF of user given numbers using function
#include <stdio.h>
#include <conio.h>
int hcf(int a,int b);
int main() {
    int num1, num2, result;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    result = hcf(num1, num2);

    printf("HCF of %d and %d is: %d", num1, num2, result);

    getch();
    return 0;
}

int hcf(int a, int b) {
    while (b != 0) {
        int temp = b;// this concept is also used in recursive functions
        b = a % b;
        a = temp;
    }
    return a;
}

