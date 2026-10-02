#include <stdio.h>
#include<locale.h>
int main(void){
    setlocale(LC_ALL, "");
    double fahrenheit;
    printf("Enter a Fahrenheit temperature: ");
    scanf("%lf", &fahrenheit);
    printf("%.2lf º F = %.2lf º C", fahrenheit, 5*(fahrenheit-32)/9);
    return 0;
}