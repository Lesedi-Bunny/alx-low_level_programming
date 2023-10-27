#include "main.h"
/**
 * _puts -this function makes a string to stdout
 * @str: the string to be utilised
 * _putchar- prints a new line
 */
void _puts(char *str)
{
	while (*str)
	_putchar(*str++);

	_putchar('\n');
}
