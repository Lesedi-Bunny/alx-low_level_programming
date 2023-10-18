#include "main.h"
/**
 * _strncat -this function concatenates two strings
 * using at most n bytes from src
 * @dest: input value
 * @src: input value
 * @n: input value
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int r;
	int s;

	r = 0;
	while (dest[r] != '\0')
	{
		r++;
	}
	s = 0;
	while (s < n && src[s] != '\0')
	{
	dest[r] = src[s];
	r++;
	s++;
	}
	dest[r] = '\0';
	return (dest);
}
