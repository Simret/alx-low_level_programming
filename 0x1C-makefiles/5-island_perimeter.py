#!/usr/bin/python3
"""counting the perimeter"""


def side_count(grid, i, j):
    """count the sides"""
    x = 4

    if j > 0 and grid[i][j - 1] == 1:
        x -= 1

    if len(grid[i]) > j + 1 and grid[i][j + 1] == 1:
        x -= 1

    if i > 0 and grid[i - 1][j] == 1:
        x -= 1

    if len(grid) > i + 1 and grid[i + 1][j] == 1:
        x -= 1

    return x


def island_perimeter(grid):
    """island perimeter"""
    perimeter_length = 0
    for i in range(0, len(grid)):
        for j in range(0, len(grid[i])):
            if (grid[i][j] == 1):
                perimeter_length += side_count(grid, i, j)
    return perimeter_length
