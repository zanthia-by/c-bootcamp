#include <stdio.h>
#include <stdlib.h>

enum menu
{
    TEA = 10,
    COFFEE = 20,
    JUICE,
    BEER,
};

int main()
{
    enum menu mario = COFFEE;
    enum menu andrea = BEER;

    printf("Mario ordered:   %d\n", mario);
    printf("Andrea ordered:  %d\n", andrea);

   return EXIT_SUCCESS;
}
