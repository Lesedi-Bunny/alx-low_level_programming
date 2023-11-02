#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked -this function allocates memory using malloc.
 * @b: The number of bytes to be allocated.
 *
 * Return: A pointer to the allocated memory.
 */
void *malloc_checked(unsigned int b)
{
	void *mry = malloc(b);

	if (mry == NULL)
	{
		exit(98);
	}

	return (mry);
}
