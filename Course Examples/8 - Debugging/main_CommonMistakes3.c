#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 1000000;
    int b = 5000000;

    double c = (double)a * b;
    printf("%.0e\n", c);

    int si = -1;
    unsigned ui = 1;

    if (si < ui) // si is converted to UINT_MAX
    {
        printf("As expected\n");
    }
    else
    {
        printf("Something wrong\n");
    }

    // we need explicit casting
    if (si < (int)ui)
    {
        printf("Here we are\n");
    }

    return EXIT_SUCCESS;
}
