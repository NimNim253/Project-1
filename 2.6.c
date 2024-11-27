#include <stdio.h>

int main(){
    int x;
    scanf("%d", &x);
    printf("((((3x+2)x - 5)x - 1)x + 7)x - 6 = %d", ((((3*x+2)*x - 5)*x - 1)*x + 7)*x - 6);
    return 0;
}