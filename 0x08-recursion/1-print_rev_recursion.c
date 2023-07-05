#include "main.h"

/**
 * _print_rev_recursion - prints string in reverse
 * @s: first parameter
 * Return: no return value
 */
void _print_rev_recursion(char *s)
{
	f (s[0] != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(s[0]);
	}
}
