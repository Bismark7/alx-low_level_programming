#include <stdio.h>

/*
 *main - Entry point
 *@argc: number of argument on the command line
 *@argv: an array of string
 *
 * return: 0 on success;
 */

int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", argv[0]);
	return 0;
}
