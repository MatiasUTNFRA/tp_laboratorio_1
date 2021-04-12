#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "InputOutput.h"
#include "Menu.h"
#include "MathOperations.h"
#include "Validations.h"

double SumNumber(double a, double b)
{
	double r;

	r = a + b;

    return r;
}

double SubtractNumber(double a, double b)
{
	double r;

	r = a - b;

    return r;
}

double MultiplyNumber(double a, double b)
{
	double r;

	r = a * b;

    return r;
}
double DivideNumber(double a, double b)
{
	float r;

	r = a / b;

    return r;
}
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
