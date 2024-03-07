#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int main() {
	int dado;
	int palpite;
	bool gameOn = true;
	int tentativas = 1;

	srand(time(NULL));
	dado = 1 + rand() % 100;
	
	printf("Lancei o super dado! Tente adivinhar o seu valor... \n");
	
	while (gameOn){
				
		printf("Seu palpite: ");
		scanf("%d", &palpite);
		
		if (palpite > 100 || palpite < 0){
			printf("É um número entre 0 e 100!\n");
		} 
		
		if (tentativas == 5){
			printf("Você excedeu o número máximo de tentativas\nAdeus.");
			break;
		}
		
		else {
		
			if (palpite == dado){
				printf("Você adivinhou!\n");
				printf("Tentativas: %d", tentativas);
				gameOn = false;
			}
			else {
				if (palpite > dado) {
					printf("Alto demais.\n");
					tentativas++;
				} else {
					printf("Baixo demais.\n");
					tentativas++;
				}
				}
			}
		}

	return 0;
}

