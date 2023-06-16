#include <stdio.h>

/**
 * main - print single digit numbers separated by comma followed by space
 *
 * Return: always success
 */
int main(void)
{
	int num;

	for (num = '0' ; num <= '9' ; num++)
	{
		putchar(num);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
