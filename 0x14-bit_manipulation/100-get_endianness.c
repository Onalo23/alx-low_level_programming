#include "main.h"

/**
 * get_endianness - checks for little or big endians
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
unsigned int z = 1;
char *k = (char *) &z;
return (*k);
}
