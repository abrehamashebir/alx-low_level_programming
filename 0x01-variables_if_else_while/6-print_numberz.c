#include <stdio.h>

/**
 * main - print numbers using putchar function
 *
 * Return: always success
 */
int main(void)
{
	int num;

	for (num = '0' ; num <= '9' ; num++)
		putchar(num);
	putchar('\n');
	return (0);
}
