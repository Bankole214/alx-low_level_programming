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
	x = n % 10;
	if (x > 5)
		printf("Last digit of %d is %d and is greater than 5", n, x);
	else if (x == 0)
		printf("Last digit of %d is %d and is 0", n, x);
	else if (x < 6 && x != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0", n, x);
	printf("\n");
	return (0);
}
