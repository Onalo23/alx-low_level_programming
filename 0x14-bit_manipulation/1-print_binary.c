#include "main.h"
/**
 * print_binary - writes the binary equivalent to the nearest whole number
 * @n: binary number to be printed
 */
void print_binary(unsigned long int n)
{
int z, num = 0;
unsigned long int recent;
for (z = 63; z >= 0; z--)
{
recent = n >> z;
if (recent & 1)
{
_putchar('1');
num++;
}
else if (num)
_putchar('0');
}
if (!num)
_putchar('0');
}
