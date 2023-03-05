#include "main.h"

/**
 *_memset - fill memory with a constant byte
 *@s: starting address of memory to be filled
 *@b: value
 *@n: number of byte to be changed
 *
 *Return: a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int a = 0;

	for (; n > 0; a++)
	{
		s[a] = b;
		n--;
	}
	return (s);
}
