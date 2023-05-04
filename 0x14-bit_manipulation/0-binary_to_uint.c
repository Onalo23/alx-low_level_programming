#include "main.h"
/**
 * binary_to_uint - the binary number of an unsigned int converted
 * @b:  points to a string to be converted
 * Return: numbers converted
 */
unsigned int binary_to_uint(const char *b)
{
int z;
unsigned int decima_num = 0;
if (!b)
return (0);
for (z = 0; b[z]; z++)
{
if (b[z] < '0' || b[z] > '1')
return (0);
decima_num = 2 * decima_num + (b[z] - '0');
}
return (decima_num);
}
