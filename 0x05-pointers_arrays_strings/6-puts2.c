#include "main.h"
#include <string.h>

/**
 * puts2 - puts function
 * @str: parameter for puts2 function
 *
 * Return: void
 */

void puts2(char *str)
{
	int len, i;

	len = strlen(str);
	for (i = 0; i < len; i += 2)
		_putchar(str[i]);
	_putchar('\n');
}
