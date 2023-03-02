#include "main.h"

/**
 *_strncpy - copy a string with n
 *@dest: first parameter
 *@src: second parameter
 *@n: number of char to be copied
 *
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int a;

	a = 0;
	while (a < n && src[a] != '\0')
	{
		dest[a] = src[a];
		a++;
	}
	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}
	return (dest);
}
