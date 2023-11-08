#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - this function adds 2 numbers
 * @a: first number
 * @b: second number
 *
 * Return: sum of the a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - this function subtracts 2 numbers
 * @a: first number
 * @b: second number
 *
 * Return: the difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - this function multiplies 2 numbers
 * @a: first number
 * @b: second number
 *
 * Return: product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - this function divides 2 numbers
 * @a: first number
 * @b: second number
 *
 * Return: quotient of a and b
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - this function returns the remainder of 2 numbers
 * @a: first number
 * @b: second number
 *
 * Return: remainder of a and b
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
