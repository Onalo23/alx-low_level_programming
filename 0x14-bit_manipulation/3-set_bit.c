#include "main.h"

/**
 * set_bit - sets a bit of a given index to 1
 * @n: the number pointer to be changed
 * @index: index of the bit to be sets 1
 *
 * Return: upon on success 1, failure -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	return (-1);
	*n = ((1UL << index) | *n);
	return (1);
}
