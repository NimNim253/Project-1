#include <stdio.h>

int main(){
    int VAY, VAY1, VAY2, VAY3, LAISUAT, KHOANGOP;
    printf("NHAP KHOAN VAY: ");
    scanf("%d", &VAY);
    printf("NHAP LAI SUAT THEO NAM : ");
    scanf("%d", &LAISUAT);
    printf("KHOAN GOP HANG THANG: ");
    scanf("%d", &KHOANGOP);
    VAY1=1000*(VAY*LAISUAT/12/100+VAY-KHOANGOP);
    VAY2=1000*(VAY1*LAISUAT/12/100+VAY1-KHOANGOP);
    VAY3=1000*(VAY2*LAISUAT/12/100+VAY2-KHOANGOP);
    printf("DU NO CON LAI SAU TRA GOP THANG DAU TIEN %lf\n", &VAY1);
    printf("DU NO CON LAI SAU TRA GOP THANG THU HAI %lf\n", &VAY2);
    printf("DU NO CON LAI SAU TRA GOP THANG THU BA %lf\n", &VAY3);
    return 0;

}