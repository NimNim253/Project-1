#include<stdio.h>

int main(){
    int Gp, Gi, Pc, In, Cd;
    printf("Enter ISBN: ");
    scanf("%d-%d-%d-%d-%d", &Gp,&Gi,&Pc,&In,&Cd);
    printf("GS1 prefix: %d\n", Gp);
    printf("Group identifier: %d\n", Gi);
    printf("Publisher code: %d\n", Pc);
    printf("Item number: %d\n", In);
    printf("Check digit: %d", Cd);

    return 0;
}