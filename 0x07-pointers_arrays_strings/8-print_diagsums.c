#include "main.h"
#include <stdio.h>

/**
 *print_diagsums - print the sum of two diagnonals
 *@size: size of metrix
 *@a: metrix of integers
 *
 *Return: void
 */

void print_diagsums(int *a, int size)
{
	int i;
	int sum1 = 1, sum = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i * size + i];
	}

	for (i = size - 1; i >= 0; i--)
	{
		sum += a[i * size + (size - i - 1)];
	}
	printf("%d, %d\n", sum1, sum);
}
