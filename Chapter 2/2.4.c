#include<stdio.h>

int main(){
    int a;
    printf("NHAP SO TIEN: ");
    scanf("%d", &a);
    printf("DA TINH THUE: %d VND", a * 1000 * 5 / 100 + a * 1000);
    return 0;
}
