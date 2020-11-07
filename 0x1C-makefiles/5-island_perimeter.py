#!/usr/bin/python3
"""contains the island_perimeter function
"""


def island_perimeter(grid):
    """returns the perimeter of the island described in grid:
        ♪ 0 represents a water zone
        ♪ 1 represents a land zone

    Args:
        grid (list of lists): the grid

    Returns:
        int: the perimeter of an island
    """
    perimeter = 0
    x = len(grid[0])
    y = len(grid)

    for i in range(y):
        for j in range(x):
            if grid[i][j] == 1:
                """ up """
                try:
                    if grid[i-1][j] == 0:
                        perimeter += 1
                except IndexError:
                    perimeter += 1

                """ down """
                try:
                    if grid[i+1][j] == 0:
                        perimeter += 1
                except IndexError:
                    perimeter += 1

                """ left """
                try:
                    if (j - 1) < 0:
                        perimeter += 1
                    elif grid[i][j - 1] == 0:
                        perimeter += 1
                except IndexError:
                    perimeter += 1

                """ right """
                try:
                    if grid[i][j+1] == 0:
                        perimeter += 1
                except IndexError:
                    perimeter += 1

    return perimeter
