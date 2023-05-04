#include "main.h"

/**
 * set_bit - set the bit index to be 1
 * @n: pointer to be changed
 * @index: bit index 1
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
if (index > 63)
return (-1);
*n = ((1UL << index) | *n);
return (1);
}
