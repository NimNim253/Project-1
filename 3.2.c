#include<stdio.h>

int main(){
    double p;
    int i,m,d,y;
    printf("Enter item number: ");
    scanf("%d", &i);
    printf("Enter unit price: ");
    scanf("%lf", &p);
    printf("Enter purchase date (mm/dd/yyyy) :\n");
    scanf("%d/%d/%d", &m,&d,&y);
    printf("Item        Unit        Purchase\n");
    printf("            Price       Date\n");
    printf("%d          %lf         %d%d%d", i,p,m,d,y);
    return 0;
}