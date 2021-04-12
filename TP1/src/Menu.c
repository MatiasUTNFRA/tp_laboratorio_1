#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "InputOutput.h"
#include "Menu.h"
#include "MathOperations.h"
#include "Validations.h"
#define MIN 1
#define MAX 5

int menu(double a, double b)
{
	int opcion;

	printf ("\n<<< Calculadora >>>\n\n");
    system("cls");
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

    opcion = GetRange(MIN, MAX);

    return opcion;
}

