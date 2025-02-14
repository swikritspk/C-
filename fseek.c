#include <stdio.h>

int main() {
    FILE *fptr;
    char str[40];

    fptr = fopen("abc.txt", "w+"); // Use "w+" for text mode
    printf("Enter name: ");
    scanf("%39s", str); // Limit input to avoid buffer overflow
    fprintf(fptr, "%s", str);
    
    fseek(fptr, -2, 1); // Use SEEK_CUR for clarity
    printf("Position of pointer is = %ld\n", ftell(fptr)); // Use %ld for long

    rewind(fptr);
    printf("Position of file pointer is = %ld\n", ftell(fptr));

    fclose(fptr);
    return 0;
}

