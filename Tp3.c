#include <stdio.h>

int main (void){
	float peso;
	float altura;
	float imc;
	
	do {
		printf("Ingrese su peso en kg: ");
		scanf("%f", &peso);
		if (peso <= 0) {
			printf("Error: el peso debe ser un valor positivo.\n");
		}
	} while (peso <= 0);
	
	do {
		printf("Ingrese su altura en metros: ");
		scanf("%f", &altura);
		if (altura <= 0) {
			printf("Error: la altura debe ser un valor positivo.\n");
		}
	} while (altura <= 0);
	
	imc = peso / (altura * altura);
	printf("Su índice de masa corporal es: %.2f\n", imc);
	
	if (imc < 18.5) {
		printf("Clasificación: Bajo peso\n");
	} else if (imc >= 18.5 && imc <= 24.9) {
		printf("Clasificación: Normal\n");
	} else if (imc >= 25.0 && imc <= 29.9) {
		printf("Clasificación: Sobrepeso\n");
	} else if (imc >= 30.0) {
		printf("Clasificación: Obesidad\n");
	}
	
	return 0;
}
