#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * free_listint - function that frees a listint_t list
 * @head: list
 */

void free_listint(listint_t *head)
{
	listint_t *ptro;

	if (head == NULL)
	{
		return;
	}

	while (head != NULL)
	{
		ptro = head;
		head = head->next;
		free(ptro);
	}
}
