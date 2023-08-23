#!/usr/bin/python3
"""the python file in makefile directory"""


def island_perimeter(grid):
    """the finction doc"""
    p = 0
    L = len(grid)
    W = len(grid[1])
    for i, a in enumerate(grid):
        for j, b in enumerate(a):
            if b == 1:
                if i == 0 or grid[i - 1][j] != 1:
                    p = p + 1
                if j == 0 or grid[i][j - 1] != 1:
                    p = p + 1
                if i == L - 1 or grid[i + 1][j] != 1:
                    p = p + 1
                if i == W - 1 or grid[i][j + 1] != 1:
                    p = p + 1
    return p
