#include "main.h"
#include <string.h>

/**
 * rev_string - reversing string
 * @s: parameter of rev_string
 *
 * Return: void
 */

void rev_string(char *s)
{
	char tmp;
	int i, length, lengthrev;

	length = 0;
	lengthrev = 0;

	while (s[length] != '\0')
		length++;

	lengthrev = length - 1;
	for (i = 0; i < length / 2; i++)
	{
		tmp = s[i];
		s[i] = s[lengthrev];
		s[lengthrev] = tmp;
		lengthrev -= 1;
	}

}
