#include <stdio.h>

int main(){
    int N1,N2,N3,N4,N5,N6,N7,N8,N9,N10,N11,N12,N13,N14,N15,N16;
    printf("Enter the numbers from 1 to 16 in any order: ");
    scanf("%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d", &N1,&N2,&N3,&N4,&N5,&N6,&N7,&N8,&N9,&N10,&N11,&N12,&N13,&N14,&N15,&N16);
    printf("%d %d %d %d\n", N1,N2,N3,N4);
    printf("%d %d %d %d\n", N5,N6,N7,N8);
    printf("%d %d %d %d\n", N9,N10,N11,N12);
    printf("%d %d %d %d\n", N13,N14,N15,N16);
    int NGANG1= N1+N2+N3+N4;
    int NGANG2= N5+N6+N7+N8;
    int NGANG3= N9+N10+N11+N12;
    int NGANG4= N13+N14+N15+N16;
    int DOC1= N1+N5+N9+N13;
    int DOC2= N2+N6+N10+N14;
    int DOC3= N3+N7+N11+N15;
    int DOC4= N4+N8+N12+N16;
    int CHEO1= N1+N6+N11+N16;
    int CHEO2= N4+N7+N10+N13;
    printf("Row sums: %d %d %d %d\n", NGANG1, NGANG2, NGANG3, NGANG4);
    printf("Column sums: %d %d %d %d\n", DOC1, DOC2, DOC3, DOC4);
    printf("Diagonal sums: %d %d \n", CHEO1, CHEO2);
    return 0;

}