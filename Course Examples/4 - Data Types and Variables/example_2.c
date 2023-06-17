#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main()
{
    double decimalDigits = 1.23456789;
    double worldPopulation = 7.801e9;
    double plankConstant = 6.626E-34;

    printf("%12.1f | 1 decimal digit\n", decimalDigits);
    printf("%12.3f | 3 decimal digits\n", decimalDigits);
    printf("%12.1f | worldPopulation, decimal, 1 digit of precision\n", worldPopulation);
    printf("%12.1e | worldPopulation, scientific, 1 digit of precision\n", worldPopulation);
    printf("%12.3e | worldPopulation, scientific, 3 digit of precision\n", worldPopulation);

   return EXIT_SUCCESS;
}
