#include <stdio.h>
#include <string.h>

struct student {
    char name[50];
    int ID;
    char faculty[50];
    float fee;
};

int main() {
    struct student students[10];
    int i;
    for (i = 0; i < 10; i++) {
        printf("Enter details for student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);

        printf("ID: ");
        scanf("%d", &students[i].ID);

        printf("Faculty: ");
        scanf("%s", students[i].faculty);

        printf("Fee: ");
        scanf("%f", &students[i].fee);

        printf("\n");
    }
    printf("\nStudents whose names start with 'A':\n");
    for (i = 0; i < 10; i++) {
        if (students[i].name[0] == 'A' || students[i].name[0] == 'a') {
            printf("Name: %s | ID: %d | Faculty: %s | Fee: %.2f\n",
                   students[i].name, students[i].ID, students[i].faculty, students[i].fee);
        }
    }

    return 0;
}
