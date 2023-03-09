#include "main.h"

/**
 *is_divisible - checks if a number is divisible
 *@num: the number to be checked
 *@div: the divisor
 *
 *Return: number if divisble (0) or not divisible (1) on success
 */

int is divisible(int num, int div);
int is_prime_number(int n);

int is_prime_number(int n)
{
	if (num % div == 0)
		return (0);

	if (div == num / 2)
		return (1);

	return (is_divisible(num, div + 1));
}

/**
 * is_prime_number - says if an integer is a prime number or not
 * @n: number to evaluate
 *
 * Return: 1 if n is a prime number, 0 if not on (success)
 */



int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}
