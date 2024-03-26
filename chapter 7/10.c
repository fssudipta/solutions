#include <stdio.h>

int leap(int year)
{
    if ((year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0)))
        return 1;
    return 0;
}

int main()
{
    int year;
    scanf("%d", &year);
    if (leap(year)) 
        printf("%d is a leap year", year);
    else
        printf("%d is not a leap year", year);
    return 0;
}
