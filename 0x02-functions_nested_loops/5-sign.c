#include "main.h"

/**
 * print_sign - returns 1 if num is +, - if num < 0 0 otherwise
 * @num: integer to be tested
 * Return: 1, -1 or 0
 */
int print_sign(int  num)
{
	if (num > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (num == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
