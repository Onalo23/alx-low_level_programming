#include "main.h"

/**
 * get_bit - that returns value of a bit at an index in decimal num
 * @n: the serching number
 * @index: index of a bit
 *
 * Return: bit values
 */
int get_bit(unsigned long int n, unsigned int index)
{
int bit_val;
if (index > 63)
return (-1);
bit_val = (n >> index) & 1;
return (bit_val);
}
