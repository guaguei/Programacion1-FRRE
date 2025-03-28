#include <stdio.h>
#include <math.h>

int esPrimo(int numero) {
	if (numero < 2) return 0; // 0 y 1 no son primos
	for (int divisor = 2; divisor <= sqrt(numero); divisor++) {
		if (numero % divisor == 0) {
			return 0; // No es primo
		}
	}
	return 1; // Es primo
}

int main() {
	int numeroIngresado;
	
	// Solicitar al usuario que ingrese un n�mero
	printf("Ingrese un n�mero positivo: ");
	if (scanf("%d", &numeroIngresado) != 1) {
		printf("Entrada no v�lida. Por favor, ingrese un n�mero entero positivo.\n");
		return 1; // Salir del programa con un c�digo de error
	}
	
	// Verificar que el n�mero ingresado sea positivo
	if (numeroIngresado < 1) {
		printf("Por favor, ingrese un n�mero entero positivo.\n");
		return 1; // Salir del programa con un c�digo de error
	}
	
	printf("N�meros primos desde 1 hasta %d:\n", numeroIngresado);
	
	// Iterar desde 2 hasta el n�mero ingresado
	for (int candidatoPrimo = 2; candidatoPrimo <= numeroIngresado; candidatoPrimo++) {
		if (esPrimo(candidatoPrimo)) {
			printf("%d", candidatoPrimo);
			// Imprimir una coma despu�s de cada n�mero primo, excepto el �ltimo
			if (candidatoPrimo < numeroIngresado) {
				printf(", ");
			}
		}
	}
	
	return 0; // Salir del programa con �xito
}
