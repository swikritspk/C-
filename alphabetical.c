//WAP to scan the names of 10 country and sort the name of the country based on alphabetical order//
#include <stdio.h>
#include <string.h>

int main() {
    char country[10][50];   // Array to store 10 country names (max length 49 chars each)
    char temp[50];
    int i, j;

    // Input country names
    printf("Enter names of 10 countries:\n");
    for(i = 0; i < 10; i++) {
        printf("Country %d: ", i+1);
        scanf("%s", country[i]);   // Reads a single word (no spaces)
    }

    for(i = 0; i < 9; i++) {
        for(j = i+1; j < 10; j++) {
            if(strcmp(country[i], country[j]) > 0) {
                strcpy(temp, country[i]);
                strcpy(country[i], country[j]);
                strcpy(country[j], temp);
            }
        }
    }

    // Display sorted list
    printf("\nCountries in alphabetical order:\n");
    for(i = 0; i < 10; i++) {
        printf("%s\n", country[i]);
    }

    return 0;
}
