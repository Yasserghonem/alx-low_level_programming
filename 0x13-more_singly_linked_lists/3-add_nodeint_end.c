#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
  * add_nodeint_end - add node at end of a listint_t list.
  *
  * @head: head of double pointer
  * @n: int add the list
  * Return: NULL if it failed
  */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *LOL;
	listint_t *BTW;

	if (head == NULL)
		return (NULL);
	LOL = malloc(sizeof(listint_t));
	if (LOL == NULL)
		return (NULL);
	LOL->n = n;
	LOL->next = NULL;
	if (*head == NULL)
	{
	*head = LOL;
		return (LOL);
	}
	BTW = *head;
	while (BTW->next != NULL)
	{
		BTW = BTW->next;
	}
	BTW->next = LOL;
	return (LOL);
}
