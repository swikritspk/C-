//Write a program to scan a string and sort the characters of the string in alphabetical order and display it
#include <stdio.h>
#include <string.h>
#include <conio.h>

int main() {
    char str[100], temp;
    int i, j, n;

    printf("Enter a string: ");
    scanf("%s", str);

    n = strlen(str);

    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (str[i] > str[j]) {
                temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }

    printf("Sorted string: %s", str);

    getch();
    return 0;
}
