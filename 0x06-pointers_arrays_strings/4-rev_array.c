#include "main.h"

/**
 * reverse_array -print reversed array
 * @a: array pinter
 * @n: array size
 * Return: no return
 */
void reverse_array(int *a, int n)
{
	int tmp, i = 0;

	for (; i < n - 1 ; i++)
	{
		tmp = a[i];
		a[i] = a[n - 1];
		a[n - 1] = tmp;
		n--;
	}
}
