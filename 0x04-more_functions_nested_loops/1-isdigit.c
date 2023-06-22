#include "main.h"

/**
 * _isdifgit - print 1 if digit print 0 if not digit
 * @c: fitst parameter
 * Return:0 or 1
 */
int _isdigit(char c)
{
	if(c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
