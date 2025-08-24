int n = 0;
while (n < 4)
{
    int i = 0;
    while (i < 4)
    {
        col_result[i][n] = 0; // initialize column
        i++;
    }

    // Rule 1: clue is 4 from top → 1 to 4
    if (row_top[n] == 4)
    {
        col_result[0][n] = 1;
        col_result[1][n] = 2;
        col_result[2][n] = 3;
        col_result[3][n] = 4;
    }
    // Rule 1: clue is 4 from bottom → 4 to 1
    else if (row_bottom[n] == 4)
    {
        col_result[0][n] = 4;
        col_result[1][n] = 3;
        col_result[2][n] = 2;
        col_result[3][n] = 1;
    }
    else if (row_top[n] == 2 && row_bottom[n] == 1)
    {
        col_result[0][n] = 3;
        col_result[3][n] = 4;
    }
    else if (row_top[n] == 3 && row_bottom[n] == 2)
    {
        col_result[0][n] = 4;
        col_result[2][n] = 4;
    }
    else if (row_top[n] == 2 && row_bottom[n] == 3)
    {
        col_result[1][n] = 4;
    }
    else if (row_top[n] == 1)
    {
        col_result[n][n] = 4; // same index logic as before
    }

    n++;
}
