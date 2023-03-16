#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: parameter 1
 * @s2: parameter 2
 *
 * Return: pointer to new string (Success), or NULL (Error)
 */

char *str_concat(char *s1, char *s2)
{
	char *cat;
	int i, ci;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i = ci = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[ci] != '\0')
		ci++;
	cat = malloc(sizeof(char) * (i + ci + 1));

	if (cat == NULL)
		return (NULL);
	i = ci = 0;
	while (s1[i] != '\0')
	{
		cat[i] = s1[i];
		i++;
	}

	while (s2[ci] != '\0')
	{
		cat[i] = s2[ci];
		i++, ci++;
	}
	cat[i] = '\0';
	return (cat);

}
