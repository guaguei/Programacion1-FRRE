#include <stdio.h>

int main() {
	// Declaración de variables para almacenar los tres números
	int num1, num2, num3;
	
	// Solicitar al usuario que ingrese tres números
	printf("Por favor, ingresa el primer número: ");
	scanf("%d", &num1);
	
	printf("Por favor, ingresa el segundo número: ");
	scanf("%d", &num2);
	
	printf("Por favor, ingresa el tercer número: ");
	scanf("%d", &num3);
	
	// Declaración de variables para almacenar el orden
	int max, mid, min;
	
	// Encontrar el mayor, el segundo mayor y el menor
	if (num1 >= num2 && num1 >= num3) {
		max = num1;
		if (num2 >= num3) {
			mid = num2;
			min = num3;
		} else {
			mid = num3;
			min = num2;
		}
	} else if (num2 >= num1 && num2 >= num3) {
		max = num2;
		if (num1 >= num3) {
			mid = num1;
			min = num3;
		} else {
			mid = num3;
			min = num1;
		}
	} else {
		max = num3;
		if (num1 >= num2) {
			mid = num1;
			min = num2;
		} else {
			mid = num2;
			min = num1;
		}
	}
	
	// Imprimir los números en orden de mayor a menor
	printf("Los números en orden de mayor a menor son: %d, %d, %d\n", max, mid, min);
	
	return 0; // Indicar que el programa terminó correctamente
}
