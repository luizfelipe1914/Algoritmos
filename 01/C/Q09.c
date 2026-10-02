/*
 Leia uma temperatura em graus Celsius e apresente-a convertida em graus Kelvin.  
 A fórmula de convers ̃ao ́e: K=C + 273.15, sendo C a temperatura em Celsius e K a temperatura em Kelvin.
*/

#include <stdio.h>
#include <locale.h>

int main(void){
    setlocale(LC_ALL, "");
    double kelvin, celsius;
    printf("Enter a Celsius temperature: ");
    scanf("%lf", &celsius);
    kelvin = celsius + 273.15;
    printf("%.2lf Celsius = %.2lf Kelvin\n", celsius, kelvin);
    return 0;
}