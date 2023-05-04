#include "main.h"

/**
 * flip_bits - function to change the number of bits
 * to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int lanko, change_bit = 0;
	unsigned long int current_bit;
	unsigned long int exclusive = n ^ m;

	for (lanko = 63; lanko >= 0; lanko--)
	{
		current_bit = exclusive >> lanko;
		if (current_bit & 1)
			change_bit++;
	}

	return (change_bit);
}

