#include <stdio.h>

struct std {
    int roll, marks;
    char str[40];
} s;

int main() {
    FILE *fptr;
    char c;

    fptr = fopen("abc.dat", "wb+");
    do {
        printf("Enter Roll No, Marks, and Name: ");
        scanf("%d %d %39s", &s.roll, &s.marks, s.str);
        fwrite(&s, sizeof(s), 1, fptr); 

        printf("Press N to stop or any other key to continue: ");
        while ((c = getchar()) != '\n'); 
        c = getchar(); 
    } while (c != 'N' && c != 'n');
    rewind(fptr); 
    while (fread(&s, sizeof(s), 1, fptr) == 1) { 
        printf("Roll No: %d, Marks: %d, Name: %s\n", s.roll, s.marks, s.str);
    }

    fclose(fptr);
    return 0;
}
