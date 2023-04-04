#include <stdio.h>
#include "lists.h"

/**
 * print_listint - print all elements of listint_t list.
 *
 * @h: head of linkedlist node
 *
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t lol = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++
	}
	return (lol);
}
