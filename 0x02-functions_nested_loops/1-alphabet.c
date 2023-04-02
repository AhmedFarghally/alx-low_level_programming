#include "main.h"

/**
 * print_alphabet - This function is used to print alphabets in lower case
 * Return: Always 0
 */

void print_alphabet(void)
{
	char a;
	/**/
	for (a = 'a'; a <= 'z'; a++)
		_putchar(a);
	_putchar('\n');
}
