#include "main.h"

/**
 *_abs - Computes the absolute value.
 *
 *@a: integer to compute its absolute value
 *Return: Return absolute value
 */

int _abs(int a)
{
	int x = a;
	int absolute;

	if (x < 0)
	{
		x = x * (-1);
	}
	absolute = x;
	return (absolute);
}
