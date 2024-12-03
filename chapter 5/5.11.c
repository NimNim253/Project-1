#include<stdio.h>

int main(){
    int x, y, z;
    printf("Enter a two - digit number: ");
    scanf("%d", &x);
    printf("You entered the number ");
    y = x /10;
    z = x % 10;
    if(y=1){
        switch(z){
            case 0:
            printf("Ten");
            break;
            case 1:
            printf("Eleven");
            break;
            case 2:
            printf("Twelve");
            break;
            case 3:
            printf("Thirteen");
            break;
            case 4:
            printf("Forteen");
            break;
            case 5:
            printf("Fifteen");
            break;
            case 6:
            printf("Sixteen");
            break;
            case 7:
            printf("Seventeen");
            break;
            case 8:
            printf("Eighteen");
            break;
            case 9:
            printf("Nineteen");
            break;
        }
    } else {
        switch(y){
            case 2:
            printf("Twenty");
            break;
            case 3:
            printf("Thirty");
            break;
            case 4:
            printf("Forty");
            break;
            case 5:
            printf("Fifty");
            break;
            case 6:
            printf("Sixty");
            break;
            case 7:
            printf("Seventy");
            break;
            case 8:
            printf("Eighty");
            break;
            case 9:
            printf("Ninety");
            break;
        switch(z){
            case 0:
            printf(" ");
            case 1:
            printf("One");
            break;
            case 2:
            printf("Two");
            break;
            case 3:
            printf("There");
            break;
            case 4:
            printf("Four");
            break;
            case 5:
            printf("Five");
            break;
            case 6:
            printf("Six");
            break;
            case 7:
            printf("Seven");
            break;
            case 8:
            printf("Eight");
            break;
            case 9:
            printf("Nine");
            break;
        }
        }
    }
    return 0;
}