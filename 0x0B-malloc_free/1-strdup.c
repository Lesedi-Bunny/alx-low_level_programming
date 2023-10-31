#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	char *aaa;
	int z, s = 0;

	if (str == NULL)

		return (NULL);

	z = 0;

	while (str[z] != '\0')

		z++;

	aaa = malloc(sizeof(char) * (z + 1));

	if (aaa == NULL)

		return (NULL);

	for (s = 0; str[s]; s++)

		aaa[s] = str[s];
	return (aaa);
}
