#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int n;
    printf("Enter positive integer number: ");
    scanf("%d", &n);

    if (n < 0)
    {
        printf("Number %d is negative!\n", n);
        return EXIT_FAILURE;
    }

    bool isEven = n % 2 == 0 ? true : false;
    if (isEven)
    {
        printf("Is even\n");
    }
    else
    {
        printf("Is odd\n");
    }

    return EXIT_SUCCESS;
}
