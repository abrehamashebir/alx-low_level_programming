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
	printf("Size of int: %ul byte(s)\n",sizeof(num1));
	printf("Size of long long int: %ul byte(s)\n",sizeof(num2));
	printf("Size of char: %ul byte(s)\n",sizeof(char1));
	printf("Size of long int: %ul byte(s)\n",sizeof(num3));
	return (0);

}
