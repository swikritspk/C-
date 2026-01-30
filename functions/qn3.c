//Write a program to check with a user input string is palindrome or not
#include <stdio.h>
#include <string.h>
#include <conio.h>

int main() {
    char str[100], rev[100];
    printf("Enter a string: ");
    scanf("%s", str);
    strcpy(rev, str);
    strrev(rev);
    if(strcmp(str, rev) == 0)
        printf("The string \"%s\" is a palindrome.\n", str);
    else
        printf("The string \"%s\" is not a palindrome.\n", str);
    getch();
    return 0;
}
