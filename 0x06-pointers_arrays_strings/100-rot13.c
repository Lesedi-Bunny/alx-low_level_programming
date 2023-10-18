#include "main.h"
#include <stdio.h>

/**
 * rot13 - encodes a string using rot13
 * @s: pointer to string params
 *
 * Return: *s
 */

char *rot13(char *s)
{
	int q;
	int c;
	char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (q = 0; s[q] != '\0'; q++)
	{
		for (c = 0; c < 52; c++)
		{
			if (s[q] == data1[c])
			{
				s[q] = datarot[c];
				break;
			}
		}
	}
	return (s);
}
