#include <stdio.h>

/**
 * main - Entry point
 * @argc: count argument
 * @argv: array of string
 *
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
