#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main()
{
    int variable = 0;

    printf("%llu\n", sizeof(variable));
    printf("int: %llu\n", sizeof(int));
    printf("long int: %llu\n", sizeof(long int));
    printf("long long int: %llu\n", sizeof(long long int));
    printf("char: %llu\n", sizeof(char));

    printf("int16_t: %llu\n", sizeof(int16_t));
    printf("int32_t: %llu\n", sizeof(int32_t));
    printf("int64_t: %llu\n", sizeof(int64_t));
    printf("logical operation result: %llu\n", sizeof(123 && 456));
    printf("logical operation result (LL): %llu\n", sizeof(123LL && 456LL));

    return EXIT_SUCCESS;
}
