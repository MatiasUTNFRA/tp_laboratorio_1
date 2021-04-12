#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "InputOutput.h"
#include "Menu.h"
#include "MathOperations.h"
#include "Validations.h"

int GoThroughDigits(char str[], int i)
{
    while(isdigit(str[i]))
    {
        i++;
    }
    return i;
}

int GoThroughSpaces(char str[], int i)
{
    while(isspace(str[i]))
    {
        i++;
    }
    return i;
}

int IsReal(char str[])
{
    int resultado;

    resultado = 0; // supone inicialmente que el resultado no será exitoso
    // avanza descartando espacios iniciales
    int i = GoThroughSpaces(str , 0);

	if(str[i] == '-' || str[i] == '+')
	{    // si se detiene en un signo
        i++;    // avanza al caracter siguiente
	}
    if(isdigit(str[i]))
    {                   // si se detiene en un dígito
        i++;    // avanza al caracter siguiente
        i = GoThroughDigits(str, i);

        if(isspace(str[i]))
        {   // si se detiene en un espacio busca llegar al final
            // avanza descartando espacios finales
            i = GoThroughSpaces(str, i);
        }
        // el resultado es exitoso si llegó al final sin otros caracteres
        resultado = str[i] == '\0';
    }
    if(str[i] == '.')
    {                 // si se detiene en un punto
        i++;
        // avanza al carácter siguiente
        if(isdigit(str[i]))
        {   // el caracter siguiente debe ser un dígito
            i = GoThroughDigits(str, i);
            // avanza descartando espacios finales
            i = GoThroughSpaces(str, i);
            // el resultado es exitoso si llegó al final sin otros caracteres
            resultado = str[i] == '\0';
        }
    }
    return resultado;
}
int IsInt(char str[])
{
    int resultado;
    int i;

    resultado = 0; // supone inicialmente que el resultado no será exitoso
    // avanza descartando los espacios iniciales
    i = GoThroughSpaces(str , 0);

    if(str[i] == '-' || str[i] == '+')
    {    // si se detiene en un signo
        i++;    // avanza al carácter siguiente
    }
	if(isdigit(str[i]))
	{   // el caracter siguiente debe ser un dígito
		i = GoThroughDigits(str, i);
		// avanza descartando espacios finales
		i = GoThroughSpaces(str, i);
		// el resultado es exitoso si llegó al final sin otros caracteres
		resultado = str[i] == '\0';
	}
    return resultado;
}
int ValidateRange(int num, int min, int max)
{
    if(num >= min && num <= max)
    {
        return 1;
    }
    return 0;
}
int ValidateDivision (float numero)
{
	int retorno;

	retorno = 0;

	if (numero != 0)
	{
		retorno = 1;
	}
	return retorno;
}
int ValidateIntFactorial (float numero)
{
	int retorno;

	retorno = 0;

	if (numero == (long) numero)
	{
		retorno = 1;
	}
	return retorno;
}
