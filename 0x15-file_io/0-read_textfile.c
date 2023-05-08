#include "main.h"
#include <stdlib.h>
/**
 * read_textfile - Read the text file to be printed in the Standard output
 * @filename: the name of the text file being read
 * @letters: the letters being read
 * Return: z - the actual number of bytes readed and prints,
 *	0 on failure or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
char *pof;
ssize_t yu;
ssize_t z;
ssize_t t;
yu = open(filename, O_RDONLY);
if (yu == -1)
return (0);
pof = malloc(sizeof(char) * letters);
t = read(yu, pof, letters);
z = write(STDOUT_FILENO, pof, t);
free(pof);
close(yu);
return (z);
}
