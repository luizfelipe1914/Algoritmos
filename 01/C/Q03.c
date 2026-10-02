#include <stdio.h>

int main(void){
    int num1, num2, num3;
    printf("Enter first integer: ");
    scanf("%d", &num1);
    printf("Enter second integer: ");
    scanf("%d", &num2);
    printf("Enter third integer: ");
    scanf("%d", &num3);
    printf("The sum of %d, %d and %d is %d", num1, num2, num3, num1+num2+num3);
    return 0;
}