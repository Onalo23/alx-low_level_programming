#include "main.h"
/**
 * append_text_to_file - Append text at the end of a file.
 * @filename: the name pointing to the file
 * @text_content: The string pointing end of the file.
 * Return: upon failure or NULL filename -1
 *	1 If the file exist, the user lacks write permissions -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
int o, z, pof = 0;
if (filename == NULL)
return (-1);
if (text_content != NULL)
{
for (pof = 0; text_content[pof];)
pof++;
}
o = open(filename, O_WRONLY | O_APPEND);
z = write(o, text_content, pof);
if (o == -1 || z == -1)
return (-1);
close(o);
return (1);
}
