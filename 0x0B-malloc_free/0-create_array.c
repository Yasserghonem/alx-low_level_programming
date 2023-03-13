#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char.
 * @size: the size of the array
 * @c: initial value
 *
 * Return: a pointer to the array, or NULL if it fails
 **/
char *create_array(unsigned int size, char c)
{
	char *tree;
	unsigned int i;

	if (size == 0 || tree == NULL)
	{
		return (NULL);
	}

	tree = (char *)malloc(size * sizeof(char));

	for (i = 0; i < size; i++)

		tree[i] = c;

			return (tree);
}
