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

	if (n<0){
		printf("is negative");
	}	else if (n>0){
				printf("is positive");
	}  else {
		printf("is zero");
	}

	return (0);
}
