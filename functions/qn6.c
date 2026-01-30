// Write a program to scan the name of 10 persons and sort the name in alphabetical order and display the sorted details in alphabetical order
#include <stdio.h>
#include <string.h>
#include <conio.h>

int main() {
    char names[10][50], temp[50];
    int i, j;

    printf("Enter names of 10 persons:\n");
    for (i = 0; i < 10; i++) {
        scanf("%s", names[i]);
    }

    for (i = 0; i < 9; i++) {
        for (j = i + 1; j < 10; j++) {
            if (strcmp(names[i], names[j]) > 0) {
                strcpy(temp, names[i]);
                strcpy(names[i], names[j]);
                strcpy(names[j], temp);
            }
        }
    }

    printf("\nNames in alphabetical order:\n");
    for (i = 0; i < 10; i++) {
        printf("%s\n", names[i]);
    }

    getch();
    return 0;
}
