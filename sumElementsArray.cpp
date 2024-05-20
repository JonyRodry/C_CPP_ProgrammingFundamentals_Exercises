#include <stdio.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "");

    int num[5];
    int soma = 0;
    int aux;

    for (int i = 0; i < (sizeof(num)/ sizeof(int)); i++) {
        printf("Insira o valor para a posicao %d: ", i + 1);
        scanf_s("%d", &aux);
        num[i] = aux;
    }


    for (int i = 0; i < 5; i++) {
        soma += num[i];
    }

    printf("A soma de todos os valores inseridos no array: %d\n", soma);
}