#include <stdio.h>
#include <math.h>

int main() {
	int numeroIngresado, candidatoPrimo, divisorPrueba;
	int esPrimo;
	
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
	for (candidatoPrimo = 2; candidatoPrimo <= numeroIngresado; candidatoPrimo++) {
		esPrimo = 1; // Asumimos que candidatoPrimo es primo
		
		// Verificar si candidatoPrimo es divisible por algún número desde 2 hasta la raíz cuadrada de candidatoPrimo
		for (divisorPrueba = 2; divisorPrueba <= sqrt(candidatoPrimo); divisorPrueba++) {
			if (candidatoPrimo % divisorPrueba == 0) {
				esPrimo = 0; // No es primo
				break; // Salir del bucle
			}
		}
		
		// Si esPrimo sigue siendo 1, entonces candidatoPrimo es primo
		if (esPrimo) {
			printf("%d", candidatoPrimo);
			// Imprimir una coma después de cada número primo, excepto el último
			if (candidatoPrimo < numeroIngresado) {
				printf(", ");
			}
		}
	}
	
	printf("\n"); // Nueva línea al final de la salida
	
	// Esperar a que el usuario presione una tecla antes de cerrar
	printf("Presione Enter para salir...");
	getchar(); // Captura el salto de línea pendiente
	getchar(); // Espera a que el usuario presione Enter
	
	return 0; // Salir del programa con éxito
}
