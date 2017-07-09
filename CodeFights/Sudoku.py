'''

Sudoku is a number-placement puzzle. The objective is to fill a 9 × 9 grid with numbers in such a way that each column, each row, and each of the nine 3 × 3 sub-grids that compose the grid all contain all of the numbers from 1 to 9 one time.

Implement an algorithm that will check whether the given grid of numbers represents a valid Sudoku puzzle according to the layout rules described above. Note that the puzzle represented by grid does not have to be solvable.

Example

For

grid = [['.', '.', '.', '1', '4', '.', '.', '2', '.'],
        ['.', '.', '6', '.', '.', '.', '.', '.', '.'],
        ['.', '.', '.', '.', '.', '.', '.', '.', '.'],
        ['.', '.', '1', '.', '.', '.', '.', '.', '.'],
        ['.', '6', '7', '.', '.', '.', '.', '.', '9'],
        ['.', '.', '.', '.', '.', '.', '8', '1', '.'],
        ['.', '3', '.', '.', '.', '.', '.', '.', '6'],
        ['.', '.', '.', '.', '.', '7', '.', '.', '.'],
        ['.', '.', '.', '5', '.', '.', '.', '7', '.']]
the output should be
sudoku2(grid) = true;

For

grid = [['.', '.', '.', '.', '2', '.', '.', '9', '.'],
        ['.', '.', '.', '.', '6', '.', '.', '.', '.'],
        ['7', '1', '.', '.', '7', '5', '.', '.', '.'],
        ['.', '7', '.', '.', '.', '.', '.', '.', '.'],
        ['.', '.', '.', '.', '8', '3', '.', '.', '.'],
        ['.', '.', '8', '.', '.', '7', '.', '6', '.'],
        ['.', '.', '.', '.', '.', '2', '.', '.', '.'],
        ['.', '1', '.', '2', '.', '.', '.', '.', '.'],
        ['.', '2', '.', '.', '3', '.', '.', '.', '.']]
the output should be
sudoku2(grid) = false.

The given grid is not correct because there are two 1s in the second column. Each column, each row, and each 3 × 3 subgrid can only contain the numbers 1 through 9 one time.

'''


def check(s):
    try: 
        int(s)
        return True
    except ValueError:
        return False

def sudoku2(a):
    for i in range(0 , len(a)):
        flag1 = [False]*11
        flag2 = [False]*11
        for j in range(0, len(a)):
            if(check(a[i][j]) == True and flag1[int(a[i][j])] == False):
                flag1[int(a[i][j])] = True
            elif(check(a[i][j]) == True and flag1[int(a[i][j])] == True):
                return False 
            if(check(a[j][i]) == True and flag2[int(a[j][i])] == False):
                flag2[int(a[j][i])] = True
            elif(check(a[j][i]) == True and flag2[int(a[j][i])] == True):
                return False 
    for i in range(0, len(a), 3):
        for j in range(0, len(a), 3):
            flag = [False]*11
            for k in range(i, i + 3):
                for l in range(j, j + 3):
                    if(check(a[k][l]) == True and flag[int(a[k][l])] == False):
                        flag[int(a[k][l])] = True
                    elif(check(a[k][l]) == True and flag[int(a[k][l])] == True):
                        return False 
    return True

