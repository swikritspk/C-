#include <stdio.h>
#include <conio.h>
#define pi 3.14159

void cylinder(int r, int l);  // declaration

int main() {
    int l, r;
    printf("Enter the radius and height:\n");
    scanf("%d%d", &r, &l);
    cylinder(r, l);
    return 0;
}

// definition
void cylinder(int r, int l) {
    float TSA, CSA, V;
    TSA = 2 * pi * r * (r + l);
    CSA = 2 * pi * r * l;
    V   = pi * r * r * l;
    printf("TSA = %.2f\nCSA = %.2f\nV = %.2f\n", TSA, CSA, V);
}
