#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 1000000;
    int b = 5000000;

    double c = (double) a * b;
    printf("%.0e\n", c);

    return EXIT_SUCCESS;
}
