#include "main.h"
/**
 * print_triangle - print triangle
 * @size: first parameter
 * Return: No return
 */
void print_triangle(int size)
{
	int i, j;

    for (i = size ; i > 0 ; i--) 
    {
	    for (j = 0 ; j <= size ; j++) 
	    {
		    if (j >= i)
                    {
                            _putchar('*');
                    }
                    else
                    {
                            _putchar(' ');
                    }
	    }
	    _putchar('\n');
    }
}
