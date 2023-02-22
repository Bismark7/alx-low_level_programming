#include "main.h"
#include <unistd.h>

/**
 *print_alphabet - prints all alphabet in lowercase
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
