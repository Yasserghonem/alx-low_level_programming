#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: the source string
 *
 * Return: returns a pointer to the duplicated string.
 * It returns NULL if insufficient memory was available
 */
char *_strdup(char *str)
{
	char *copy;

	int i = 0, h;

	if (str == NULL)
	{
		return (NULL);
	}

	copy = (char *)malloc(sizeof(char) * i);

	for (h = 0; h < i; h++)
		copy[h] = str[h];
	copy[i] = '\0';
	return (copy);
}
