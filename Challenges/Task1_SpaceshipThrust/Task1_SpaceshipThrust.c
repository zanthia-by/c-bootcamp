#include <stdio.h>
#include <stdlib.h>

typedef enum
{
    THRUST_NONE = 0,
    THRUST_LOW = 5,
    THRUST_MEDIUM = 9,
    THRUST_HIGH = 12,
    THRUST_MAXIMUM = 20,
} SpaceshipThrust;

int main()
{   
    SpaceshipThrust thrust = THRUST_NONE;
    printf("Ready to go: %d\n", thrust);

    thrust = THRUST_MAXIMUM;
    printf("Take off:  %d\n", thrust);

    thrust = THRUST_MEDIUM;
    printf("Entering into the ionosphere:  %d\n", thrust);

    thrust = THRUST_LOW;
    printf("Traveling to deep space:  %d\n", thrust);

    return EXIT_SUCCESS;
}
