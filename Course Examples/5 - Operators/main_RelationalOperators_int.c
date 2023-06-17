#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;

    printf("Enter A(int): ");
    scanf("%d", &a);
    printf("Enter B(int): ");
    scanf("%d", &b);
    printf("\n");

    printf("A == B --> %d\n", a == b);
    printf("A != B --> %d\n", a != b);
    printf("A > B --> %d\n", a > b);
    printf("A < B --> %d\n", a < b);
    printf("A >= B --> %d\n", a >= b);
    printf("A <= B --> %d\n", a <= b);

    return EXIT_SUCCESS;
}
