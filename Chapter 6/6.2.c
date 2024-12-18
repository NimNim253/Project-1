#include<stdio.h>

int main() {
    int m, n, remainder;
    printf("Enter two integers: ");
    scanf("%d %d", &m, &n);
    if (m < n) {
        int temp = m;
        m = n;
        n = temp;
    }
    if (n != 0) {
        remainder = m % n;
        m = n;
        n = remainder;
    }
    printf("Greatest common divisor: %d\n", m);
    return 0;
}
