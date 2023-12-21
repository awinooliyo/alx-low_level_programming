#!/usr/bin/python3
"""Module that calculates the perimeter of an island in a grid"""

def island_perimeter(grid):
    """
    Returns the perimeter of the island described in the groid
    args: grid(list) - list of lists of integers
    """
    width = len(grid[0])
    height = len(grid)
    edges = 0
    size = 0

    for x in range(height):
        for y in range (width):
            if grid[x][y] == 1:
                size += 1
                if (y > 0 and grid [x][y - 1] == 1):
                    edges += 1
                if (x > 0 and grid[x - 1][y] == 1):
                    edges += 1
    return size * 4 - edges * 2
