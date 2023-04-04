#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index
 * @head: double pointer
 * @index: index of node
 *
 * Return: pointer to the index node
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int l;
	listint_t *OMG, *next;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		next = (*head)->next;
		free(*head);
		*head = next;
		return (1);
	}
	OMG = *head;
	for (l = 0; l < index - 1; l++)
	{
		if (OMG->next == NULL)
			return (-1);
		OMG = OMG->next;
	}
	next = OMG->next;
	OMG->next = next->next;
	free(next);
	return (1);

}
