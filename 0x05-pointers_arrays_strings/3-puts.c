#include "main.h"
#include <string.h>

/**
 *_puts - print string to stdout
 *str: parameter to _puts function
 *
 *Return: void
 */

void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\0');
}
