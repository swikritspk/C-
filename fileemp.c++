#include <stdio.h>

int main() {
    FILE *fptr;
    int id;
    char name[40], post[40];
    fptr = fopen("emp.txt", "w");
    printf("Enter the id of employee: ");
    scanf("%d", &id);
    getchar();

    printf("Enter the name of employee: ");
    fgets(name, sizeof(name),stdin); // use scanf("%s",name);..... but can't give space btwn names......

    printf("Enter the post of employee: ");
    fgets(post, sizeof(post),stdin); // use scanf("%s",post);

    fprintf(fptr, "%d %s %s\n", id, name, post);
    fclose(fptr); 

    // Open the file for reading
    fptr = fopen("emp.txt", "r");
    printf("Id\tName\tPost\n");
    
   fscanf(fptr, "%d %s %s", &id, name, post);
        printf("%d\t%s\t%s\n", id, name, post);

    fclose(fptr);
}
