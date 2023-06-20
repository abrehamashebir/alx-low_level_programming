#include "main.h"

/**
 * print_alphabet_x10 -  print alphabet 10 times
 *
 * Return: results
 */
void print_alphabet_x10(void)
{
	int n = 0;
	char ch;

	while (n < 10)
	{
		for (ch = 'a' ; ch <= 'z' ; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
		n++;
	}
}
