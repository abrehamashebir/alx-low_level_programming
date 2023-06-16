#include <stdio.h>

/*
 * main -print capital and small letter
 *
 * Returrn: always success
 */
int main (void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z' ;  ch++)
		putchar(ch);
	
	for (ch = 'A' ; ch <= 'Z' ; ch++)
		putchar(ch);

	putchar('\n');
	return (0);
}
