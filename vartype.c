#include <stdio.h>
#include <conio.h>

int globalVar = 10;        // Global variable

extern int externVar;      // Extern declaration

void useGlobal() {
    globalVar += 5;
    printf("Global Variable after modification: %d\n", globalVar);
}

void useLocal() {
    int localVar = 2;      // Local variable
    localVar *= 3;
    printf("Local Variable inside function: %d\n", localVar);
}

void useStatic() {
    static int staticVar = 0;  // Static variable
    staticVar++;
    printf("Static Variable value: %d\n", staticVar);
}

void useRegister() {
    register int regVar = 7;   // Register variable
    regVar *= 2;
    printf("Register Variable value: %d\n", regVar);
}

int main() {
    printf("Initial Global Variable: %d\n", globalVar);

    useGlobal();
    useLocal();
    useStatic();
    useStatic();
    useRegister();

    printf("Extern Variable: %d\n", externVar);

    getch();
    return 0;
}

int externVar = 15;   // Extern definition
