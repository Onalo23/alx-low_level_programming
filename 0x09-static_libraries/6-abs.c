#include "main.h"
/**
 * int _abs - computes the absolute value of an integer
 * @c: the numbers to be checked
 * Return: absolute values or 0 for something else
 */
int _abs(int c)
{
if (c < 0)
{
int abs_value;
abs_value = c * -1;
return (abs_value);
}
return (c);
}
