#include "main.h"

/**
 * _strcat - concantinate strings
 * @dest:first parameter
 * @src: second parameter
 * Return: returns concant values
 */
char *_strcat(char *dest, char *src)
{
	int j, j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	for (j = 0 ; src[j] != '\0' ; j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i] = '\0';
	return dest;
}
