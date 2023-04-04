#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * get_nodeint_at_index - the nth node of a listint_t linked list.
 * @head: pointer of the first node
 * @index: index is the index of the node
 *
 * Return: pointer of Index
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int l;

	if (head == NULL)
		return (NULL);
	for (l = 0; l < index; i++)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
	}
	return (head);
}
