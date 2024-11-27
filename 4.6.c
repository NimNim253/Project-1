#include<stdio.h>

int main(){
    int S1, S2, S3, S4, S5, S6, S7, S8, S9, S10, S11, S12, S13, TONG1, TONG2;
    printf("Enter the first 12 digits of a UPC: ");
    scanf("%d%d%d%d%d%d%d%d%d%d%d%d", &S1, &S2, &S3, &S4, &S5, &S6, &S7, &S8, &S9, &S10, &S11, &S12);
    TONG1 = S1+S3+S5+S7+S9+S11;
    TONG2 = S2+S4+S6+S8+S10+S12;
    S13 = 9-(TONG1*3+TONG2-1)%10;
    printf("%d", S13);
    return 0;
}