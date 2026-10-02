#include <stdio.h>
#include <locale.h>

int main(void){
    setlocale(LC_ALL, "");
    double kelvin;
    printf("Enter an Kelvin temperature: ");
    scanf("%lf", &kelvin);
    double celsius = kelvin - 273.15;
    printf("%.2lf graus Kelvin = %.2lf graus celsius.\n", kelvin, celsius);
    return 0;
}