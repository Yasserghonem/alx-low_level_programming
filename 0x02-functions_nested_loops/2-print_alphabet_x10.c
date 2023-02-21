#include "main.h"
/**
 * main - main block
 * Return (0)
 */

void print_alphabet_x10(void)
{
	int count = 0;
	int alpha;

	while (count < 10)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			_putchar(alpha);
		}
		_putchar('\n');
		count++;
	}
}
