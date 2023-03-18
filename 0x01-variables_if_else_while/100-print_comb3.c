#include <stdio.h>
/**
* main - combo of 2 numbers
*
* Return: always 0
*/
int main(void)
{
	int n;
	int m;

	for (n = '0'; n <= '9'; n++)
	{
		for (m = '0'; m <= '9'; m++)
		{
			if ((n < m) && (m <= 9))
			{
				putchar(n);
				putchar(m);
				putchar(',');
				putchar(' ');
			}
		}
	}
putchar('\n');
return (0);
}
