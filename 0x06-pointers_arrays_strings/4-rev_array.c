#include "main.h"
/**
 * reverse_array -this function reverses an array of integers
 * @a: array
 * @n: number of elements of array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int g;
	int t;

	for (g = 0; g < n--; g++)
	{
		t = a[g];
		a[g] = a[n];
		a[n] = t;
	}
}
