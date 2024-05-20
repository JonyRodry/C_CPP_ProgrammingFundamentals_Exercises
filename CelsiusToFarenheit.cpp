#include <stdio.h>
#include <locale.h>

float Celsius2Farenheit(float value){
    float converted;
    converted = (value * 1.80) + 32;
    return converted;
}

int main(){
    setlocale(LC_ALL, "pt_PT");

    float celsius, farenheit;

    printf("Insira uma temperatura em graus Celsius: ");
    scanf("%f", &celsius);

    farenheit = Celsius2Farenheit(celsius);

    printf("Valor convertido para Farenheit: %.2fº \n", farenheit);
}