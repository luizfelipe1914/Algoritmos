#include <stdio.h>
#include <locale.h>


int main(void){
    setlocale(LC_ALL, "");
    double fahrenheit;
    printf("Enter a Fahrenheit temperature: ");
    scanf("%lf", &fahrenheit);
    double celsius = 5*(fahrenheit-32)/9;
    printf("%.2lf graus F = %.2lf  graus C \n", fahrenheit, celsius);
    return 0;
}