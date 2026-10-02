#include <stdio.h>

int main(void){
    double number;
    printf("Enter a real number: ");
    scanf("%lf", &number);
    printf("You entered %lf. \n", number);
    return 0;
}