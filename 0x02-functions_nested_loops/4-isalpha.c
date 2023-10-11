#include "main.h"
/**
 * _isalpha - checks for the alphabetic character
 * @c:The character
 * Return: 1-if it is alphabetic
**/
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
