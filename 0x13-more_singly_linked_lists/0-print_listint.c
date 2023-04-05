#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint - print all elements of s listint_t
 *@h: poiter variable to be printered
 *
 *Return: 0 on success
 */

size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}

	return (num);
}
