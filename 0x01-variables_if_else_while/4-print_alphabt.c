#include <stdio.h>

/**
 * main - entry point
 *
 * return: 0 (success)
 */

int main(void)
{
	char alphabet = 'a';

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	if (alphabet !=( 'q' && 'e'))
	{
	putchar(alphabet);
	putchar('\n');
	}

	return (0);
}