#include "main.h"

/**
 * rev_string - reverse a string
 * @s: first paramter
 * Return: no return
 */
void rev_string(char *s)
{
	int len = 0;
	int i;
	char tmp;

	while (s[len] != '\0')
	{
		len++;
	}


	for (i = 0; i < (len / 2) ; i++)
       	{
		tmp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = tmp;
	}
}
