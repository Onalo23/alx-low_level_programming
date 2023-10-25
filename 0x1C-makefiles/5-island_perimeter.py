#!/usr/bin/python3
"""Defines an island perimeter"""


def island_perimeter(grid):
    """Return the perimiter of an island

    The grid 0 represents a water, 1 represents an island

    Arguments:
        grid - list:  A list of list of integers
    Returns:
        The perimeter of the island defined in grid
    """
    width = len(grid[0])
    height = len(grid)
    edges = 0
    size = 0

    for j in range(height):
        for k in range(width):
            if grid[j][k] == 1:
                size += 1
                if (k > 0 and grid[j][k - 1] == 1):
                    edges += 1
                if (j > 0 and grid[j - 1][k] == 1):
                    edges += 1
    return size * 4 - edges * 2
