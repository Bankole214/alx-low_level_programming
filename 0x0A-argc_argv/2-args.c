#include <stdio.h>

/**
* main - program that print all arg entry it receives
* @argc: argument counts
* @argv: argument vector
* Return: always 0
*/
int main(int argc, char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
	{
		printf("%s\n", argv[a]);
	}
	return (0);
}
