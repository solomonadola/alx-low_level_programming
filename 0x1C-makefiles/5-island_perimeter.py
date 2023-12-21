#!/usr/bin/python3
"""
this module contains a function that returns
the perimeter of an island given as matrix
"""


def island_perimeter(grid):
    """
    a function that returns a perimeter of an island

    Args:
        grid: a list of integers

    Returns:
           perimeter of an island

    """
    perimeter = 0
    for row in range(len(grid)):
        for col in range(len(grid[0])):
            if grid[row][col] == 1:
                perimeter += 4
                if col > 0 and grid[row][col-1] == 1:
                    perimeter -= 2
                if row > 0 and grid[row-1][col] == 1:
                    perimeter -= 2
    return perimeter
