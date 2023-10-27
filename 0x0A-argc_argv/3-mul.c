#include <stdio.h>
#include "main.h"
/**
 * _atoi -this function converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int a, b, c, x, y, value;

	a = 0;
	b = 0;
	c = 0;
	x = 0;
	y = 0;
	value = 0;

	while (s[x] != '\0')
		x++;
	while (a < x && y == 0)
	{
		if (s[a] == '-')
			++b;

		if (s[a] >= '0' && s[a] <= '9')
		{
			value = s[a] - '0';

			if (b % 2)
				value = -value;
			c = c * 10 + value;
			y = 1;
			if (s[a + 1] < '0' || s[a + 1] > '9')

			break;
		y = 0;
		}
		a++;
	}
	if (y == 0)

		return (0);
	return (c);
}

/**
 * main -this function multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int result, num1, num2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);

	result = num1 * num2;

	printf("%d\n", result);
	return (0);
}
