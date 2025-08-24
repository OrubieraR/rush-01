#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if (argc < 2)
    {
        printf("Almost one argument is needed.\n");
        return 1;
    }

    int i = 0;
    int j = 0;
    char middle_array[31];

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

    printf("El array es: %s\n", middle_array);

    return 0;
}
