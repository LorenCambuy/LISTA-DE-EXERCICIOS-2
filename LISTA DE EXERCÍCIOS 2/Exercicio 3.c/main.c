#include <stdio.h>

int main() {
	
	int valor_dado = 0, soma = 0;
	
	printf("-----Jogo do Dado-----\n");
	printf("- Jogue o dado; \n");
	
	while(soma < 20){
		
		printf("- Informe o valor da face superior: ");
		scanf("%d", &valor_dado);
		
		//validando os valores dos lados de um dado
		if(valor_dado < 1 || valor_dado > 6){
			
			printf("\n Valor invalido. O dado so possui lados com numeros de 1 a 6.\n");
            continue; //interrompe a interacao e pula para a proxima
		}
		
		soma = soma + valor_dado;
	}
	
	printf("\n");
	printf("Voce terminou o jogo. A soma chegou a %d.", soma);
	
	return 0;
}