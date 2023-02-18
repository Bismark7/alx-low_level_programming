#include <stdio.h>

/**
 * main - entry point
 * return: 0 (success)
 */

int main(void) {
	char alphabet;
/* this will print uppercase alphabet with new line*/

	for (alphabet = 'A'; alphabet <= 'Z'; ++alphabet){
		putchar(alphabet);
	}

	putchar('\n');

/*this will print lowercase alphabet*/

	for (alphabet ='a'; alphabet <= 'z'; ++alphabet){
		putchar(alphabet);
	}


	return (0);
}
