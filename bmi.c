#include <stdio.h>

int main (void){
	float peso;
	float altura;
	float imc;
	
	printf("Ingrese su peso en kg: ");
	scanf("%f", &peso);
	printf("Ingrese su altura en metros: ");
	scanf("%f", &altura);
	
	imc = peso / (altura * altura);
		printf( "Su indice de masa corporal es: %.2f\n", imc);
		
		
		//clasificacion segun imc
		if (imc < 18.5){
			printf("Clasificacion: Bajo peso\n");
		} else if (imc >= 18.5 && imc <= 24.9) {
			printf("Clasificacion: Normal\n");
		} else if (imc >=25.0 && imc <= 29.9){
			printf("Clasificacion: Sobrepeso\n");
		} else if (imc >=30.0){
			printf("Clasificacion: Obesidad\n");
		}
		
		return 0;
}
