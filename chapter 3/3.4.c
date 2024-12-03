#include<stdio.h>

int main (){
    int N1, N2, N3;
    printf("Enter phone number [(xxx) xxx-xxxx]: ");
    scanf("(%d) %d-%d", &N1, &N2, &N3);
    printf("You entered: %.3d.%.3d.%.4d", N1,N2,N3);

    return 0;

}