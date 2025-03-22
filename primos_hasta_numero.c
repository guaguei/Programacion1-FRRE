#include <stdio.h>
#include <math.h>

int main() {
	int numeroIngresado, candidatoPrimo, divisorPrueba;
	int esPrimo;
	
	// Solicitar al usuario que ingrese un n�mero
	printf("Ingrese un n�mero positivo: ");
	scanf("%d", &numeroIngresado);
	
	// Verificar que el n�mero ingresado sea positivo
	if (numeroIngresado < 1) {
		printf("Por favor, ingrese un n�mero entero positivo.\n");
		return 1; // Salir del programa con un c�digo de error
	}
	
	printf("N�meros primos desde 1 hasta %d:\n", numeroIngresado);
	
	// Iterar desde 2 hasta el n�mero ingresado
	for (candidatoPrimo = 2; candidatoPrimo <= numeroIngresado; candidatoPrimo++) {
		esPrimo = 1; // Asumimos que candidatoPrimo es primo
		
		// Verificar si candidatoPrimo es divisible por alg�n n�mero desde 2 hasta la ra�z cuadrada de candidatoPrimo
		for (divisorPrueba = 2; divisorPrueba <= sqrt(candidatoPrimo); divisorPrueba++) {
			if (candidatoPrimo % divisorPrueba == 0) {
				esPrimo = 0; // No es primo
				break; // Salir del bucle
			}
		}
		
		// Si esPrimo sigue siendo 1, entonces candidatoPrimo es primo
		if (esPrimo) {
			printf("%d", candidatoPrimo);
			// Imprimir una coma despu�s de cada n�mero primo, excepto el �ltimo
			if (candidatoPrimo < numeroIngresado) {
				printf(", ");
			}
		}
	}
	
	printf("\n"); // Nueva l�nea al final de la salida
	return 0; // Salir del programa con �xito
}
