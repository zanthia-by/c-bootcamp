#include <stdio.h>
#include <stdlib.h>

#define LENGTH 5 // we cannot use variables or constants with brace-initialization
#define LENGTH10 10

int main()
{
    const int LEN = 5;
    int a[LEN]; // a has type int[5] and contains unpredictable values!

    /* Array initialization from brace-enclosed lists*/
    int x[] = {1, 2, 3, 4, 5}; // not define its size to begin with, as it is going to be deduced by compiler from initialization => type is int[5]

    // int y[LEN] = {1, 2, 3}; // ERROR: variable-sized object may not be initialized except with an empty initializer

    // what if we don't want to have int y[5] = {1, 2, 3}; ?

    int a2[LENGTH]; // with macro, this is exactly the same as writing a2[5]

    // int y3[LENGTH] = {1, 2, 3, 4, 5, 6}; //  warning: excess elements in array initializer or too many initializer valuesC/C++(146) or compilation error?

    int y2[LENGTH] = {1, 2, 3}; // the rest of elements will be initialized to 0
    // i.y. y2 has type int[5] and holds 1, 2, 3, 0, 0

    int z[LENGTH] = {0}; // z has type int[5] and holds 0, 0, 0, 0, 0

    int zz[LENGTH] = {};

    for (int i = 0; i < LENGTH; i++)
    {
        printf("%d ", zz[i]);
    }
    printf("\n");

    /* Array initialization with designators (sparse array)*/
    int w[LENGTH] = {[1] = 1, [3] = 1}; // all other elements will be 0, i.e. array holds: 0, 1, 0, 1, 0

    int q[LENGTH] = {[1] = 3, [LENGTH-1] = 5}; // initialize last element in the array

    int t[10] = {[0] = 5, 4, [LENGTH10 - 3] = 3, 2, 1}; // elements which come after index indicated by designator 
    // t has type int[10] and holds: 5, 4, 0, 0, 0, 0, 0, 3, 2, 1


    for (int i = 0; i < 10; i++)
    {
        printf("%d ", t[i]);
    }
    printf("\n");

    return EXIT_SUCCESS;
}
