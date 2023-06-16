#include <stdio.h>

/**
 * main - print alphabet in reverse order
 *
 * Return: always success
 */
int main(void)
{
	char ch;

	for (ch = 'z' ; ch >= 'a' ; ch--)
		putchar(ch);
	putchar('\n');
	return (0);
}
