#include <stdio.h>
#include <math.h>

float calcularAreaRectangulo(float longitud, float altura) {
	return longitud * altura;
}

float calcularPerimetroRectangulo(float longitud, float altura) {
	return 2 * (longitud + altura);
}

float calcularDiagonalRectangulo(float longitud, float altura) {
	return sqrt(pow(longitud, 2) + pow(altura, 2));
}

float calcularAreaCirculo(float radio) {
	return M_PI * pow(radio, 2);
}

float calcularPerimetroCirculo(float radio) {
	return 2 * M_PI * radio;
}

void imprimirResultados(float area, float perimetro) {
	printf("El área es: %.2f\n", area);
	printf("El perímetro es: %.2f\n", perimetro);
}

int main() {
	int opcion;
	float longitud, altura, radio;
	float area, perimetro;
	
	printf("Ingrese la figura que desea calcular (1: rectángulo, 2: círculo): ");
	scanf("%d", &opcion);
	
	if (opcion == 1) {
		printf("Opción de rectángulo seleccionada\n");
		printf("Ingrese la longitud del rectángulo: ");
		scanf("%f", &longitud);
		printf("Ingrese la altura del rectángulo: ");
		scanf("%f", &altura);
		
		area = calcularAreaRectangulo(longitud, altura);
		perimetro = calcularPerimetroRectangulo(longitud, altura);
		
		imprimirResultados(area, perimetro);
		
		printf("La diagonal del rectángulo es: %.2f\n", calcularDiagonalRectangulo(longitud, altura));
		
	} else if (opcion == 2) {
		printf("Opción de círculo seleccionada\n");
		printf("Ingrese el radio del círculo: ");
		scanf("%f", &radio);
		
		area = calcularAreaCirculo(radio);
		perimetro = calcularPerimetroCirculo(radio);
		
		imprimirResultados(area, perimetro);
		
	} else {
		printf("Opción inválida. Debe ser 1 o 2.\n");
	}
	
	return 0;
}

