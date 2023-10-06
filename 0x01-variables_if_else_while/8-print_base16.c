#include <stdio.h>
/**
 * main-this function displays characters of the base 16 range
 * Return: 0
**/
int main(void)
{
	int y;
	char letter;

	for (y = 0; y < 10; y++);
	putchar((y % 10) + '0');
	for (letter = 'a'; letter <= 'f'; letter++);
	putchar(letter);
	putchar('\n');
	return (0);
}


