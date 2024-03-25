#include <stdio.h>
#include <string.h>

enum months
{
    JAN,
    FEB,
    MAR,
    APR,
    MAY,
    JUN,
    JUL,
    AUG,
    SEP,
    OCT,
    NOV,
    DEC
};

struct dateType
{
    int day;
    enum months month;
    int year;
};

void input(struct dateType *date)
{
    char mstr[4];
    scanf("%d-%3s-%d", &date->day, mstr, &date->year);

    if (strcmp(mstr, "JAN") == 0)
    {
        date->month = JAN;
    }
    else if (strcmp(mstr, "FEB") == 0)
    {
        date->month = FEB;
    }
    else if (strcmp(mstr, "MAR") == 0)
    {
        date->month = MAR;
    }
    else if (strcmp(mstr, "APR") == 0)
    {
        date->month = APR;
    }
    else if (strcmp(mstr, "MAY") == 0)
    {
        date->month = MAY;
    }
    else if (strcmp(mstr, "JUN") == 0)
    {
        date->month = JUN;
    }
    else if (strcmp(mstr, "JUL") == 0)
    {
        date->month = JUL;
    }
    else if (strcmp(mstr, "AUG") == 0)
    {
        date->month = AUG;
    }
    else if (strcmp(mstr, "SEP") == 0)
    {
        date->month = SEP;
    }
    else if (strcmp(mstr, "OCT") == 0)
    {
        date->month = OCT;
    }
    else if (strcmp(mstr, "NOV") == 0)
    {
        date->month = NOV;
    }
    else if (strcmp(mstr, "DEC") == 0)
    {
        date->month = DEC;
    }
}

int compare(struct dateType d1, struct dateType d2)
{
    if (d1.year != d2.year)
        return d1.year < d2.year;
    if (d1.month != d2.month)
        return d1.month < d2.month;
    return d1.day < d2.day;
}

void output(struct dateType date)
{
    const char *months[] = {"JAN", "FEB", "MAR", "APR", "MAY", "JUN", "JUL", "AUG", "SEP", "OCT", "NOV", "DEC"};
    printf("%02d-%s-%d\n", date.day, months[date.month], date.year);
}

int main()
{
    struct dateType date[2];
    printf("Enter 2 dates in dd-mm-yy format\n");
    for (int i = 0; i < 2; i++)
    {
        printf("date %d: ", i + 1);
        input(&date[i]);
    }
    struct dateType smallestDate = date[0];
    if (compare(date[1], smallestDate))
    {
        smallestDate = date[1];
    }
    printf("The smallest date is: ");
    output(smallestDate);

    return 0;
}
