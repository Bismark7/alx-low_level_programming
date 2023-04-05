#include "lists.h"
#include <stdio.h>

/**
 * print_listint - print all elements of s listint_t
 *@h: poiter variable to be printered
 *
 *Return: 0 on success
 */

size_t print_listint(const listint_t *h)
{
	size_t number = 0;

	while (h)
	{
		printf("%d\n", h->n);
		number++;
		h = h->next;
	}

	return (number);
}
