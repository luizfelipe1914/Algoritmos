#include <stdio.h>

int main(void){
    double num;
    printf("Enter an real number: ");
    scanf("%lf", &num);
    printf("%lf / 5 = %lf",num, num/5);
    return 0;
}