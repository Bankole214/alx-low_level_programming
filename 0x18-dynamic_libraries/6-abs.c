#include "main.h"
/**
* _abs - compute absolute values of an integers
* @c: value to be computed
* Return: +ve if int > 0 else -ve
*/
int _abs(int c)
{
	if (c < 0)
	{
	int abs_val;

	abs_val = c * -1;
	return (abs_val);
	}
	return (c);
}
