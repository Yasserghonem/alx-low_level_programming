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
	listint_t *ptr;

	if (head == NULL)
	{
		return (NULL);

			ptr = malloc(sizeof(listint_t));
	}
		if (ptr == NULL)
			return (NULL);

		ptr->n = n;
			ptr->next = *head;
			*head = ptr;

			return (ptr);
}
