#include <stdio.h>

int main(){
    int x;
    printf("THU NHAP($): ");
    scanf("%d", &x);
    if(x <= 750){
        printf("KHOAN THUE PHAI NOP: %d", x/100*1);
    }
    else if(x>750 && x<=2250){
        printf("KHOAN THUE PHAI NOP: %d", x/100*2+7,50);
    }
    else if(x>2250 && x<=3750){
        printf("KHOAN THUE PHAI NOP: %d", x/100*3+37,50);
    }
    else if(x>3750 && x<=5250){
        printf("KHOAN THUE PHAI NOP: %d", x/100*4+52,50);
    }
    else if(x>5250 && x<=7000){
        printf("KHOAN THUE PHAI NOP: %d", x/100*5+142,50);
    }
    else if(x>7000){
        printf("KHOAN THUE PHAI NOP: %d", x/100*6+230);
    }
    return 0;
}