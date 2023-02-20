#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (success)
 */

int main(void)
{
	int base;

	for (base = 48; base < 58; base++)
		putchar(base);
	for (base = 'a'; base <= 'f'; base++)
		putchar(base);
	putchar('\n');
	return (0);
}
