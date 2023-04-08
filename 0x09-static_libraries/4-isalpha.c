#include "main.h"
/**
* _isalpha - code that check for alpha character
* @c: character to be checked
* Return: 1 if letter,lowwercase or uppercase else 0
*/

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
