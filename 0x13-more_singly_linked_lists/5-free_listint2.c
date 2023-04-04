#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * free_listint2 - function that frees a listint_t list
 * @head: a double pointer of lists
 *
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *OMG;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		OMG = (*head)->OMG;
		free(*head);
		*head = OMG;
	}
}