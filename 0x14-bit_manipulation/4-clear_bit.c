#include "main.h"
/**
 * clear_bit - given value of bit equal to 0
 * @n: changing pointer
 * @index: bit index to be cleared
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
if (index > 63)
return (-1);
*n = (~(1UL << index) & *n);
return (1);
}
