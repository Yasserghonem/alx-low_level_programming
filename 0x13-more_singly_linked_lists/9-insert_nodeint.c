#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node in a linked list,
 * at a given position
 * @head: pointer to the first node in the list
 * @idx: index where the new node is added
 * @n: data to insert in the new node
 *
 * Return: pointer to the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
    unsigned int i;
    listint_t *ko;
    listint_t *so = *head;

    new = malloc(sizeof(listint_t));
    if (!ko || !head)
        return (NULL);

    ko->n = n;
    ko->next = NULL;

    if (idx == 0)
    {
        ko->next = *head;
        *head = ko;
        return (ko);
    }

    for (i = 0; so && i < idx; i++)
    {
        if (i == idx - 1)
        {
            ko->next = so->next;
            so->next = ko;
            return (ko);
        }
        else
            so = so->next;
    }

    return (NULL);
}
