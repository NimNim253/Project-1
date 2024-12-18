#include <stdio.h>

int main() {
    int daysInMonth, startingDay;
    printf("Enter number of days in month: ");
    scanf("%d", &daysInMonth);
    printf("Enter starting day of week (1 = Sun, 7 = Sat): ");
    scanf("%d", &startingDay);
    printf("\nSun Mon Tue Wed Thu Fri Sat\n");

    for (int i = 1; i < startingDay; i++) {
        printf("    ");
    }
    for (int day = 1; day <= daysInMonth; day++) {
        printf("%3d ", day);
        if ((startingDay + day - 1) % 7 == 0) {
            printf("\n");
        }
    }
    
    printf("\n");
    return 0;
}