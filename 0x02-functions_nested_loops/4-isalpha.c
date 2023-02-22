#include "main.h"

/**
 *_isalpha - check if alphabet is lower or upper case and otherwise
 *@c: character that retuns boolean value when statement is true or otherwise
 *
 *Return: 1 if alpha is lowercase or uppercase and otherwise
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
