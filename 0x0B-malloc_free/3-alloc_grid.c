#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - nested loop to make grid
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dimensional array
 */
int **alloc_grid(int width, int height)
{
int **ali;
int x, y;
if (width <= 0 || height <= 0)
return (NULL);
ali = malloc(sizeof(int *) * height);
if (ali == NULL)
return (NULL);
for (x = 0; x < height; x++)
{
ali[x] = malloc(sizeof(int) * width);
if (ali[x] == NULL)
{
for (; x >= 0; x--)
free(ali[x]);
free(ali);
return (NULL);
}
}
for (x = 0; x < height; x++)
{
for (y = 0; y < width; y++)
ali[x][y] = 0;
}
return (ali);
}
