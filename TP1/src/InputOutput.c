#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "InputOutput.h"
#include "Menu.h"
#include "MathOperations.h"
#include "Validations.h"

int GetInt(char mensaje [])
{
    char str[20];
    int numero;

	printf ("%s", mensaje);
    fflush (stdin);
    scanf ("%s", str);


    while(!IsInt(str))
    {
        printf("No se esta ingresando un numero entero. Debe ser entre 1 y 5\nSu opcion: ");
        fflush(stdin);
        scanf ("%s", str);
    }

    numero = atoi (str);

    return numero;
}

double GetReal(char mensaje [])
{
    char str[20];
    double numero;

    printf ("%s", mensaje);
    fflush(stdin);
    scanf ("%s", str);

    while(!IsReal(str))
    {
        printf("No es un numero valido. Reingresar: ");
        fflush(stdin);
        scanf ("%s", str);
    }
    numero = atof (str);

    return numero;
}
int GetRange(int min, int max)
{
    int valor;

    valor = GetInt("Su opcion: ");

    while(!ValidateRange(valor, min, max))
    {
        printf("Opcion invalida. Debe ser entre %d y %d", min, max);
        valor = GetInt("\nSu opcion: ");
    }
    return valor;
}
void ShowResults (double a, double b, double suma, double resta, double multiplicacion, double division, unsigned long factorialA, unsigned long factorialB)
{
	printf ("\n--Informe de resultados--\n\n");
	printf("El resultado de %.2lf + %.2lf es: %.2lf\n", a, b, suma);
	printf("El resultado de %.2lf - %.2lf es: %.2lf\n", a, b, resta);
	printf("El resultado de %.2lf x %.2lf es: %.2lf\n", a, b, multiplicacion);

	if(ValidateDivision(b))
	{
		printf("El resultado de %.2lf / %.2f es: %.2lf\n", a, b, division);
	}
	else
	{
		printf("No se puede dividir por cero!\n");
	}
	if (ValidateIntFactorial(a))
	{
		if(factorialA != 0)
		{
			printf("El factorial de %.0lf es: %lu\n", a, factorialA);
		}
		else
		{
			printf("No se puede calcular el factorial de %.0lf porque es negativo\n", a);
		}
	}
	else
	{
		printf("No se puede calcular el factorial de %.2lf porque es decimal\n", a);
	}
	if (ValidateIntFactorial(b))
	{
		if(factorialB != 0)
		{
			printf("El factorial de %.0lf es: %lu\n", b, factorialB);
		}
		else
		{
			printf("No se puede calcular el factorial de %.0lf porque es negativo\n", b);
		}
	}
	else
	{
		printf("No se puede calcular el factorial de %.2lf porque es decimal\n", b);
	}
}
