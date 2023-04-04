#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * pop_listint - deletes the head node
 * @head: a double pointer
 *
 *Return: empty
 */
int pop_listint(listint_t **head)
{
	listint_t *OMG;
	int j;

	if (head == NULL || *head == NULL)
		return (0);
	OMG = *head;
	*head = OMG->next;
	j = OMG->n;
	free(OMG);
	return (j);
}
