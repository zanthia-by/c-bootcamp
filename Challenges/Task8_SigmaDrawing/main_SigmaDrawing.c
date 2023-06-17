#include <stdio.h>
#include <stdlib.h>

int main()
{
    const char symbol = 'x';
    const int width = 10;
    const int tip_width = 5;

    for (int i = 0; i < width; i++)
    {
        printf("%c", symbol);
    }
    printf("\n");

    for (int i = 1; i <= tip_width; i++)
    {
        for (int j = 0; j < width; j++)
        {
            if (i == j)
            {
                printf("%c", symbol);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    for (int i = tip_width - 1; i > 0; i--)
    {
        for (int j = 0; j < width; j++)
        {
            if (i == j)
            {
                printf("%c", symbol);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    for (int i = 0; i < width; i++)
    {
        printf("%c", symbol);
    }
    printf("\n");

    return EXIT_SUCCESS;
}
