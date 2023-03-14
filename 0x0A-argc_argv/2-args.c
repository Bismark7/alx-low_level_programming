#include <stdio.h>

/**
 * main - Entry point
 * @argc: count arguments receives
 * @argv: array of string
 *
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
