// URL del repositorio: https://github.com/juancruz2708/bmi.c
#include <stdio.h>

#define TAM 5   

int main(void) {
	int codigos[TAM];
	float precios[TAM];
	int i;
	
	printf("Ingrese %d productos, se solicitara el codigo y precio:\n\n", TAM);
	
	for (i = 0; i < TAM; i++) {
		
		do {
			printf("Ingrese el codigo de barras (1-999999999): ");
			scanf("%d", &codigos[i]);
			if (codigos[i] < 1 || codigos[i] > 999999999) {
				printf("Error. El codigo de barras debe estar entre 1 y 999999999\n");
			}
		} while (codigos[i] < 1 || codigos[i] > 999999999);
		
		do {
			printf("Ingrese el precio: ");
			scanf("%f", &precios[i]);
			if (precios[i] < 0) {
				printf("Error. El precio no puede ser negativo\n");
			}
		} while (precios[i] < 0);
		
		printf("\n");
	}
	
	printf("Codigo\t\tPrecio\n");
	for (i = 0; i < TAM; i++) {
		printf("%d\t\t%.2f\n", codigos[i], precios[i]);
	}
	
	int indiceMayor = 0, indiceMenor = 0;
	for (i = 1; i < TAM; i++) {
		if (precios[i] > precios[indiceMayor]) {
			indiceMayor = i;
		}
		if (precios[i] < precios[indiceMenor]) {
			indiceMenor = i;
		}
	}
	
	printf("\nMas caro: [%d] %.2f\n", codigos[indiceMayor], precios[indiceMayor]);
	printf("Mas barato: [%d] %.2f\n", codigos[indiceMenor], precios[indiceMenor]);
	
	return 0;
}
