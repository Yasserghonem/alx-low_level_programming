#include "main.h"

/**
*print_most_numbers - prints
* owned by Bwave ICT
*Return: void
*/

void print_most_numbers(void)
{
	int c;
	
	while (c != '2' && c != '4')
	{
		for (c = '0'; c <= '9'; c++)
		{
			_putchar(c);
		}
	}
	_putchar('\n');
}
