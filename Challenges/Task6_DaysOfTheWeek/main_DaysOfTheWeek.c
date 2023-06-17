#include <stdio.h>
#include <stdlib.h>

typedef enum
{
    DAY_MON = 1,
    DAY_TUE,
    DAY_WED,
    DAY_THU,
    DAY_FRI,
    DAY_SAT,
    DAY_SUN,
} Day;

int main()
{
    printf("MON: %d\n", DAY_MON);
    printf("SUN: %d\n", DAY_SUN);

    Day day;
    printf("Enter a day number: ");
    scanf("%u", &day);

    switch (day)
    {
    case DAY_MON:
        printf("Monday\n");
        break;
    case DAY_TUE:
        printf("Tuesday\n");
        break;
    case DAY_WED:
        printf("Wednesday\n");
        break;
    case DAY_THU:
        printf("Thursday\n");
        break;
    case DAY_FRI:
        printf("Friday\n");
        break;
    case DAY_SAT:
        printf("Saturday\n");
        break;
    case DAY_SUN:
        printf("Sunday\n");
        break;
    default:
        printf("Day %u is unknown\n", day);
        break;
    }

    return EXIT_SUCCESS;
}
