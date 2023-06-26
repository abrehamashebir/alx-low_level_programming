#include "main.h"
/**
 * print_rev -print string in reverse
 * @s: first parameter
 * Return: No return
 */
void print_rev(char *s)
{
	int i, c, k;
	char *a, b;

	a = s;

	while (s[c] != '\0')
	{
		c++;
	}

	for (k = 1; k < c; k++)
	{
		a++;
	}

	for (i = 0; i < (c / 2); i++)
	{
		b = s[i];
		s[i] = *a;
		*a = b;
		a--;
	}
}

