#include "main.h"
#include <stdlib.h>

/**
 * argstostr - main entry
 * @ac: int input
 * @av: double pointer array
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
	int a, c, r = 0, l = 0;
	char *str;

	if (ac == 0 || av == NULL)

		return (NULL);

	for (a = 0; a < ac; a++)

	{

		for (c = 0; av[a][c]; c++)

			l++;
	}
	l += ac;

	str = malloc(sizeof(char) * l + 1);

	if (str == NULL)

		return (NULL);

	for (a = 0; a < ac; a++)

	{
	for (c = 0; av[a][c]; c++)

	{
		str[r] = av[a][c];
		r++;
	}
	if (str[r] == '\0')
	{
		str[r++] = '\n';
	}
	}
	return (str);
}
