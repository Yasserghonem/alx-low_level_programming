#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * sum_listint - sum of all the data (n) of a listint_t linked list.
 * @head: pointer to the first node
 *
 * Return: sum all the data
 */
int sum_listint(listint_t *head)
{
	int suu = 0;

	while (head != NULL)
	{
		suu += head->n;
		head = head->next;
	}
	return (suu);
}
