#include <stdio.h>
#include <stdlib.h> 
#include <time.h> 
	 
int main() {
	 
	int numero_secreto, palpite;
	
	//inicializando o gerador de numeros
	srand(time(NULL));  
	numero_secreto = rand() % 50 + 1;  //definindo que a variavel vai receber um numero aleatorio na faixa de 1 a 50
	
	printf("Adivinhe o numero secreto (entre 1 e 50)");
	
	do{	 
		printf("\n Digite seu palpite: ");
		scanf("%d", &palpite);
		
			if(palpite < numero_secreto){
			printf("\n Muito baixo, tente um numero maior!");
			}
			else if(palpite > numero_secreto){
				printf("\n Muito alto, tente um numero menor!");
			}
			else{  
				printf("\n");
				printf("\n Parabens! Voce acertou!");
				printf("\n O numero secreto era: %d", numero_secreto);
			}	
		
	} while (palpite != numero_secreto); //do..while.. faça...enquanto -> vai repetir a pergunta, fazer a verificacao ate o usuario acertar
	
	return 0;
}