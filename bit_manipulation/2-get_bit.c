#include <stdio.h>
#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: the decimal number for which the bit at the give
 * index of the binary equivalent is to be gotten
 * @index: the position in the binary equivalent of n to be returned
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;
	int bit_value;

	if (index >= sizeof(unsigned long int) * 8)
	{
		printf("Error, index out of range\n");
		return -1;
	}

	mask = 1UL << index;
	bit_value = (n & mask) ? 1 : 0;

	return (bit_value);
}
