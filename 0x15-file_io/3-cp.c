#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_buffer - let 1024 bytes be allocated to the buffer.
 * @file: The file name buffer is storing character
 * Return: Pointer newly allocated to the buffer.
 */
char *create_buffer(char *file)
{
char *buffer;
buffer = malloc(sizeof(char) * 1024);
if (buffer == NULL)
{
dprintf(STDERR_FILENO,
		"Error: Can't write to %s\n", file);
exit(99);
}
return (buffer);
}
/**
 * close_file - op that Closes the file descriptor
 * @yu: shotdown the file discriptor
 */
void close_file(int yu)
{
int x;
x = close(yu);
if (x == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close yu %d\n", yu);
exit(100);
}
}
/**
 * main - copy file contents of other files
 * @argc: the number programme arguments
 * @argv: the pointer of an argumentative arrays
 * Return: 0 for success
 * Description: when the argument count is not correct, let 97 be the exit code
 * when file_from is none existing or unable to read, let 98 be the exit code
 * when the file_to couldn't created or write, let 99 be the exit code
 * If both file_to and file_from could not closed, let 100 be the exit code
 */
int main(int argc, char *argv[])
{
int from, to, r, z;
char *buffer;
if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}
buffer = create_buffer(argv[2]);
from = open(argv[1], O_RDONLY);
r = read(from, buffer, 1024);
to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
do {
if (from == -1 || r == -1)
{
dprintf(STDERR_FILENO,
		"Error: Can't read from file %s\n", argv[1]);
free(buffer);
exit(98);
}
z = write(to, buffer, r);
if (to == -1 || z == -1)
{
dprintf(STDERR_FILENO,
		"Error: Can't write to %s\n", argv[2]);
free(buffer);
exit(99);
}
r = read(from, buffer, 1024);
to = open(argv[2], O_WRONLY | O_APPEND);
} while (r > 0);
free(buffer);
close_file(from);
close_file(to);
return (0);
}
