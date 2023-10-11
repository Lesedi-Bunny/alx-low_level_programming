#include "main.h"
/**
 * print_alphabet_x10- this functions prints 10 times the alphabet in lowercase
 * Return: 0
**/
void print_alphabet_x10(void)
{
	char q;

	int a = 0;

		while (a <= 9)
		{
			for (q = 'a'; q <= 'z'; q++)
			{
				_putchar(q);
			}
			_putchar('\n');
			a++;
		}
}
