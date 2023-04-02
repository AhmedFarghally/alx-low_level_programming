#include "main.h"

/**
  * print_alphabet - This function is used to print alphabets in lower case
  * Return: Always 0
  */

void print_alphabet(void)
{
	char c;
	int a;
	/**/
	for (a = 0; a <= 9; a++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
			_putchar('\n');
		}
	}
}
