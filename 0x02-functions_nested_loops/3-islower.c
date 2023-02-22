#include "main.h"

/**
 *_islower - Check if c is lowercase 
 *@c:character to check if lowcase and otherwise
 *
 *Return: 1 if lowercase and 0 otherwise
 */

int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
