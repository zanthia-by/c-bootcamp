#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

#define LEN 5
#define N_ROWS 3
#define N_COLS 4
#define N_LAYERS 5

int main()
{
    int array[LEN] = {1, 2, 3};

    // n = N_ROWS * N_COLS
    int matrix[N_ROWS][N_COLS] =
        {
            {11, 12, 13, 14}, // row 1
            {21, 22, 23, 24}, // row 2
            // elements of row 3 will be initialized by 0
        };

    // n = N_LAYERS * N_ROWS * N_COLS
    // "pile of matrices"
    int tensor[N_LAYERS][N_ROWS][N_COLS] =
        {
            // 1st matrix
            {
                {111, 112, 113, 114},
                {121, 122, 123, 124} // e.g. 124: 1st layer, 2nd row, 4th column
                                     // 3rd row is skipped
            },

            // 2nd matrix
            {
                {211, 212, 213, 214},
                {221, 222, 223, 224},
            },
            // 3, 4, 5 layers will be initialized with 0

            // we want to initialize element to -1, use designators
            [N_LAYERS - 1][N_ROWS - 1][N_COLS - 1] = -1,
            [1][1][3] = -2,
        };

    for (int i = 0; i < LEN; i++)
    {
        printf("%d ", array[i]);
    }

    printf("\n\n---\n\n");

    for (int i = 0; i < N_ROWS; i++)
    {
        for (int j = 0; j < N_COLS; j++)
        {
            printf("%2d ", matrix[i][j]);
        }
        printf("\n");
    }

    printf("\n\n---\n\n");

    for (int l = 0; l < N_LAYERS; l++)
    {
        for (int i = 0; i < N_ROWS; i++)
        {
            for (int j = 0; j < N_COLS; j++)
            {
                printf("%3d ", tensor[l][i][j]);
            }
            printf("\n");
        }
        printf("\n");
    }

    return EXIT_SUCCESS;
}
