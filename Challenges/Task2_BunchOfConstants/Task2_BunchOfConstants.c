#include <stdio.h>
#include <stdlib.h>

int main()
{   
    const int moonLanding = 1969;
    const double speedOfLight = 299792458.;
    const double pi = 3.142;
    const unsigned hexaDead = 0xDEADU;
    const unsigned hexaSecret = 51966U;

    printf("moonLanding: %10d\n", moonLanding);
    printf("moonLanding: %010d\n\n", moonLanding);

    printf("speedOfLight: %.0f\n", speedOfLight);
    printf("speedOfLight: %.3e\n\n", speedOfLight);

    printf("pi: %.2f\n", pi);
    printf("pi: %+.1e\n\n", pi);

    // printf("hexaDead: %#X\n", hexaDead);
    printf("hexaDead: 0x%X\n", hexaDead);
    printf("hexaDead: %6u\n\n", hexaDead);

    printf("hexaSecret: %x\n\n", hexaSecret);

    return EXIT_SUCCESS;
}
