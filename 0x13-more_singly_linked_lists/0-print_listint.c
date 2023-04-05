#include "lists.h"
#include <stdio.h>

/**
 * print_listint - print all elements of s listint_t
 *@h: poiter variable to be printered
 *
 *Return: 0 on success
 */

size_t print_listint(const listint_t *h)

	h = malloc(sizeof(const listint_t);

	if (h == NULL)
		printf("listint is empty");
		else if (h != NULL)
	printf("%d\n", h->n);
	h = h->next;
	return (h);
}
