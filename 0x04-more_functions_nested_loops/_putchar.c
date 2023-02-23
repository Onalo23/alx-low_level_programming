#include "main.h"
#include <unistd.h>
/**
 * _putchar - write the character c to stdout
 * @c: prints character
 *
 * Return: 1 on success
 * on error return -1 and errno is set appropriately
 */
int _putchar(char c)
{
	Return (write(1, &c, 1));
}
