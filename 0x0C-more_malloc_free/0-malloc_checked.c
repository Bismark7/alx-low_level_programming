#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - Allocates memory using malloc
 * @b: Number of bytes to allocates
 *
 * Return: a pointer to the allocated memory.
 * if malloc fails, status value is equal to 98.
 */

void *malloc_checked(unsigned int b)
{
	char *a;

	a = malloc(b);
	if (a == NULL)
		exit(98);

	return (a);
}
