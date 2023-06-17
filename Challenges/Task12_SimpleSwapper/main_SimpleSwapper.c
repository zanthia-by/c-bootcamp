#include <stdio.h>
#include <stdlib.h>

void swap(int *const x, int *const y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main()
{
    int a = 10, b = 20;
    printf("Before %d and %d\n", a, b);
    swap(&a, &b);
    printf("After %d and %d\n", a, b);

    return EXIT_SUCCESS;
}