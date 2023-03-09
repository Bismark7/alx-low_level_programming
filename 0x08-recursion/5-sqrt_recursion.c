#include "main.h"

/**
 *_sqrt_recursion - returns the natural square root of a number
 *@n: number to  return the square root
 *
 *Return: If n has a natural square root - natural square root of n else does not
 */

int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
		return (-1);

	if (n == 1)
		return (1);

	return (find_sqrt(n, root));
}
