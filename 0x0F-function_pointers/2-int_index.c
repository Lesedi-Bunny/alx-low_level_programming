#include "function_pointers.h"

/**
* int_index -this function searches for an int
* @array: parameter 1
* @size: parameter 2
* @cmp: parameter 3
*
* Return: 0
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size > 0)
	{
	if (array != NULL && cmp != NULL)
		{
		while (i < size)
			{
			if (cmp(array[i]))
			return (i);
			i++;
			}
		}
	}
	return (0);
}
