//Write a program to find the length and reverse of a string without using strlen() and strrev()
#include <stdio.h>
#include <conio.h>

int main() {
    char str[100];
    int i, length = 0;

    printf("Enter a string: ");
//    scanf("%s", str);
fgets(str, sizeof(str),stdin);
    for (i = 0; str[i] != '\0'; i++) {
        length++;
    }

    printf("Length of the string: %d\n", length);

    printf("Reversed string: ");
    for (i = length - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }

    getch();
    return 0;
}
