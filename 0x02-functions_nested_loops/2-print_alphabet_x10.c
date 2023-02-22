#include "main.h"

/**
 *print_alphabet_x10 - print alphabet 10x in lowercase
 *
 *Return: On success 1
 */

void print_alphabet_x10(void)
{
	char a, b;

	for (b = 0; b < 10; b++)
	{
		for (a = 'a'; a <= 'z'; a++)
		{
		_putchar(a);
	}
		_putchar('\n');
	}
}

