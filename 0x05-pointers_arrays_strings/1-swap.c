#include "main.h"

/**
 * swap_int - swaps value of two integers
 * @a: first parameter of the argument swap_int
 * @b: second parameter of the argument swap_int
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int number;

	number = *a;/*swap first integer with *a */
	*a = *b;/* assign value to *b  */
	*b = number;/* swap with second integer (number can be any int variable */
}
