#include "main.h"
/**
 * _puts - prints string
 * @str: first parameter
 * Return: return atrings
 */
void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}

	_putchar('\n');
}
