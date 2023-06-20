#include "main.h"
#include <stdio.h>
/**
 * main - print factor of 3 and 5
 *
 * Return: return numbers meltiple of 5 and 3
 */
int main(void)
{
	int num;
	int sum1 = 0;
	int sum2 = 0;
	int sum3 = 0;
	int sum = 0;

	for (num = 0 ; num < 1024 ; num++)
	{
		if (num % 3 == 0 && num % 5 == 0)
		{
			sum1 += num;
		}
		else if (num % 3 == 0)
		{
			sum2 += num;
		}
		else if (num % 5 == 0)
		{
			sum3 += num;
		}
	}
	sum = sum1 + sum2 + sum3;
	printf("%d\n", sum);
	return (0);
}
