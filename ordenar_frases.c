#include <stdio.h>
#include <string.h>

int main() {
	char frase1[100];
	char frase2[100];
	char frase3[100];
	
	printf("Por favor, ingrese la primera frase: ");
	fgets(frase1, sizeof(frase1), stdin);
	
	printf("Por favor, ingrese la segunda frase: ");
	fgets(frase2, sizeof(frase2), stdin);
	
	printf("Por favor, ingrese la tercera frase: ");
	fgets(frase3, sizeof(frase3), stdin);
	
	// Eliminar el salto de línea
	size_t longitud1 = strlen(frase1);
	size_t longitud2 = strlen(frase2);
	size_t longitud3 = strlen(frase3);
	
	if (frase1[longitud1 - 1] == '\n') {
		frase1[longitud1 - 1] = '\0';
		longitud1--;
	}
	if (frase2[longitud2 - 1] == '\n') {
		frase2[longitud2 - 1] = '\0';
		longitud2--;
	}
	if (frase3[longitud3 - 1] == '\n') {
		frase3[longitud3 - 1] = '\0';
		longitud3--;
	}
	
	// Crear un arreglo de punteros a las frases
	char *frases[3] = {frase1, frase2, frase3};
	size_t longitudes[3] = {longitud1, longitud2, longitud3};
	
	// Ordenar las frases de mayor a menor
	for (int i = 0; i < 2; i++) {
		for (int j = i + 1; j < 3; j++) {
			if (longitudes[i] < longitudes[j]) {
				// Intercambiar longitudes
				size_t tempLong = longitudes[i];
				longitudes[i] = longitudes[j];
				longitudes[j] = tempLong;
				
				// Intercambiar frases
				char *tempFrase = frases[i];
				frases[i] = frases[j];
				frases[j] = tempFrase;
			}
		}
	}
	
	// Imprimir las frases ordenadas
	printf("\nFrases ordenadas de mayor a menor:\n");
	for (int i = 0; i < 3; i++) {
		printf("Frase %d: %s, Longitud: %zu\n", i + 1, frases[i], longitudes[i]);
	}
	
	return 0;
}
