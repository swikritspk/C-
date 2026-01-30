//Write a program to scan two strings and add them and find the total number of characters in given string
#include <stdio.h>
#include <string.h>
#include<conio.h>
int main() {
    char str1[100], str2[100];
    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);
    strcat(str1, str2);
    printf("\nCombined string: %s\n", str1);
    printf("Length of combined string: %lu\n", strlen(str1));

    getch();
    return 0;
}
