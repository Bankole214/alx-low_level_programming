#include "main.h"

/**
 * binary_to_uint - converts a binary number to non negative integers
 * @b: pointer string containing the binary number
 *
 * Return: the converted number else -1
 */
unsigned int binary_to_uint(const char *b)
{
	int pos;
	unsigned int dec_val = 0;

	if (!b)
		return (0);

	for (pos = 0; b[pos]; pos++)
	{
		if (b[pos] < '0' || b[pos] > '1')
			return (0);
		dec_val = 2 * dec_val + (b[pos] - '0');
	}

	return (dec_val);
}

