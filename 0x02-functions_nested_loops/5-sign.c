#include "main.h"

 /**
  *print_sign - check the sign of a number
  *
  *@n: Number to check it sign
  *Return: 1 if n > 0 and 1- if n <  0  else 0 if n = 0
  */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
		else if (n < 0)
		{
			_putchar('-');
			return (-1);
		}
			else
			{
				_putchar('0');
				return (0);
			}
}
