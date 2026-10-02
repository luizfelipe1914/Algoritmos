#include <stdio.h>
#include <math.h>

int main(void){
    int number;
    printf("Enter an integer: ");
    scanf("%d", &number);
    printf("%d ^ 2 = %lf", number, pow(number, 2));
    return 0;
}