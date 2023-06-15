#include <stdio.h>

/**
 * main : entry point
 *
 * return : always zero
 */
int main(void)
{
	int num1;
	long long int  num2;
	char char1;
	long int num3;
	print("Size of int: %ul byte(s)",sizeof(num1));
	print("Size of long long int: %ul byte(s)",sizeof(num2));
	print("Size of char: %ul byte(s)",sizeof(char1));
	print("Size of long int: %ul byte(s)",sizeof(num3));
	return (0);

}
