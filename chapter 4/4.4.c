#include<stdio.h>
int main(){
    int x, a, b, c, d, e;
    printf("Enter a number between 0 and 32767: ");
    scanf("%d", &x);
    a = x/8*8;
    b = x/8/8*8;
    c = x/8/8/8*8;
    d = x/8/8/8/8*8;
    e = x/8/8/8/8/8*8;
    printf("%d", x/8/8/8/8 - e);
    printf("%d", x/8/8/8 - d);
    printf("%d", x/8/8 - c);
    printf("%d", x/8 - b);
    printf("%d", x - a);
    return 0;

}