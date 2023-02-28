#include "main.h"

/**
 * print_array - function that prints n elements of an array
 * @p: array/ pointer name
 * @n: is the number of elements OF the array to be printed
 * Return: void
 */

void print_array(int *p, int n)
{
	int i;

	for (i = 0; i < (n - 1); i++)
		printf("%d, ", p[i]);

		if (i == (n - 1))
		{
			printf("%d", p[n - 1]);
		}
			printf("\n");
}
