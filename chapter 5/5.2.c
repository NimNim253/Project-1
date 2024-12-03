#include <stdio.h>
 
int main(){
    int x, y;
    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &x,&y);
    if(x == 12 && y == 0){
        printf("Equivalent 12-hour time: 12:00");
    }
    else if (x < 12){
        printf("Equivalent 12-hour time: %d:%d AM", x,y);
    }
    else if(x > 12){
        printf("Equivalent 12-hour time: %d:%d PM", x-12, y);
    }
    return 0;
}