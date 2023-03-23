#include "variadic_functions.h"
/**
 * sum_them_all - adds all the numbers
 * @n: the number of parameters passed
 * Return: Always 0
 */
int sum_them_all(const unsigned int n, ...)
{
	int i, sum;

	va_list count;

	va_start(count, n);

	if (n == NULL)
	{
		return (0);
	}
	for (i = 0; i < n; i++)
		sum += va_arg(count, int);

	va_end (count);

		return (sum);
}
