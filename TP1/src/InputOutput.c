#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "InputOutput.h"
#include "Menu.h"
#include "MathOperations.h"
#include "Validations.h"

/**
 * @fn int GetInt(char[])
 * @brief Pide un numero en formato de cadena de caracteres y lo pasa a tipo int.
 *
 * @param mensaje: mensaje que recibira el usuario para indicarle que ingrese un numero.
 * @return Retorna el numero ya convertido.
 */
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
/**
 * @fn double GetReal(char[])
 * @brief Pide un numero en formato de cadena de caracteres y lo pasa a tipo float.
 *
 * @param mensaje: mensaje que recibira el usuario para indicarle que ingrese un numero.
 * @return Retorna el numero ya convertido.
 */
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
/**
 * @fn int GetNumber(int, int)
 * @brief Funcion intermedia que se encarga de llamar a otras funciones para obtener numeros en particular
 *
 * @param min: Rango minimo que debera tener el numero.
 * @param max: Rango maximo que debera tener el numero.
 * @return Retorna el numero ya obtenido y validado por otras funciones.
 */
int GetNumber(int min, int max)
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
/**
 * @fn void ShowResults(double, double, double, double, double, double, unsigned long, unsigned long)
 * @brief Muestra los resultados de todas las operaciones.
 *
 * @param a: Valor del primer operando.
 * @param b: Valor del segundo operando.
 * @param suma: Resultado de la suma entre a y b.
 * @param resta: Resultado de la resta entre a y b.
 * @param multiplicacion: Resultado de la multiplicacion entre a y b.
 * @param division: Resultado de la division entre a y b.
 * @param factorialA: Resultado del factorial del operando a.
 * @param factorialB: Resultado del factorial del operando b.
 */
void ShowResults (double a, double b, double suma, double resta, double multiplicacion, double division, unsigned long factorialA, unsigned long factorialB)
{
	printf ("\n--Informe de resultados--\n\n");
	printf("El resultado de %lf + %lf es: %lf\n", a, b, suma);
	printf("El resultado de %lf - %lf es: %lf\n", a, b, resta);
	printf("El resultado de %lf x %lf es: %lf\n", a, b, multiplicacion);

	if(ValidateDivision(b))
	{
		printf("El resultado de %lf / %lf es: %lf\n", a, b, division);
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
		if (a < 0)
		{
			printf ("No se puede calcular el factorial de %.2lf porque es decimal y negativo\n", a);
		}
		else
		{
			printf ("No se puede calcular el factorial de %.2lf porque es decimal\n", a);
		}
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
		if (b < 0)
		{
			printf ("No se puede calcular el factorial de %.2lf porque es decimal y negativo\n", b);
		}
		else
		{
			printf ("No se puede calcular el factorial de %.2lf porque es decimal\n", b);
		}
	}
}
