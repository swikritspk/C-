//WAP to scan a string and find the total number of characters in it without using string handling functions also reverse the given string without using strrev.

#include <stdio.h>

int main() {
    char str[100];   // buffer for input string
    int length = 0, i;

    // Input string
    printf("Enter a string: ");
    scanf("%[^\n]", str);   // reads input including spaces until newline

    // Count characters manually (without strlen)
    while(str[length] != '\0') {
        length++;
    }

    printf("\nTotal number of characters = %d\n", length);

    // Reverse string manually (without strrev)
    printf("Reversed string = ");
    for(i = length - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
        return 0;
}
