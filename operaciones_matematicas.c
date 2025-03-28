#include <stdio.h>

int main() {
	int a, b;
	
	// Solicitar al usuario que ingrese dos números
	printf("Ingrese el primer numero (a): ");
	scanf("%d", &a);
	printf("Ingrese el segundo numero (b): ");
	scanf("%d", &b);
	
	// Suma
	int suma = a + b;
	printf("Suma: %d + %d = %d\n", a, b, suma);
	
	// Resta
	int resta = a - b;
	printf("Resta: %d - %d = %d\n", a, b, resta);
	
	// Multiplicación
	int multiplicacion = a * b;
	printf("Multiplicacion: %d * %d = %d\n", a, b, multiplicacion);
	
	// División
	if (b != 0) {
		float division = (float)a / b; // Casting a float para obtener resultado decimal
		printf("Division: %d / %d = %.2f\n", a, b, division);
	} else {
		printf("Division: No se puede dividir por cero.\n");
	}
	
	// Módulo
	if (b != 0) {
		int modulo = a % b;
		printf("Modulo: %d %% %d = %d\n", a, b, modulo);
	} else {
		printf("Modulo: No se puede calcular el modulo con divisor cero.\n");
	}
	
	// Incremento
	a++;
	b++;
	printf("Incremento: a = %d, b = %d\n", a, b);
	
	// Decremento
	a--;
	b--;
	printf("Decremento: a = %d, b = %d\n", a, b);
	
	// Operaciones compuestas
	a += 5; // Suma 5 a a
	b -= 3; // Resta 3 a b
	printf("Operaciones compuestas: a = %d, b = %d\n", a, b);
	
	a *= 2; // Multiplica a por 2
	if (b != 0) {
		b /= 2; // Divide b entre 2 solo si b no es cero
	} else {
		printf("No se puede dividir b entre 2 porque b es cero.\n");
	}
	printf("Después de operaciones compuestas: a = %d, b = %d\n", a, b);
	
	return 0; // Salir del programa con éxito
}
