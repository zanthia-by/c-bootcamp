#include <stdio.h>
#include <stdlib.h>

typedef enum 
{
    TEA ,
    COFFEE,
    JUICE,
    BEER,
} Menu;

int main()
{
    Menu mario = COFFEE;
    Menu andrea = BEER;

    printf("Mario ordered:   %d\n", mario);
    printf("Andrea ordered:  %d\n", andrea);

   return EXIT_SUCCESS;
}
