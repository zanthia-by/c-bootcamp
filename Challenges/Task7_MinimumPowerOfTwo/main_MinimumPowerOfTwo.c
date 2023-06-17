#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    do
    {
        printf("Enter a number (-1 to exit): ");
        scanf("%d", &n);

        if (n > 0)
        {
            int powerOfTwo = 1;
            while (powerOfTwo < n)
            {
                // powerOfTwo *= 2; // from course: the same as: powerOfTwo <<= 1;
                powerOfTwo <<= 1;
            }
            printf("The smallest power of 2 is: %d\n", powerOfTwo);
        }
        else
        {
            printf("Wrong input: %d\n", n);
        }
    } while (n != -1);

    return EXIT_SUCCESS;
}
