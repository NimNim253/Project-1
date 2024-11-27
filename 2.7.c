#include <stdio.h>

int main(){
    int x, k20, k10, k5, k2 ,k1;
    printf("NHAP SO TIEN: ");
    scanf("%d", &x);
    k20 = x /20000;
    k10 = (x-k20*20000)/10000;
    k5 = (x-k20*20000-k10*10000)/5000;
    k2 = (x-k20*20000-k10*10000-k5*5000)/2000;
    k1 = (x-k20*20000-k10*10000-k5*5000-k2*2000)/1000;
    printf("SO TO 20000: %d\n", k20);
    printf("SO TO 10000: %d\n", k10);
    printf("SO TO 5000: %d\n", k5);
    printf("SO TO 2000: %d\n", k2);
    printf("SO TO 1000: %d", k1);
    return 0;
}