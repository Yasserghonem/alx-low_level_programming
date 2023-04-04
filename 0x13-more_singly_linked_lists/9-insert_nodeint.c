include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - inserting a new node at agiven postion
 * @head: double pointer
 * @idx: index of the node
 * @n: new node value
 *
 * Return: the address of new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int l;
	listint_t *OMG, *LOL;

	if (head == NULL)
		return (NULL);
	if (idx != 0)
	{
		OMG = *head;
		for (l = 0; l < idx - 1 && OMG != NULL; l++)
		{
			OMG = OMG->next;
		}
		if (OMG == NULL)
			return (NULL);
	}
	LOL = malloc(sizeof(listint_t));
	if (LOL == NULL)
		return (NULL);
	LOL->n = n;
	if (idx == 0)
	{
		LOL->next = *head;
		*head = LOL;
		return (LOL);
	}
	LOL->next = OMG->next;
	OMG->next = LOL;
	return (LOL);
}
