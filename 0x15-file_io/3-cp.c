#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int yu);
/**
 * create_buffer - in the buffer let 1024 bytes be alloted
 * @file: the file buffer is storing chars to
 *
 * Return: newly allocated buffer pointer
 */
char *create_buffer(char *file)
{
char *buffer;
buffer = malloc(sizeof(char) * 1024);
if (buffer == NULL)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
exit(99);
}
return (buffer);
}
/**
 * close_file - Closes file descript
 * @yu: file descript to close
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
 * main - the content copier of a other file.
 * @argc: arguments num supply to the program.
 * @argv: the arguments array of a pointer
 *
 * Return: 0 for success.
 *
 * Description: when the argument count is not correct - the exit code 97.
 * incase file_from exist not or can not be read - the exit code 98.
 * for file_to unable to create or written to - the exit code 99.
 * If both file_to or file_from can not close - the exit code 100.
 */
int main(int argc, char *argv[])
{
int from, to, s, x;
char *buffer;
if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}
buffer = create_buffer(argv[2]);
from = open(argv[1], O_RDONLY);
s = read(from, buffer, 1024);
to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
do {
if (from == -1 || s == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
free(buffer);
exit(98);
}
x = write(to, buffer, s);
if (to == -1 || x == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
free(buffer);
exit(99);
}
s = read(from, buffer, 1024);
to = open(argv[2], O_WRONLY | O_APPEND);
} while (s > 0);
free(buffer);
close_file(from);
close_file(to);
return (0);
}
