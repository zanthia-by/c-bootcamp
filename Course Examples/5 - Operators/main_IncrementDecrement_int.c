#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;

    a = 0;
    b = a++ * 2 + 1;

    printf("After postincrement:\n");
    printf("a: %d\n", a);
    printf("b: %d\n", b);

    a = 0;
    b = ++a * 2 + 1;

    printf("After preincrement:\n");
    printf("a: %d\n", a);
    printf("b: %d\n", b);

    return EXIT_SUCCESS;
}
