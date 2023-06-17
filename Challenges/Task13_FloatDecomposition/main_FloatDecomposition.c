#include <stdio.h>
#include <stdlib.h>

void decompose(float num, int *const int_part, float *const frac_part)
{
    *int_part = (int) num;
    *frac_part = num - *int_part;
}

int main()
{
    float input;
    printf("Enter a number: \n");
    scanf("%f", &input);

    int int_part;
    float frac_part;
    decompose(input, &int_part, &frac_part);

    printf("You entered:  %.2f\n", input);
    printf("Integer part: %d\n", int_part);
    printf("Fractional part: %.2f\n", frac_part);

    float reconstructed = int_part + frac_part;
    printf("Reconstructed number: %.2f\n", reconstructed);
    return EXIT_SUCCESS;
}
