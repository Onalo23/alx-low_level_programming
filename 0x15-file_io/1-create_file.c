#include "main.h"
/**
 * create_file - file creator.
 * @filename: the file name Pointer
 * @text_content: the string file Pointer
 * Return: If there is failure -1, Otherwise 1
 */
int create_file(const char *filename, char *text_content)
{
int yu, z, pof = 0;
if (filename == NULL)
return (-1);
if (text_content != NULL)
{
for (pof = 0; text_content[pof];)
pof++;
}
yu = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
z = write(yu, text_content, pof);
if (yu == -1 || z == -1)
return (-1);
close(yu);
return (1);
}
