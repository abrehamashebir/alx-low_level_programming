#include "main.h"

/**
 * string_toupper
 * @str: first parameter
 * Return: returns upper case value
 */
char *string_toupper(char *str)
{
	int i =  0;

	for ( ; str[i] != '\0' ; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
	}
	return (str);
}
