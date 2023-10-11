#include "main.h"
/**
 * print_sign - print the sign of the number
 * @n : the number
 * Return: 1
**/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(11);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(5);
		return (-1);
	}
	else
	{
		_putchar(16);
		return (0);
	}
}
