#include <stdio.h>

int main()
{
    char date[11];
    int day = 0, month = 0, year = 0;

    printf("Enter a date (DD-MM-YYYY): ");
    scanf("%s", date);

    int i = 0;
    while (date[i] != '\0')
    {
        if (date[i] == '-')
        {
            i++;
            break;
        }
        day = day * 10 + (date[i] - '0');
        i++;
    }
    while (date[i] != '\0')
    {
        if (date[i] == '-')
        {
            i++;
            break;
        }
        month = month * 10 + (date[i] - '0');
        i++;
    }
    while (date[i] != '\0')
    {
        year = year * 10 + (date[i] - '0');
        i++;
    }
    printf("Day: %d %d %d\n", day, month, year);
    return 0;
}