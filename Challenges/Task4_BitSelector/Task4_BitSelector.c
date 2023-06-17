#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int data = 0xABCD;

    unsigned int n, m;
    printf("Enter N: ");
    scanf("%d", &n);
    printf("Enter M: ");
    scanf("%d", &m);

    // My solution
    // int shiftN = data >> n;
    // unsigned int allSetMask = ~0;
    // int mask = allSetMask << (m - n + 1);
    // int result = shiftN & ~mask;

    unsigned int result = (data >> n) & ~(~0 << (m - n + 1));

    printf("data:   0x%04X\n", data);
    printf("result: 0x%04X\n", result);

    // Course solution

    /**
     * 0b1111 = 15 = 2^4 - 1
     * 0b0111 =  7 = 2^3 - 1
     * 0b0011 =  3 = 2^2 - 1
     * 0b0001 =  1 = 2^1 - 1
     *
     * W: width of the bitmask in bits
     *
     *      bitmask = 2^W - 1
     *
     * [0:1] --> W = 2 bits
     * [0:2] --> W = 3 bits
     * [N:M] --> W = M - N + 1
     *
     * 2^W = 1 << W
     *
     *       bitmask = 2^W - 1 = (1 << W) - 1
     */

    unsigned W = m - n + 1;
    unsigned bitmask = (1 << W) - 1;
    unsigned result2 = (data >> n) & bitmask;

    printf("\n");
    printf("data:    0x%04X\n", data);
    printf("result2: 0x%04X\n", result2);

    return EXIT_SUCCESS;
}
