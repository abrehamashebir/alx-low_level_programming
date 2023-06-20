#include "main.h"
/**
 *  print_sign - print if character is sign
 *
 * @n  return 1 or -1
 *  Returns: sign
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
