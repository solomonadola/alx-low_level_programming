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

    for lis in grid:
        for cell in lis:
            perimeter += cell
    return (perimeter*2 + 2)
