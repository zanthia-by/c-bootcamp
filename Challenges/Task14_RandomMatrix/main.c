#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

#define MIN_ROWS 2
#define MAX_ROWS 10
#define MIN_COLS 2
#define MAX_COLS 10
#define MIN_UPPER_LIMIT 2
#define MAX_UPPER_LIMIT 1000

/**
 * === Random Matrix ===
 *
 * Generate a random matrix and display it in direct and transposed form
 *
 * Goals:
 *  - Generate random matrix with number of rows and columns given by the user
 *  - Check that 1 < rows <= 10, the same for the columns
 *  - Generate random matrix with 0 <= numbers < upper limit given by the user
 *  - Check that 1 < upper limit <= 1000
 *  - Display the matrix in direct and transposed form
 *
 * Tips:
 *  - To generate random numbers below an upper bound you may find the modulo operator useful...
 */

void generate_matrix(const int n_rows, const int n_cols, int upper_limit, int matrix[][n_cols])
// optionally we can specify number of rows:  int matrix[n_rows][n_cols]),
// but int matrix[][n_cols] - n_cols is mandatory to make compiler happy and to be able to tell which offset
// it has to use when indexing by row
{
    for (int i = 0; i < n_rows; i++)
    {
        for (int j = 0; j < n_cols; j++)
        {
            matrix[i][j] = rand() % upper_limit;
        }
    }
}

void print_matrix(const int n_rows, const int n_cols, int matrix[][n_cols], bool transposed)
{
    int n = !transposed ? n_rows : n_cols;
    int m = !transposed ? n_cols : n_rows;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            int element = !transposed ? matrix[i][j] : matrix[j][i];
            printf("%3d ", element);
        }
        printf("\n");
    }
}

int main()
{
    int n_rows, n_cols;
    printf("Enter number of rows %d .. %d:\n", MIN_ROWS, MAX_ROWS);
    scanf("%d", &n_rows);
    if (n_rows < MIN_ROWS || n_rows > MAX_ROWS)
    {
        printf("Wrong number of rows: %d", n_rows);
        return EXIT_FAILURE;
    }

    printf("Enter number of columns %d .. %d:\n", MIN_COLS, MAX_COLS);
    scanf("%d", &n_cols);
    if (n_cols < MIN_COLS || n_cols > MAX_COLS)
    {
        printf("Wrong number of columns: %d", n_cols);
        return EXIT_FAILURE;
    }

    int upper_limit;
    printf("Enter upper limit of a value %d .. %d:\n", MIN_UPPER_LIMIT, MAX_UPPER_LIMIT);
    scanf("%d", &upper_limit);
    if (upper_limit < MIN_UPPER_LIMIT || upper_limit > MAX_UPPER_LIMIT)
    {
        printf("Wrong upper limit: %d", upper_limit);
        return EXIT_FAILURE;
    }

    int matrix[n_rows][n_cols];

    srand(time(NULL));
    generate_matrix(n_rows, n_cols, upper_limit, matrix);

    printf("Generated matrix:\n");
    print_matrix(n_rows, n_cols, matrix, false);

    printf("Transposed matrix:\n");
    print_matrix(n_rows, n_cols, matrix, true);

    return EXIT_SUCCESS;
}
