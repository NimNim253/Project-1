#include<stdio.h>

int UCLN(int a, int b) {
    while (b != 0) {
        int x = a % b;
        a = b;
        b = x;
    }
    return a;
}

int main() {
    int TUSO, MAUSO;

    printf("Enter a fraction :");
    scanf("%d/%d", &TUSO, &MAUSO);

    if (MAUSO == 0) {
        printf("Error: MAU KHONG THE BANG 0.\n");
        return 1;
    }

    int y = UCLN(TUSO, MAUSO);

    TUSO /= y;
    MAUSO /= y;

    printf("In lowest terms: %d/%d\n", TUSO, MAUSO);

    return 0;
}