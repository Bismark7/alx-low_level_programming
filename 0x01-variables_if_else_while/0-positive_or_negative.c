#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - entry point
 * return : 0 (success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	if (n<0)
	printf("if the number is less than 0: is negative\n");
	else if (n>0)
	printf("if the number is greater than 0: is positive\n");
	else
	printf("if the number is 0: is zero\n");

	return (0);
}
