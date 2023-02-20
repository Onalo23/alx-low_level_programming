#include <stdio.h>
/**
 * main - Entry point
 * prints the alphabet in lowercase
 * and then in uppercase, followed by a new line
 * Return: Always 0 (success)
 */

int main(void)
{
char c;
char d;
c = 'z';
d = 'Z';
while
(c <= 'z')
{
putchar(c);
c++;
}
while
(d <= 'Z')
{
putchar(d);
d++;
}
putchar('\n');
return (0);
}
