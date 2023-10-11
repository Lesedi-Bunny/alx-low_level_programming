#include "main.h"
/**
 * print_alphabet - this function prints an alphalbet in lowercase
 * Return: 0
**/
void print_alphabet(void)
{
	char r;

	for (r = 'a' ; r <= 'z' ; r++)
	{
		_putchar(r);
	}
	_putchar('\n');
}
