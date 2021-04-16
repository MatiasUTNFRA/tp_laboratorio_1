#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "InputOutput.h"
#include "Menu.h"
#include "MathOperations.h"
#include "Validations.h"

/**
 * @fn double SumNumber(double, double)
 * @brief Recibe dos numeros de tipo double y efectua la suma.
 *
 * @param a: Primer operando.
 * @param b: Segundo operando.
 * @return Retorna el resultado de la operacion.
 */
double SumNumber(double a, double b)
{
	double r;

	r = a + b;

    return r;
}
/**
 * @fn double SubtractNumber(double, double)
 * @brief Recibe dos numeros de tipo double y efectua la resta.
 *
 * @param a: pimer operando.
 * @param b: segundo operando.
 * @return Retorna el resultado de la operacion.
 */
double SubtractNumber(double a, double b)
{
	double r;

	r = a - b;

    return r;
}
/**
 * @fn double MultiplyNumber(double, double)
 * @brief Recibe dos numeros de tipo double y efectua la multiplicacion.
 *
 * @param a: primer operando.
 * @param b: segundo operando.
 * @return Retorna el resultado de la operacion.
 */
double MultiplyNumber(double a, double b)
{
	double r;

	r = a * b;

    return r;
}
/**
 * @fn double DivideNumber(double, double)
 * @brief Recibe dos numeros de tipo double y efectua la division.
 *
 * @param a: primer operando.
 * @param b: segundo operando.
 * @return Retorna el resultado de la operacion.
 */
double DivideNumber(double a, double b)
{
	float r;

	r = a / b;

    return r;
}
/**
 * @fn unsigned long DoFactorial(long)
 * @brief Recibe un numero y efectua el factorial del mismo.
 *
 * @param a: numero a calcular.
 */
unsigned  long DoFactorial(long a)
{
	unsigned  long r;

    if(a < 0)
    {
        r = 0;
    }
    else
    {
        r = 1;

        while(a > 1)
        {
            r *= a;
            a--;
        }
    }
    return r;
}
