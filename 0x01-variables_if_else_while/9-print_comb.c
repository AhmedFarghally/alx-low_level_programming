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
	int n;
	/**/
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* Your code goes there */
	for (n = 48; n <= 57; n++)
	{
		putchar((char) n);
		if (n != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
