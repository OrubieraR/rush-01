#include <stdio.h>

int main()
{
    int row_left[4] = {4, 2, 3, 1};  // Example left clues
    int row_right[4] = {1, 4, 2, 3}; // Example right clues
    int row_result[4][4];            // Result matrix
    int i = 0;

    while (i < 4)
    {
        int j = 0;
        while (j < 4)
        {
            row_result[i][j] = 0;
            j++;
        }

        // Rule 1: Clue is 4 on the left → 1 to 4
        if (row_left[i] == 4)
        {
            row_result[i][0] = 1;
            row_result[i][1] = 2;
            row_result[i][2] = 3;
            row_result[i][3] = 4;
        }
        // Rule 1: Clue is 4 on the right → 4 to 1
        else if (row_right[i] == 4)
        {
            row_result[i][0] = 4;
            row_result[i][1] = 3;
            row_result[i][2] = 2;
            row_result[i][3] = 1;
        }
        else if (row_left[i] == 2 && row_right[i] == 1)
        {
            row_result[i][0] = 3;
            row_result[i][3] = 4;
        }
        else if (row_left[i] == 3 && row_right[i] == 2)
        {
            row_result[i][2] = 4;
        }
        else if (row_left[i] == 2 && row_right[i] == 3)
        {
            row_result[i][1] = 4;
        }
        else if (row_left[i] == 1)
        {
            row_result[i][i] = 4;
        }
        else if (row_right[i] == 1)
        {
            row_result[i][i] = 4;
        }

        i++;
    }

    // Display result
    i = 0;
    while (i < 4)
    {
        printf("Row %d: ", i);
        int j = 0;
        while (j < 4)
        {
            printf("%d ", row_result[i][j]);
            j++;
        }
        printf("\n");
        i++;
    }

    return 0;
}
