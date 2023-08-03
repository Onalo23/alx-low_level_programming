#include "main.h"

/**
 * get_endianness - that checks a machine if it is a big or little endian
 * Return: 0 for big, 1 for little
 */
int get_endianness(void)
{
unsigned int i = 1;
char *c = (char *) &i;
return (*c);
}
