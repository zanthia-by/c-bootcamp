#include <stdio.h>
#include <stdlib.h>

int main()
{
    double r;
    printf("Enter the radius: ");
    scanf("%lf", &r);
    printf("\n");

    const double pi = 3.14159265359;
    double surface = 4.0 * pi * r * r;
    double volume = (4.0 / 3) * pi * r * r * r; // 3 promoted to double

    printf("Radius:  %.2f\n", r);
    printf("Surface: %.2f\n", surface);
    printf("Volume:  %.2f\n", volume);

    printf("\n");
    printf("Radius:  %.3e\n", r);
    printf("Surface: %.3e\n", surface);
    printf("Volume:  %.3e\n", volume);

    return EXIT_SUCCESS;
}
