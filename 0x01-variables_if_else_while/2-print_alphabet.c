#include <stdio.h>

/**
 * main- Entry point
 *
 * return: Always 0 (success)
 */


int main(void)
{
	char alphabet = 'a';

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
	putchar(alphabet);
	}
	putchar('\n');
	return (0);
}
