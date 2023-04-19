#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints its own opcodes
 * @argc: number of arguments count
 * @argv: array of arguments vector
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int leo, a;
	char *dan;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	leo = atoi(argv[1]);

	if (leo < 0)
	{
		printf("Error\n");
		exit(2);
	}

	dan = (char *)main;

	for (a = 0; a < leo; a++)
	{
		if (a == leo - 1)
		{
			printf("%02hhx\n", dan[a]);
			break;
		}
		printf("%02hhx ", dan[a]);
	}
	return (0);
}
