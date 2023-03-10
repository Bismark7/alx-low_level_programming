#include "main.h"

/**
 *_pow_recursion - returns the value of x raised to the power of y
 *@x: number to be raised
 *@y: power of a number
 *
 *Return: value of x to the power y
 */

int _pow_recursion(int x, int y)
{
	int value = x;

	if (y < 0)
		return (-1);

	else if (y == 0)
		return (1);

	value *= _pow_recursion(x, y - 1);

	return (value);
}
