#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Reads text file printed to the stdout
 * @filename: the text file been read
 * @letters: the amount of Letters that has to be read
 * Return: z -the actual bytes size to be read and print
 *        upon function's failure 0 or 0 if filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
char *ary;
ssize_t fd;
ssize_t z;
ssize_t v;
fd = open(filename, O_RDONLY);
if (fd == -1)
return (0);
ary = malloc(sizeof(char) * letters);
v = read(fd, ary, letters);
z = write(STDOUT_FILENO, ary, v);
free(ary);
close(fd);
return (z);
}
