#include <stdio.h>

int main() {
    int n[10], loop, k;
    int *num = n; 
    for (loop = 0; loop < 10; loop++) {
        printf("Enter numbers [%d]: ", loop + 1);
        scanf("%d", n + loop); 
}
    printf("Enter the number to be searched: ");
    scanf("%d", &k);
    for (loop = 0; loop < 10; loop++) {
        if (*(n + loop) == k) {
            printf("%d is at position %d\n", k, loop + 1); 
        }
    }
 return 0;
}

