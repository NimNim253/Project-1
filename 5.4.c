#include<stdio.h>
int main(){
    int x;
    printf("TOC DO GIO LA: ");
    scanf("%d", &x);
    if(x < 1){
        printf("GIO RAT NHE");
    }
    else if(1<=x&&x<=3){
        printf("GIO NHE");
    }
    else if (4<=x&&x<=27){
        printf("GIO MANH");
    }
    else if (28<=x&&x<=47){
        printf("LOC");
    }
    else if (48<=x&&x<=63){
        printf("BAO");
    }
    else if (x>=63){
        printf("CUONG PHONG");
    }
    return 0;
}