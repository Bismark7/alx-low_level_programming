#include <unistd.h>

/**
 * _putchar - write the character c to stdout
 * @c: the char to print
 *
 * Return: return 0 on success
 * on error, -1 is returned, and errno is set appropriately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
