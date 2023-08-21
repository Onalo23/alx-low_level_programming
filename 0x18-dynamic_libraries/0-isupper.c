#include "main.h"

/**
 * _isupper - uppercase character
 * @c: the charagter to be checked
 * Return: 1 for uppercase or 0 for anything else
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
	return (1);
	}
	return (0);
}
