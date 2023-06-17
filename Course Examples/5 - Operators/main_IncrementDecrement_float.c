#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a, b;

    a = 3.14;
    b = a++;

    printf("After postincrement:\n");
    printf("a: %.2f\n", a);
    printf("b: %.2f\n", b);

    a = 3.14;
    b = ++a;

    printf("After preincrement:\n");
    printf("a: %.2f\n", a);
    printf("b: %.2f\n", b);

    return EXIT_SUCCESS;
}
