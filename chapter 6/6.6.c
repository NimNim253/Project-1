#include <stdio.h>
#include <math.h>

int main() {
    int n;
    printf("Nhập một số n: ");
    scanf("%d", &n);
    printf("Các giá trị bình phương chẵn giữa 1 và %d là:\n", n);
    for (int i = 1; i * i <= n; i++) {
        int square = i * i;
        if (square % 2 == 0) {
            printf("%d\n", square);
        }
    }
    return 0;
}