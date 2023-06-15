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
	float num4;
	printf("Size of char: %lu byte(s)\n",sizeof(char1));
	printf("Size of int: %lu byte(s)\n",sizeof(num1));
	printf("Size of long int: %lu byte(s)\n",sizeof(num3));
	printf("Size of long long int: %lu byte(s)\n",sizeof(num2));
	printf("Size of float: %lu byte(s)\n",sizeof(num4));
	return (0);

}
