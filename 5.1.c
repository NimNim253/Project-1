#include<stdio.h>

int main(){
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);
    if(0 <= x && x <= 9){
        printf("The number %d has 1 digit", x);
    }
    else if(10 <= x && x <= 99){
        printf("The number %d has 2 digits", x);
    }
    else if(100 <= x && x <= 999){
        printf("The number %d has 3 digits", x);
    }
    else if(1000 <= x && x <= 9999){
        printf("The number %d has 4 digits", x);
    }
    return 0;
}