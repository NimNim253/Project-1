#include<stdio.h>

int main(){
    int r = 10;
    printf("the tich hinh cau la: %f\n", 4.0f/3.0f*3.14*r*r*r);
    printf("%f", 4/3*3.14*r*r*r);
    // do máy ko hiểu 4/3=1.333 nên coi 4/3=1   <em nghĩ thế :)>
    return 0;
}