#include <stdio.h>
#include <stdlib.h>

int main()
{
    const int MAX_ITERATIONS = 10000;

    // Earth(365) - Venus(225) - Mercury(88)
    // Earth(365) - Mar(687) - Jupiter(4333)
    unsigned int a, b, c;
    printf("Enter duration (in days) of orbit A: ");
    scanf("%d", &a);
    printf("Enter duration (in days) of orbit B: ");
    scanf("%d", &b);
    printf("Enter duration (in days) of orbit C: ");
    scanf("%d", &c);

    unsigned int max_a_b = (a > b) ? a : b;
    unsigned int max = (max_a_b > c) ? max_a_b : c;

    unsigned int lcm = 0;
    unsigned int candidate_lcm = max;

    for (int i = 1; i < MAX_ITERATIONS; i++)
    {
        if (candidate_lcm % a == 0 && candidate_lcm % b == 0 && candidate_lcm % c == 0)
        {
            lcm = candidate_lcm;
            break;
        }
        candidate_lcm += max;
    }

    if (lcm > 0)
    {
        printf("Days elapsed between planets linear alignment: %u\n", lcm);
        printf("Planet A completes %5u orbits around the star\n", lcm / a);
        printf("Planet B completes %5u orbits around the star\n", lcm / b);
        printf("Planet C completes %5u orbits around the star\n", lcm / c);
    }
    else
    {
        printf("Warning: max number of iterations exceeded\n");
    }

    return EXIT_SUCCESS;
}
