#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    const int MAX = 1000;
    int upperLimit, lowerLimit;

    printf("Enter upper limit: ");
    scanf("%d", &upperLimit);
    if (upperLimit < 2 || upperLimit > MAX)
    {
        goto cleanup;
    }

    printf("Primes below %d:\n", upperLimit);
    for (int i = 2; i < upperLimit; i++)
    {
        int j = 2;
        for (; j < i; j++)
        {
            if (i % j == 0)
            {
                break;
            }
        }
        if (i == j)
        {
            printf("%d\n", i);
        }
    }

     printf("Enter lower limit: ");
    scanf("%d", &lowerLimit);
    if (lowerLimit < 2 || lowerLimit > MAX)
    {
        goto cleanup;
    }

    int firstPrimeBelowLowerLimit = -1;
    for (int i = lowerLimit; i < MAX; i++)
    {
        bool isPrime = true;
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                isPrime = false;
                break;
            }
        }
        if (isPrime)
        {
            firstPrimeBelowLowerLimit = i;
            break;
        }
    }
    if (firstPrimeBelowLowerLimit == -1)
    {
        printf("Cannot find prime number above %d\n", lowerLimit);
    }
    else
    {
        printf("First prime above %d is %d\n", lowerLimit, firstPrimeBelowLowerLimit);
    }

cleanup:
    printf("Cleanup...");

    return EXIT_SUCCESS;
}
