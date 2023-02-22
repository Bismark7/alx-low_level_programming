#include "main.h"

/**
 *print_last_digit - prints the last digit of an interger
 *@a: number to compute for the last digit
 *
 *Return: lastDigit (success)
 */
int print_last_digit(int a)
{
	int lastDigit;
	lastDigit = a % 10;
	if (lastDigit < 0)
	lastDigit = lastDigit * -1;

	_putchar(lastDigit + '0');
	return (lastDigit);
}
