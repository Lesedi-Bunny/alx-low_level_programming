#include <stdio.h>
/**
 * main-this function displays alphabetic characters in reverse
 * Return: 0
**/
int main(void)
{
	char f;

	for (f = 'z'; f <= 'a'; f--);
	putchar(f);
	putchar('\n');
	return (0);
}
