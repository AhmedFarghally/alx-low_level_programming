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
	/*Variables Declaration*/
	int n;
	/*Assignment*/
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	for (n = 0; n <= 9; n++)
		printf("%i", n);
	printf("\n");
	return (0);
}
