#include "main.h"

/**
 * print_numbers - print numbers 0 to 9
 *
 * Return: always success
 */
void print_numbers(void)
{
	int num;

	for (num = '0' ; num <= '9' ; num++)
	{
		_putchar(num);
	}
	_putchar('\n');
}
