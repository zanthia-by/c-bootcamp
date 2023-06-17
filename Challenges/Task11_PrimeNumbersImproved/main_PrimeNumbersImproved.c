#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

const int MAX = 1000;

bool isLimitOutOfBounds(int limit);
void printError();
bool isPrime(int number);

int main()
{

    int upperLimit, lowerLimit;

    printf("Enter upper limit: ");
    scanf("%d", &upperLimit);
    if (isLimitOutOfBounds(upperLimit))
    {
        printError();
        return EXIT_FAILURE;
    }

    printf("Primes below %d:\n", upperLimit);
    for (int i = 2; i < upperLimit; i++)
    {
        if (isPrime(i))
        {
            printf("%d\n", i);
        }
    }

    printf("Enter lower limit: ");
    scanf("%d", &lowerLimit);
    if (isLimitOutOfBounds(lowerLimit))
    {
        printError();
        return EXIT_FAILURE;
    }

    int firstPrimeBelowLowerLimit = -1;
    for (int i = lowerLimit; i < MAX; i++)
    {
        if (isPrime(i))
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

    return EXIT_SUCCESS;
}

bool isLimitOutOfBounds(int limit)
{
    return (limit < 2 || limit > MAX);
}

void printError() 
{
    printf("Limit should be between 2 and %d", MAX);
}

bool isPrime(int number)
{
    for (int i = 2; i < number; i++)
    {
        if (number % i == 0)
        {
            return false;
        }
    }
    return true;
}