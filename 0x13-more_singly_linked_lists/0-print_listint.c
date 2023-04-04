#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"


/**
 * print_listint - function that prints all the elements of a listint_t list
 * @h: list
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t numNodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);

		numNodes += 1;

		h = h->next;
	}

	return (numNodes);
}
