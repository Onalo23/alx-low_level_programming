#include "main.h"
/**
 * isalpha - checks for alphabetic character
 * @c: the chacter to be checked
 * Return: 1 for positive number or -1 for negative number or 0  for something else
 */
int print_sign(int n)
{
	if (n > 0)
	{
	_putchar(43);
	return (1);
	}
	else if (n <0)
	{
	_putchar(45);
	return (-1);
	}
	else
	{
	_putchar(48);
	return (0);
	}
}
