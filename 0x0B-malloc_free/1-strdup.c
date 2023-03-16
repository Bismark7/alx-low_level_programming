#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: pointer to allocate memory
 *
 * Return: return poiter on success and NULL if memory is not available
 */

char *_strdup(char *str)
{
	char *a;
	int i, j;

	j = 0;
	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;

	a = malloc(sizeof(char) * (i + 1));

	if (a == NULL)
		return (NULL);

	for (j = 0; str[j]; j++)
		a[j] = str[j];

	return (a);
}
