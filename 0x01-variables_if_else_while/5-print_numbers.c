#include <stdio.h>

/*
 * main - print numbers with single digit
 *
 * Return: always success
 */
int main(void)
{ 
	int num;

	for (num = 0 ; num < 10 ; num++)
		printf("%d", num);
	printf("\n");
	return (0);
}

