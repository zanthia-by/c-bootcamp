#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr = NULL;

    // if (ptr != NULL)
    // shorter way:
    if (ptr)
    {
        printf(" 1 | Pointed value: %d\n", *ptr);
    }

    int someValue = 123;
    //if (ptr == NULL)
    // shorter way:
    if (!ptr)
    {
        ptr = &someValue;
    }
    if (ptr)
    {
        printf(" 2 | Pointed value: %d\n", *ptr);
    }

    printf("--End--");

    return EXIT_SUCCESS;
}
