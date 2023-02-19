#include <stdio.h>

/**
 * main- Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char alphabet;

	/*this will print lowercase alphabet*/
	for (alphabet = 'a'; alphabet <= 'z'; ++alphabet)
                putchar(alphabet);
	/* this will print uppercase alphabet with new line*/
	for (alphabet = 'A'; alphabet <= 'Z'; ++alphabet)
		putchar(alphabet);
	putchar('\n');



	return (0);
}
