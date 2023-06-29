#include "main.h"

/**
 * _strncat - print concat values
 * @dest: parameter that hold concat values
 * @src: variable to be concat
 * @n: number of characters
 * Return: return concat values
 */
char *_strncat(char *dest, char *src, int n)
{
	int a, b;

	a = 0;
	while ( dest[a] != '\0')
	{
		a++;
	}
	for (b = 0; b < n && src[b] != '\0'; b++)
	{
		dest[a] = src[b];
		a++;
	}
	dest[i] = '\0';
	return (dest);
}
