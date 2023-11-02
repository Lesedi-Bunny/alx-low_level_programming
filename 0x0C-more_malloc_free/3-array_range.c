#include "main.h"
#include <stdlib.h>

/**
 * array_range -this function creates an array of integers 
 *               from min to max, inclusive.
 * @min: The first value of the array.
 * @max: The last value of the array.
 *
 * Return: If min > max or the function fails - NULL.
 *         Otherwise - a pointer to the newly created array.
 */
int *array_range(int min, int max)
{
	int *ary, ind, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	ary = malloc(sizeof(int) * size);

	if (ary == NULL)
		return (NULL);

	for (ind = 0; ind < size; ind++)
		ary[ind] = min++;

	return (ary);
}
