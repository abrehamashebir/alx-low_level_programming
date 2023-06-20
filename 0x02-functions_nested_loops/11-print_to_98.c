#include "main.h"
#include <stdio.h>
/**
 * print_to_9 - print numbers
 *@n: a parameter to test function
 * Return: numbers in order
 */
void print_to_98(int n)
{
	if (n == 98)
	{
		printf("%d", n);
	}
	else if (n > 98 )
	{
		while ( n>=98)
		{
			printf("%d", n);
			printf(",");
			printf(" ");
			n--;
		}
	}
	else
	{
		while ( n<=98)
		{
			printf("%d", n);
			printf(",");
			printf(" ");
			n++;
		}
	}
	printf("\n");
}
