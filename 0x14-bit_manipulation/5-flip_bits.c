#include "main.h"

/**
 * flip_bits - execute the number of bits to be changed
 * @n: number one
 * @m: number two
 * Return: bits value changed
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
int z, num = 0;
unsigned long int recent;
unsigned long int total = n ^ m;
for (z = 63; z >= 0; z--)
{
recent = total >> z;
if (recent & 1)
num++;
}
return (num);
}
