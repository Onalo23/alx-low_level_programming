#include "main.h"

/**
 * create_file - the file creator
 * @filename: the file pointer to be created
 * @text_content: the file sting pointer to be written
 * Return: failure -1, otherwise 1
 */

int create_file(const char *filename, char *text_content)

{
int fd, z, len = 0;
if (filename == NULL)
return (-1);
if (text_content != NULL)
{
for (len = 0; text_content[len];)
len++;
}
fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
z = write(fd, text_content, len);
if (fd == -1 || z == -1)
return (-1);
close(fd);
return (1);
}
