#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main()
{
    int x[] = {9, 8, 7, 6, 5};

    for (int i = 0; i < sizeof(x) / sizeof(x[0]); i++)
    {
        printf("x[%d]: %d\n", i, x[i]);
    }

    printf("Access an element of x through the pointer:\n");
    int *p = &x[2];
    printf("x[2]: %d, *p: %d\n", x[2], *p);
    *p = 0;
    printf("x[2]: %d, *p: %d\n", x[2], *p);

    printf("Array address:\n");
    printf("&x[0]: %llX\n", (uint64_t) &x[0]);
    printf("x:     %llX\n", (uint64_t) x);

    //int *alias = x;
    //int *alias = &x[0]; // this is the same as previous line

    p = x;

    printf("Display x through the pointer:\n");
    for (int i = 0; i < sizeof(x) / sizeof(x[0]); i++)
    {
        printf("i: %d, x[i]: %d, p[i]: %d\n", i, x[i], p[i]);
    }

    printf("Set x to 0, 1, 2, 3, 4 through the pointer:\n");
    for (int i = 0; i < sizeof(x) / sizeof(x[0]); i++)
    {
        p[i] = i;
    }
    for (int i = 0; i < sizeof(x) / sizeof(x[0]); i++)
    {
        printf("i: %d, x[i]: %d, p[i]: %d\n", i, x[i], p[i]);
    }

    return EXIT_SUCCESS;
}
