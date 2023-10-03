#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);

/**
 * free_grid - frees a 2 dimensional grid previously created by your alloc_grid function.
 * @grid: the address of the two dimensional grid
 * @height: the height of the grid
 *
 * Return: Nothing.
 */

void free_grid(int **grid, int height)
{
  int h;

  h = 0;
  while (h < height)
    {
      free(grid[h]);
      h++;
    }
  free(grid);
}
