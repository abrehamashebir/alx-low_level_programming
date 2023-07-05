#include "main.h"

/**
 * _puts_recursion - print string
 * @s: -first parameter
 * Return: no return
 */
void _puts_recursion(char *s)
{
	int i = 0;

	for (; s[i] != '\0' ; i++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
