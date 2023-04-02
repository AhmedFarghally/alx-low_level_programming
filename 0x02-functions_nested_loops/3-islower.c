#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 * _islower - Returns 1 if c is lowercase, Returns 0 otherwise
 * islower - check the char
 * @c: input
 * Return: 1 or 0
 */

int _islower(int c)
{
	int r;
	/**/
	if (islower(c) > 0)
		r = 1;
	else
		r = 0;
	return (r);
}
