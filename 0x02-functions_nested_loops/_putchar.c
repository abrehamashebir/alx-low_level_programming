#include <unistd.h>

/**
 * _putchar - print characters
 *
 * Return: 1 on success
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
