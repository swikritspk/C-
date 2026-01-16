//WAP to copy the contents of one string variable to another variable without using strcmp functions//
#include <stdio.h>

int main() {
    char str1[100], str2[100];   // two string arrays
    int i;

    // Input original string
    printf("Enter a string: ");
    scanf("%[^\n]", str1);   // read input including spaces until newline

    // Manually copy str1 into str2
    for(i = 0; str1[i] != '\0'; i++) {
        str2[i] = str1[i];   // copy each character one by one
    }
//    str2[i] = '\0';   // add null terminator at the end

    // Output copied string
    printf("\nOriginal string: %s", str1);
    printf("\nCopied string:   %s\n", str2);

    return 0;
}
