#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n>0)
	{
	 printf("%d is positive\n",n)
	}
	else if(n ==0)
	{
	 printf("is zero %d\n",n)
	}
        else (n<0)
	{
	printf("is negative %d\n",n)
	}	
	return (0);
}
