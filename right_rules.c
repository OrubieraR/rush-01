#include <stdio.h>

int main()
{
    int row_result[4][4];             // Unified grid
    int row_top[4] = {4, 2, 3, 1};    // Clues from top
    int row_bottom[4] = {1, 1, 2, 3}; // Clues from bottom

    // Initialize grid to 0
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            row_result[i][j] = 0;
        }
    }

    // Apply vertical clues to columns
    for (int col = 0; col < 4; col++)
    {
        if (row_top[col] == 4)
        {
            row_result[0][col] = 1;
            row_result[1][col] = 2;
            row_result[2][col] = 3;
            row_result[3][col] = 4;
        }
        else if (row_bottom[col] == 4)
        {
            row_result[0][col] = 4;
            row_result[1][col] = 3;
            row_result[2][col] = 2;
            row_result[3][col] = 1;
        }
        else if (row_top[col] == 2 && row_bottom[col] == 1)
        {
            row_result[0][col] = 3;
            row_result[3][col] = 4;
        }
        else if (row_top[col] == 3 && row_bottom[col] == 2)
        {
            row_result[0][col] = 4;
            row_result[2][col] = 4;
        }
        else if (row_top[col] == 2 && row_bottom[col] == 3)
        {
            row_result[1][col] = 4;
        }
        else if (row_top[col] == 1)
        {
            row_result[0][col] = 4;
        }
    }

    // Print the grid
    printf("Grid after applying vertical clues:\n");
    for (int row = 0; row < 4; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            printf("%d ", row_result[row][col]);
        }
        printf("\n");
    }

    return 0;
}
