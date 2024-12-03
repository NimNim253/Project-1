#include<stdio.h>

int main(){
    int x, y, z, t;
    printf("Enter a three-digit number: ");
    scanf("%d", &x);
    y = x%100;
    z = x/10;
    t = x/100;
    printf("The reversal is: %d%d%d", y, z, t);

    return 0;
}