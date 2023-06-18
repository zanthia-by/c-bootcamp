#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#include <time.h>

/**
 * === Prime Numbers Further Improved ===
 *
 * Prime number: integer number greater than 1, only divisible by 1 and itself
 *
 * Goals:
 *  - Find all prime numbers below a given upper limit given by the user
 *  - Check that 2 < upper limit <= 1 million
 *  - Store prime numbers in an array of 100k integers
 *  - Optimize the program by using stored prime numbers
 *  - Compare the execution time of the simple version with the optimized one
 *  - Implement printing of primes found separately from the algorithm
 *  - Print up to 50 prime numbers found
 *
 * Simple version:
 *  - given an input number, n, check whether it is evenly divisible by ANY NUMBER
 *    between 2 and sqrt(n) (i.e. that the division leaves no remainder)
 *
 * Optimized version:
 *  - given an input number, n, check whether it is evenly divisible by ANY PRIME NUMBER
 *    between 2 and sqrt(n) (i.e. that the division leaves no remainder)
 *
 */

#define MIN_UPPER_LIMIT 3
#define MAX_UPPER_LIMIT 1000000
#define MAX_N_PRIMES 100000
#define MAX_PRIMES_PRINT 50

int find_primes(int upper_limit, bool optimized, int primes[]);
bool is_prime(int num, bool optimized, int primes[], int n_primes);
bool is_prime_simple(int number);
bool is_prime_optimized(int number, int primes[], int len_primes);
void print_primes(int primes[], int len_primes);
double elapsed_time_sec(clock_t start, clock_t end);

int main()
{
    int upper_limit;
    printf("Enter upper limit between %d and %d:\n", MIN_UPPER_LIMIT, MAX_UPPER_LIMIT);
    scanf("%d", &upper_limit);
    if (upper_limit < MIN_UPPER_LIMIT || upper_limit > MAX_UPPER_LIMIT)
    {
        printf("%d is out of bounds\n", upper_limit);
        return EXIT_FAILURE;
    }

    printf("--Simple version--\n");

    int primes[MAX_N_PRIMES] = {0};
    int n_primes = 0;

    clock_t start = clock(); // get the number of clock ticks elapsed since the program was launched
    n_primes = find_primes(upper_limit, false, primes);
    clock_t end = clock();
    printf("Time elapsed: %.1f [ms]\n", elapsed_time_sec(start, end) * 1000);
    print_primes(primes, n_primes);

    printf("--Optimized version--\n");

    int primes2[MAX_N_PRIMES] = {0};
    int n_primes2 = 0;

    start = clock();
    n_primes2 = find_primes(upper_limit, true, primes2);
    end = clock();
    printf("Time elapsed: %.1f [ms]\n", elapsed_time_sec(start, end) * 1000);
    print_primes(primes2, n_primes2);

    return EXIT_SUCCESS;
}

int find_primes(int upper_limit, bool optimized, int primes[])
{
    int n_primes = 0;
    for (int i = 2; i < upper_limit; i++)
    {
        if (is_prime(i, optimized, primes, n_primes))
        {
            primes[n_primes++] = i;
        }
    }
    return n_primes;
}

bool is_prime(int num, bool optimized, int primes[], int n_primes)
{
    return optimized ? is_prime_optimized(num, primes, n_primes) : is_prime_simple(num);
}

bool is_prime_simple(int number)
{
    const int limit = sqrt(number);
    for (int i = 2; i <= limit; i++)
    {
        if (number % i == 0)
        {
            return false;
        }
    }
    return true;
}

bool is_prime_optimized(int number, int primes[], int len_primes)
{
    const int limit = sqrt(number);
    for (int i = 0; (i < len_primes) && (primes[i] <= limit); i++)
    {
        if (number % primes[i] == 0)
        {
            return false;
        }
    }

    // int start = len_primes > 0 ? primes[len_primes - 1] : 2;
    // for (int i = start; i <= sqrt(number); i++)
    // {
    //     if (number % i == 0)
    //     {
    //         return false;
    //     }
    // }
    return true;
}

void print_primes(int primes[], int len_primes)
{
    printf("Found %d prime numbers.\n", len_primes);
    int n = len_primes < MAX_PRIMES_PRINT ? len_primes : MAX_PRIMES_PRINT;
    for (int i = 0; i < n; i++)
    {
        printf("%d: %d\n", i, primes[i]);
    }
}

double elapsed_time_sec(clock_t start, clock_t end)
{
    return (end - start) / (double)CLOCKS_PER_SEC;
}