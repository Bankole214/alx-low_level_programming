#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print number randomly generated and compare the module
 * Return: Always 0
 */
int main(void)
{
	int n;
	int x;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/*your code goes here */
	x = 10;
	if (n > 5)
		printf("Last digit of %d is %d and is greater than 5", n, x);
	else if (n == 0)
		printf("Last digit of %d and is 0", n, x);
	else if (n < 6 && n != 0)
		printf("Last digit %d and is less than 6 and not 0", n, x);
	printf("\n");
	return (0);
}
