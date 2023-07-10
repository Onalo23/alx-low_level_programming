#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_buffer - allocate 1024 bytes for  buffer
 * @file: the file buffer name storing chars to
 *
 * Return: the newly-allocated buffer pointer
 */
char *create_buffer(char *file)
{
char *buffer;
buffer = malloc(sizeof(char) * 1024);
if (buffer == NULL)
{
dprintf(STDERR_FILENO, "Error: no access %s\n", file);
exit(99);
}
return (buffer);
}

/**
 * close_file - Close file descript.
 * @bd: file narrator to be closed.
 */
void close_file(int bd)
{
int i;
i = close(bd);
if (i == -1)
{
dprintf(STDERR_FILENO, "Error: bd not close %d\n", bd);
exit(100);
}
}

/**
 * main - the file content copier one file to another
 * @argc: argument number supplied to program
 * @argv: arrays of pointer to arguments.
 * Return: Success 0
 * Descriptions: Incase of incorrect argument -  exit code 97.
 * when file_from does not exist or can't be read - exit code 98.
 * when file_to can't be created or write in - exit code 99.
 * when file_to or file_from can't be close - exit code 100.
 */

int main(int argc, char *argv[])
{
int from, to, i, z;
char *buffer;
if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}
buffer = create_buffer(argv[2]);
from = open(argv[1], O_RDONLY);
i = read(from, buffer, 1024);
to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
do {
if (from == -1 || i == -1)
{
dprintf(STDERR_FILENO,
		"Error: file not readable %s\n", argv[1]);
free(buffer);
exit(98);
}
z = write(to, buffer, i);
if (to == -1 || z == -1)
{
dprintf(STDERR_FILENO,
		"Error: not writable %s\n", argv[2]);
free(buffer);
exit(99);
}
i = read(from, buffer, 1024);
to = open(argv[2], O_WRONLY | O_APPEND);
} while (i > 0);
free(buffer);
close_file(from);
close_file(to);
return (0);
}
