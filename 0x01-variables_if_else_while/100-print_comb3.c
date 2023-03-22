#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/**
 * main - start point
 * Return: Always 0
 */
int main(void)
{
	/*Var Declaration*/
	int c;
	int b;
	/**/
	srand(time(0));
	/* your code goes there */
	for (c = 0; c <= 9; c++)
	{
		for (b = 1; b <= 9; b++)
		{
			if (c < b && c != b)
			{
				putchar(c + '0');
				putchar(b + '0');
				if (b != 9 || c != 8)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
