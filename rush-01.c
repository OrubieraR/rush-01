#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if (argc < 2)
    {
        printf("Almost one argument is needed.\n");
        return 1;
    }

    int i = 0, j = 0;
    char middle_array[31];
    int top_row1[4], bottom_row2[4], left_row3[4], right_row4[4];

    // Copy caracters without spaces.
    while (argv[1][i] != '\0' && j < 30)
    {
        if (argv[1][i] != ' ')
        {
            middle_array[j] = argv[1][i];
            j++;
        }
        i++;
    }
    middle_array[j] = '\0';

    // Assing blocks of 4
    for (i = 0; i < 4; i++)
    {
        top_row1[i] = middle_array[i];
        bottom_row2[i] = middle_array[i + 4];
        left_row3[i] = middle_array[i + 8];
        right_row4[i] = middle_array[i + 12];
    }

    // Show results. Remove before push
    printf("Top Row: ");
    for (i = 0; i < 4; i++)
        printf("%c ", top_row1[i]);
    printf("\nBottom Row: ");
    for (i = 0; i < 4; i++)
        printf("%c ", bottom_row2[i]);
    printf("\nLeft Row: ");
    for (i = 0; i < 4; i++)
        printf("%c ", left_row3[i]);
    printf("\nRight Row: ");
    for (i = 0; i < 4; i++)
        printf("%c ", right_row4[i]);
    printf("\n");

    return 0;
}
