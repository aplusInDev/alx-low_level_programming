#!/usr/bin/python3
"""Calculate the perimeter of the island described in grid"""


def island_perimeter(grid):
    """returns the perimeter of the island described in grid"""
    perimiter = 0
    for row_idx, row in enumerate(grid):
        for column_idx, column in enumerate(row):
            if column == 1:
                perimiter += count_waters(grid, column, row_idx, column_idx)
    return perimiter


def count_waters(grid, column, row_idx, column_idx):
    """counts the water around a land"""
    ru = 0
    rd = 0
    lu = 0
    ld = 0
    water_counter = 0
    if row_idx <= 0 and column_idx <= 0:
        water_counter += 2
        lu = 1
    if row_idx >= len(grid) - 1 and column_idx >= len(grid[row_idx]) - 1:
        water_counter += 2
        rd = 1
    if column_idx <= 0 and row_idx >= len(grid) - 1:
        water_counter += 2
        ld = 1
    if row_idx <= 0 and column_idx >= len(grid[row_idx]) - 1:
        water_counter += 2
        ru = 1

    """up is row_idx - 1, same column_idx"""
    if (lu == 0 and ru == 0) and (row_idx <= 0 or grid[row_idx - 1][column_idx] == 0):
        water_counter += 1

    """down row_idx + 1, same column_idx"""
    if (ld == 0 and rd == 0) and (
        row_idx >= len(grid) - 1 or grid[row_idx + 1][column_idx] == 0
    ):
        water_counter += 1

    """right same row_idx, column_idx + 1"""
    if (rd == 0 and ru == 0) and (
        column_idx >= len(grid[row_idx]) -
        1 or grid[row_idx][column_idx + 1] == 0
    ):
        water_counter += 1

    """left same row_idx, column_idx - 1"""
    if (ld == 0 and lu == 0) and (column_idx <= 0 or grid[row_idx][column_idx - 1] == 0):
        water_counter += 1

    return water_counter
