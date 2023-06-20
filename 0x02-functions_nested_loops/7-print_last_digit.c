#include "main.h"
/**
 * islasdigit - check if a number is last digit
 *
 * Returns: the last digit of a number
 */
int print_last_digit(int num)
{
	num %= 10;
	if (num < 0)
	{
		num *= -1;
	}
	_putchar('0' + num);
	return (num);

}
