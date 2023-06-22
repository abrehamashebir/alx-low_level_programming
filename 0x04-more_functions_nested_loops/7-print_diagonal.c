#include "main.h"

/**
 * void print_diagonal - print diagonals
 * @n: first parameter
 * Return: no return
 */
void print_diagonal(int n)
{
	int i, j;

	if(n <= 0)
		_putchar('\n');
	for (i = 0 ; i <= n ; i++)
	{
		for (j = 0 ; j <= n ; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
