#include "main.h"
/**
* _strlen_recursion - function that return the len of a str
* @s: string
* Return: len of str
*/
int _strlen_recursion(char *s)
{
	int strlen1;

	strlen1 = 0;

	if (*s)
	{
		strlen1++;
		strlen1 += _strlen_recursion(s + 1);
	}
	return (strlen1);
}
