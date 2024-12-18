#include<stdio.h>
int main() {
    double number, largest = -1;
    printf("Enter a number: ");
    while (scanf("%lf", &number) == 1){
        if(number <= 0){
            break;
        }
        if(number > largest){
            largest = number;
        }
        printf("Enter a number: ");
    }
    if(largest >= 0){
        printf("The largest number entered was %.2lf\n", largest);
    } else {
        printf("No valid numbers were entered.\n");
    }
    return 0;
}
