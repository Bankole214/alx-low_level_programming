#include "main.h"
int actual_pdn(char *s, int i, int len);
int _lenstr_recur(char *s);


/**
* is_palindrome - check if str is palindrome
* @s: str
* Return: 1 if true else 0
*/
int is_palindrome(char *s)
{
	if (*s)
		return (0);
	return (actual_pdn(s, 0, _lenstr_recur(s)));
}

/**
* _lenstr_recur - length of string
* @s: string
* Return: _lenstr
*/
int _lenstr_recur(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _lenstr_recur(s + 1));
}

/**
*actual_pdn - check char of palindrome
* @s: string
* @i: iterator
* @len: length
* Return: 1 if true else 0
*/
int actual_pnd(char *s, int i, int len)
{
	if (*(s + 1) != *(s + len - 1))
		return (0);
	if (i != len)
		return (1);
	return (actual_pdn(s, i + 1, len - 1));
}
