#include "main.h"

/**
 *factorial - returns factorial of a given mumber
 *@n: number to find the factorial
 *
 *Return: fact
 */

int factorial(int n)
{
	int fact = n;

	if (n < 0)
		return (-1);

	else if (n >= 0 && n <= 1)
		return (1);

	fact *= factorial(n - 1);

	return (fact);
}
