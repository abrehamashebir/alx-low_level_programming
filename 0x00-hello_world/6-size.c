#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num1;
	long long int  num2;
	char char1;
	long int num3;
	float num4;

	printf("Size of char: %lu byte(s)\n", (unsigned long)sizeof(char1));
	printf("Size of int: %lu byte(s)\n", (unsigned long)sizeof(num1));
	printf("Size of long int: %lu byte(s)\n", (unsigned long)sizeof(num3));
	printf("Size of long long int: %lu byte(s)\n", (unsigned long)sizeof(num2));
	printf("Size of float: %lu byte(s)\n", (unsigned long)sizeof(num4));
	return (0);

}
