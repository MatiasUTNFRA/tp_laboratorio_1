// Molet, Matías	1°F		DNI: 36.785.878

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "InputOutput.h"
#include "Menu.h"
#include "MathOperations.h"
#include "Validations.h"

int main(void)
{
	setbuf (stdout, NULL);

		double a, b;
		double suma;
		double resta;
		double multiplicacion;
		double division;
	    unsigned long  factorialA;
	    unsigned long factorialB;
	    int opcion;
	    int flag;

	    flag = 0;
	    a = 0;
	    b = 0;

	    opcion = menu(a, b);

	    while(opcion != 5)
	    {
	        switch(opcion)
	        {
				case 1:

					a = GetReal("Ingresar el valor de A: ");
					printf ("\n--Valor de A ingresado con exito--\n\n");
					break;

				case 2:

					b = GetReal("Ingresar el valor de B: ");
					printf ("\n--Valor de B ingresado con exito--\n\n");
					break;

	        case 3:
					suma = SumNumber (a, b);
					resta = SubtractNumber (a, b);
					multiplicacion = MultiplyNumber (a, b);

					if (ValidateDivision(b))
					{
						division = DivideNumber(a, b);
					}
					if (ValidateIntFactorial(a))
					{
						factorialA = DoFactorial(a);
					}
					if (ValidateIntFactorial(b))
					{
						factorialB = DoFactorial(b);
					}
					printf ("\n--Calculos realizados--\n\n");

					flag = 1;
					break;

	        case 4:
	        		if (flag == 0)
	        		{
	        			printf ("Error. Primero se deben calcular los valores ingresados y luego informar los resultados.\n");
	        			break;
	        		}
					ShowResults (a, b, suma, resta, multiplicacion, division, factorialA, factorialB);
					break;
	        }
	        system("pause");

	        opcion = menu(a, b);
	    }
	    printf ("Hasta la proxima!");
	    return 0;
}
