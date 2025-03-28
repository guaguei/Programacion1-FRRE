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
	
	// Solicitar al usuario que ingrese un número
	printf("Ingrese un número positivo: ");
	if (scanf("%d", &numeroIngresado) != 1) {
		printf("Entrada no válida. Por favor, ingrese un número entero positivo.\n");
		return 1; // Salir del programa con un código de error
	}
	
	// Verificar que el número ingresado sea positivo
	if (numeroIngresado < 1) {
		printf("Por favor, ingrese un número entero positivo.\n");
		return 1; // Salir del programa con un código de error
	}
	
	printf("Números primos desde 1 hasta %d:\n", numeroIngresado);
	
	// Iterar desde 2 hasta el número ingresado
	for (int candidatoPrimo = 2; candidatoPrimo <= numeroIngresado; candidatoPrimo++) {
		if (esPrimo(candidatoPrimo)) {
			printf("%d", candidatoPrimo);
			// Imprimir una coma después de cada número primo, excepto el último
			if (candidatoPrimo < numeroIngresado) {
				printf(", ");
			}
		}
	}
	
	return 0; // Salir del programa con éxito
}
