#include "main.h"

/**
 * _strlen - return the length of string
 * @s: first parameter
 * Return: the length of string
 */
int _strlen(char *s)
{
	int c = 0;

	for (; *s != '\0'; s++)
	{
		c++;
	}

	return (c);
}
