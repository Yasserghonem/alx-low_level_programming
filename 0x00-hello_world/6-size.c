#include <stdio.h>
/**
 * main - main block
 * Return: 0
 */
int main(void)
{
	printf("size of char : %lu byte(s)\n", sizeof(char));
	printf("size of int : %d byte(s)\n", sizeof(int));
	printf("size of long int : %ld byte(s)\n", sizeof(long int));
	printf("size of long long int : %lld byte(s)\n", sizeof(long long int));
	printf("size of float : %f byte(s)\n", sizeof(float));
	return (0);
}
