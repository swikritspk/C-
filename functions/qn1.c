//Write a program to scan the name address and phone number of 10 user and display it
#include <stdio.h>
#include<conio.h>
int main() {
    char names[10][50];
    char addresses[10][100];
    char phones[10][20];
    int i;
    printf("Enter details of 10 persons:\n");
    for (i = 0; i < 10; i++) {
        printf("\nPerson %d:\n", i + 1);

        printf("Enter name: ");
        scanf(" %[^\n]", names[i]);

        printf("Enter address: ");
        scanf(" %[^\n]", addresses[i]);

        printf("Enter phone number: ");
        scanf(" %[^\n]", phones[i]);
    }
    printf("\n--- Displaying Information ---\n");
    for (i = 0; i < 10; i++) {
        printf("\nPerson %d:\n", i + 1);
        printf("Name: %s\n", names[i]);
        printf("Address: %s\n", addresses[i]);
        printf("Phone: %s\n", phones[i]);
    }
getch();
    return 0;
}


