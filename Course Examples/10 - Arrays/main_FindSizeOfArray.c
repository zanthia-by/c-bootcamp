#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main()
{
    int x[] = {1, 2, 3, 4, 5};

    printf("sizeof(x): %llu\n", sizeof(x));
    //printf("sizeof(int): %llu\n", sizeof(int));
    
    printf("sizeof(x[0]): %llu\n", sizeof(x[0])); // any element can be used
    //sizeof(x[0]) is more versatile than sizeof(int) as we don;t need to know the datatype of each element in the array

    printf("x array length: %llu\n\n", sizeof(x) / sizeof(x[0]));


    int8_t y[] = {1, 2, 3, 4, 5};
    printf("sizeof(y): %llu\n", sizeof(y));
    printf("sizeof(y[0]): %llu\n", sizeof(y[0]));
    printf("sizeof(int8_t): %llu\n", sizeof(int8_t));
    printf("y array length: %llu\n\n", sizeof(y) / sizeof(y[0]));

    return EXIT_SUCCESS;
}
