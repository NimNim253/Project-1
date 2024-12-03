#include<stdio.h>

int main(){
    int x, y, z;
    printf("Enter a two-digit number: ");
    scanf("%d", &x);
    y = x%10;
    z = x/10;
    printf("The reversal is: %d%d", y, z);

    return 0;
}