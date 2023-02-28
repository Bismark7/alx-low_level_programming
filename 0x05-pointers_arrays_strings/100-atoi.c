#include "main.h"
#include <string.h>

/**
 *_atoi - converts string to integer
 *@s: parameter
 *
 * Return: integer
 */

int _atoi(char *s)
{
	int a, b, c, n, len, deci;

	a = 0;
	b = 0;
	c = 0;
	n = 0;
	len = 0;
	deci = 0;

	while (s[len] != '\0')
	len++;

	while (a < len && c == 0)
	{
		if (s[a] == '-')
			++b;
		if (s[a] >= '0' && s[a] <= '9')
		{
			deci = s[a] - '0';
			if (b % 2)
			deci = -deci;
			n = n * 10 + deci;
			c = 1;
			if (s[a + 1] < '0' || s[a + 1] > '9')
				break;
			c = 0;
		}
		a++;
	}
	if (c == 0)
		return (0);
	return (n);
}
