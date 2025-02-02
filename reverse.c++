#include <stdio.h>
int reverse(int n, int rev);
int main() {
    int n, rev = 0;
    printf("Enter a 4-digit number: ");
    scanf("%d", &n);
    rev = reverse(n, rev);
    printf("Reversed number is %d\n", rev);
}
int reverse(int n, int rev) {
    if (n == 0) {
        return rev;
    } else {
        return reverse(n / 10, rev * 10 + (n % 10));
    }
}
