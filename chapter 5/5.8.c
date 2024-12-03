#include<stdio.h>

int main(){
    int x, y, z;
    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &x, &y);



     z = x * 60 + y;
    if(480<=z<=531){   
        printf("Closest departune time is 8:00 a.m\n");
        printf("Arriving at 10:16 a.m");
    }
    else if (532<=z<=631){
        printf("Closest departune time is 9:43 a.m\n");
        printf("Arriving at 11:52 a.m");
    }
    else if (632<=z<=723){
        printf("Closest departune time is 11:19 p.m\n");
        printf("Arriving at 1:31 p.m");
    }
    else if (724<=z<=803){
        printf("Closest departune time is 12:47 p.m\n");
        printf("Arriving at 3:00 p.m");
    }
    else if (804<=z<=892){
        printf("Closest departune time is 2.00 p.m\n");
        printf("Arriving at 4:08 p.m");
    }
    else if (893<=z<=1042){
        printf("Closest departune time is 3:45 p.m\n");
        printf("Arriving at 5:55 p.m");
    }
    else if (1043<=z<=1222){
        printf("Closest departune time is 7:00 p.m\n");
        printf("Arriving at 9:20 a.m");
    }
    else if (1223<=z<=1440){
        printf("Closest departune time is 9:45 p.m\n");
        printf("Arriving at 11:58 p.m");
    }
    return 0;
}