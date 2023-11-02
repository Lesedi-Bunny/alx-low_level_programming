#include "main.h"
#include <stdlib.h>

/**
 * _calloc -this function allocates memory for an array of a number
 *           of elements each of an inputted byte size.
 * @nmemb: The number of elements.
 * @size: The byte size of each array element.
 *
 * Return: If nmemb = 0, size = 0, or the function fails - NULL.
 *         Otherwise - a pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *me;
	char *fill;
	unsigned int x;

	if (nmemb == 0 || size == 0)
		return (NULL);

	me = malloc(size * nmemb);

	if (me == NULL)
		return (NULL);

	fill = me;

	for (x = 0; x < (size * nmemb); x++)
		fill[x] = '\0';

	return (me);
}
