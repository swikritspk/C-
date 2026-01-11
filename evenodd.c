#include <stdio.h>

int main() {
    int i, e= 0, o = 0;
    for (i = 1; i <= 100; i++) {
        if (i % 2 == 0) {
            e=e+1;  // Increment even counter
        } else {
            o++;   // Increment odd counter
        }
    }

    // Print results
    printf("Count of even numbers from 1 to 100: %d\n", e);
    printf("Count of odd numbers from 1 to 100: %d\n", o);

    return 0;
}
