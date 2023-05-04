#include "main.h"

/**
 * get_bit - calls the bit index value to the nearest decimal number
 * @n: numbers to look for
 * @index: bit index
 * Return: bit value
 */
int get_bit(unsigned long int n, unsigned int index)
{
int bit_value;
if (index > 63)
return (-1);
bit_value = (n >> index) & 1;
return (bit_value);
}
