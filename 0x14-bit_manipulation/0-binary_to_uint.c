#include "main.h"

/**
 * binary_to_uint - That Converts a Binary number to unsigned int
 * @b: The string of the binary number
 *
 * Return: the converts number
 */
unsigned int binary_to_uint(const char *b)
{
int i;
unsigned int dec_val = 0;
if (!b)
return (0);
for (i = 0; b[i]; i++)
{
if (b[i] < '0' || b[i] > '1')
return (0);
dec_val = 2 * dec_val + (b[i] - '0');
}
return (dec_val);
}
