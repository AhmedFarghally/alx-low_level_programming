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
	int n;
	/**/
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	for (n = 48; n <= 57; n++)
		putchar((char) n);
	return (0);
}
