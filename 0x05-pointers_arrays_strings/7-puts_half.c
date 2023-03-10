#include "main.h"
#include <string.h>

/**
 *puts_half - print half of a string
 *@str: parameter for put_half
 *
 *Return: void
 */

void puts_half(char *str)
{
	int x, y, i;

	x = strlen(str);
	if (x % 2 == 1)
		y = x / 2 + 1;
	else
		y = x / 2;

	for (i = y; i < x; i++)
		_putchar(str[i]);
	_putchar('\n');
}
