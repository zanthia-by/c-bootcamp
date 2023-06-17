#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

#define DEF_LEN 5

void array_maker(int len)
{
    // VLA - variable length array
    int vla[len];
    // length of array after declaration cannot change anymore
    // we cannot initialize VLA with {}

    for (int i = 0; i < len; i++)
    {
        vla[i] = i;
    }
    for (int i = 0; i < len; i++)
    {
        printf("%d ", vla[i]);
    }
}

int main()
{
    // const int LEN = 5;
    // int x[LEN] = {1, 2, 3}; // error: variable-sized object may not be initialized except with an empty initializer

    int x[DEF_LEN] = {1, 2, 3};
    for (int i = 0; i < DEF_LEN; i++)
    {
        printf("%d ", x[i]);
    }

    while (1)
    {
        int len;
        printf("\nEnter the len: ");
        scanf("%d", &len);
        if (len < 1)
        {
            break;
        }
        array_maker(len);
    }

    return EXIT_SUCCESS;
}
