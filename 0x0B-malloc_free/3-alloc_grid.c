#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int **alloc_grid(int width, int height);

/**
 * alloc_grid - allocates a 2 dimensional array of integers.
 * @width: the width of the grid.
 * @height: the height of the grid.
 *
 * Return: a pointer to the allocated grid, or NULL on failure.
 */

int **alloc_grid(int width, int height)
{
  int **grid;
  int h;

  if (width <= 0 || height <= 0)
    return (NULL);
  grid = malloc(height * sizeof(int *));
  if (grid == NULL)
    return (NULL);
  h = 0;
  while (h < height)
    {
      grid[h] = malloc(width * sizeof(int));
      if (grid[h] == NULL)
        {
	  while (h >= 0)
	    free(grid[h--]);
	  free(grid);
	  return (NULL);
        }
      memset(grid[h], 0, width * sizeof(int));
      h++;
    }
  return (grid);
}
