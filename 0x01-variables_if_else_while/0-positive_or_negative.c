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

	if (n>0)
	printf(" is positive %d\n", n);
	else if (n<0)
	printf("is negative %d\n", n);
	else
	printf("is zero %d\n", n);

	return (0);
}
