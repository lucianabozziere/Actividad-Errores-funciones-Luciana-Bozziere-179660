#include<stdio.h>

float perimetrofigura (float numero)
{
	float perimetro;
	perimetro = 4 * numero;
	return perimetro;
}

float areafigura (float numero)
{
	float area;
	area= numero * numero;
	return area;
}

int main ()
{
	int num;
	printf("lado de un cuadrado: ");
	scanf("%d", &num);
	printf("perimetro: %f\n", perimetrofigura(num));
	printf("area: %f\n", areafigura(num));
	return 0;
}
