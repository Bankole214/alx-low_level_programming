#include "main.h"
/**
*  _strlen - function to count the length of a string
* @s: string
* Return: lenght of str
*/
int _strlen(char *s)
{
	int leo;

	leo = 0;

	while (*s != '\0')
	{
		leo++;
		s++;
	}
	return (leo);
}
