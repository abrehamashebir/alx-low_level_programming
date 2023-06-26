#include "main.h"

/**
 * swap_int - to swap numbers
 * @a: first parameter
 * @b: second parameter
 * Return: swap two numbers
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
