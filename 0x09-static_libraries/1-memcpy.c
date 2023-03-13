#include "main.h"

/**
 *_memcpy - copy n bytes from memory area source to memory area destination
 *@dest: where memory is stored
 *@src: where memory is copied
 *@n: number of byte
 *
 *Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int a = 0;
	int b = n;

	for (; a < b; a++)
	{
		dest[a] = src[a];
		n--;
	}
	return (dest);
}
