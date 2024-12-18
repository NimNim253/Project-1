#include <stdio.h>

int main() {
    double VAY, LAI, TRA;
    int SOLANTHANHTOAN;
    printf("NHẬP SỐ TIỀN VAY: ");
    scanf("%lf", &VAY);
    printf("Enter annual interest rate (as a percentage): ");
    scanf("%lf", &LAI);
    printf("Enter monthly payment: ");
    scanf("%lf", &TRA);
    printf("Enter number of payments: ");
    scanf("%d", &SOLANTHANHTOAN);
    double LAITHANG = LAI / 12 / 100;
    for (int i = 1; i <= SOLANTHANHTOAN; i++) {
        double TIENLAITHANG = VAY * LAITHANG;
        VAY = VAY + TIENLAITHANG - TRA;
        if (VAY <= 0) {
            VAY = 0;
            printf("Remaining balance after payment %d: %.2f\n", i, VAY);
            break;
        }
        printf("Remaining balance after payment %d: %.2f\n", i, VAY);
    }

    return 0;
}