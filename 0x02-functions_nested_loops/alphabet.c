#include <unistd.h>

/**
 *print_alphabet - Print alphabet
 *
 *Return: Always 0;
 */

void print_alphabet(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		return (print_alphabet());
	}
}

