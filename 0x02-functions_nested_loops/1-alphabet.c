#include "main.h"
#include <unistd.h>

/**
 *main - Entry point
 *
 *Return: On success 1
 */

void print_alphabet(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
		_putchar(a);
	_putchar('\n');
}
