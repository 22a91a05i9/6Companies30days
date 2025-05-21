from typing import List

class Solution:
    def setZeroes(self, matrix: List[List[int]]) -> None:
        \\\
        Do not return anything, modify matrix in-place instead.
        \\\
        r, c = len(matrix), len(matrix[0])
        c0 = 1

        # First pass: mark rows and columns
        for i in range(r):
            for j in range(c):
                if matrix[i][j] == 0:
                    matrix[i][0] = 0
                    if j == 0:
                        c0 = 0
                    else:
                        matrix[0][j] = 0

        # Second pass: set zeros based on marks
        for i in range(1, r):
            for j in range(1, c):
                if matrix[i][0] == 0 or matrix[0][j] == 0:
                    matrix[i][j] = 0

        # Zero out the first row if needed
        if matrix[0][0] == 0:
            for j in range(c):
                matrix[0][j] = 0

        # Zero out the first column if needed
        if c0 == 0:
            for i in range(r):
                matrix[i][0] = 0