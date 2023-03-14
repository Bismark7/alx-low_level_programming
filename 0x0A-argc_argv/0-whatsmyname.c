#include <stdio.h>
#include "main.h"

/**
 *main - Entry Point
 *@argc: number of argument on the command line
 *@argv: an array of string
 *
 *Return: 0 on success;
 */

int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", argv[0]);
	return (0);
}
