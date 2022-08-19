#!/usr/bin/python3
'''
Contains the function island_perimeter
'''


def island_perimeter(grid):
    '''
    Returns the perimeter of the island descriibed in a grid
    Args:
        grid (list): A list of lists of integers
    '''
    perimeter = 0
        """perimeter of island (1) surrounded by water (0)
    Args:
        grid (list): list of lists
    Returns:
        perimeter number of cells the island is surrounded by water
    """
    perimeter = 0

    if not grid:
        return perimeter
    if type(grid) is not list:
        return perimeter
    rows = len(grid)
    if rows < 1:
        return perimeter
    
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                try:
                    if grid[i][j - 1] == 0:
                        perimeter += 1
                except:
                    pass

                try:
                    if grid[i - 1][j] == 0:
                        perimeter += 1
                except:
                    pass

                try:
                    if grid[i][j + 1] == 0:
                        perimeter += 1
                except:
                    pass

                try:
                    if grid[i + 1][j] == 0:
                        perimeter += 1
                except:
                    pass

    return perimeter
