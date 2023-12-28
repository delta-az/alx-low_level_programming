#!/usr/bin/python3
""" Function that finds the perimeter of a given island """


def island_perimeter(grid):
    """Function that returns the perimeter of the island in grid."""
    island = 0
    perimeter = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                island += 1
                if i > 0 and grid[i-1][j] == 1:
                    perimeter += 1
                if j > 0 and grid[i][j-1] == 1:
                    perimeter += 1
    return island * 4 - perimeter * 2
