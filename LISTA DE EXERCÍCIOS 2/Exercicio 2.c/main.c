#include <stdio.h>

int main(){
	
	int n, contador, soma = 0, potencia;
	
	printf("------Soma dos quadrados------\n");
	printf("Informe um numero inteiro positivo: ");
	scanf("%d", &n);
	
	for(contador = 1; contador <= n; contador++){
		
		potencia = (contador * contador);
		soma = soma + potencia;
		
		printf("%d^2 e : %d \n", contador, potencia); 
	}
	
	printf("\n");
	printf("A soma dos quadrados dos primeiros %d numeros e: %d", n, soma);
	
	return 0;
}