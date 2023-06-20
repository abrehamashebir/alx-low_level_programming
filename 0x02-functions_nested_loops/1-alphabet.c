#include "main.h"

/**
 * print_alphabet  - print putchar
 *
 * Return: always success
 */
void print_alphabet(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
