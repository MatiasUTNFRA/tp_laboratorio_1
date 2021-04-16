#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "InputOutput.h"
#include "Menu.h"
#include "MathOperations.h"
#include "Validations.h"

/**
 * @fn int menu(double, double)
 * @brief Menu principal de la calculadora, muestra la interfaz y el valor de los operandos a calcular.
 *
 * @param a: pirmer operando.
 * @param b: segundo operando.
 * @return Retorna la opcion elegida por el usuario.
 */
int menu(double a, double b)
{
	int opcion;
	system("cls");
	printf ("\n<<< Calculadora >>>\n\n");
    printf ("Seleccione la opcion deseada: \n");
    printf(" 1. Ingresar 1er operando A = %.2lf\n", a);
    printf("2. Ingresar 2do operando B = %.2lf\n", b);
    printf("3. Calcular todas las operaciones\n");
    printf("\tCalcular la suma (%.2lf + %.2lf)\n", a, b);
    printf("\tCalcular la resta (%.2lf - %.2lf)\n", a, b);
    printf("\tCalcular la division (%.2lf / %.2lf)\n", a, b);
    printf("\tCalcular la multiplicacion (%.2lf * %.2lf)\n", a, b);
    printf("\tCalcular el factorial (%.2lf! y %.2lf!)\n", a, b);
    printf("4. Informar resultados\n");
    printf("5. Salir\n");

    opcion = GetNumber(MIN, MAX);

    return opcion;
}
