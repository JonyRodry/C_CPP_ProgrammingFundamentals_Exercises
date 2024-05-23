#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

#define LIMITE 20

int main(){

	setlocale(LC_ALL, "pt_PT");

	int n_computador;
    int n_jogador;

	srand(time(NULL));
	n_computador = rand() % LIMITE + 1;

	printf("Estou a pensar num número entre 1 e %i. Tente adivinhar qual!\n", LIMITE);

	do {
		scanf("%i", &n_jogador);
		if (n_jogador > n_computador){
			printf("Mais baixo!\n");
		}
		else{
			if (n_jogador < n_computador){
				printf("Mais alto!\n");
			}
		}
	} while (n_jogador != n_computador);

	printf("Correcto! Parabéns!\n");
}