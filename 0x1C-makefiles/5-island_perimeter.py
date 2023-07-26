#!/usr/bin/python3
"""
function that returns the perimeter of the island described in grid
"""


def island_perimeter(grid):
    """
    returns the perimeter of the island
    """
    isperim = 0
    verz = len(grid[0])
    horz = len(grid)

    for h in range(horz):
        for v in range(verz):
            if grid[h][v] == 1:
                isperim += 4
                if h > 0 and grid[h - 1][v] == 1:
                    isperim -= 2
                if h > 0 and grid[h][v - 1] == 1:
                    isperim -= 2
    return isperim
