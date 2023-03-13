#include "main.h"

/**
 *_strcmp - compares string values and return 0 if equal
 *@s1: first string parameter
 *@s2: second string parameter
 *
 * Return: 0 (success)
 */

int _strcmp(char *s1, char *s2)
{
	int a;

	a = 0;
	while (s1[a] != '\0' && s2[a] != '\0')
	{
		if (s1[a] != s2[a])
		{
			return (s1[a] - s2[a]);
		}
		a++;
	}
	return (0);

}
