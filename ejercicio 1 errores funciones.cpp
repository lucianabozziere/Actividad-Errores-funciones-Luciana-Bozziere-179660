#include<stdio.h>

int suma (int a, int b);

int suma(int a, int b)
{
	int add;
	add= a+b;
	return add;
}

int main ()
{
	int num1, num2, sum;
	printf("introducir dos numeros a sumar \n");
	scanf("%d %d", &num1, &num2);
	sum = suma (num1, num2);
	printf("la suma es: %d", sum);
	return 0;
}


