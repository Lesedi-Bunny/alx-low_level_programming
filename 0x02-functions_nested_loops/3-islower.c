#include "main.h"
/**
 * _islower - checks if the alphabet is lowercase
 * @b: this character checks if it is lowercase
 * Return: 0 - if lowercase
**/
int _islower(int b)
{
	if (b >= 'a' && b <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
