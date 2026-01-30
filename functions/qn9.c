//Write a program check whether a user given number is armstrong or not using function.
#include <stdio.h>
#include <conio.h>
#include <math.h>

int isArmstrong(int num);

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (isArmstrong(number))
        printf("%d is an Armstrong number.", number);
    else
        printf("%d is not an Armstrong number.", number);

    getch();
    return 0;
}

int isArmstrong(int num) {
    int original = num, sum = 0, digits = 0, temp;

//    temp = num;
//    while (temp != 0) {
//        digits++;
//        temp /= 10;
   // }
   digits = (int)log10(num) + 1;

    temp = num;
    while (temp != 0) {
        int rem = temp % 10;
        sum += (int)pow(rem, digits);
        temp /= 10;
    }

    if (sum == original)
        return 1;
    else
        return 0;
}

