#include "main.h"

/**
 * print_array -function prints n elements of an array followed by a new line
 * @a: array name
 * @n: is the number of elements OF the array to be printed
 * Return: a and n inputs
 */
void print_array(int *a, int n)
{
	int d;

	for (d = 0; d < (n - 1); d++)
	{
		printf("%d, ", a[d]);
	}
		if (d == (n - 1))
		{
			printf("%d", a[n - 1]);
		}
			printf("\n");
}
