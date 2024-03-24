#include<stdio.h>
int main()
{
    int month;
    scanf("%d", &month);
    switch(month)
    {
        case 1:
        printf("days 31");
        break;
        case 2:
        printf("days 28");
        break;
        case 3:
        printf("days 31");
        break;
        case 4:
        printf("days 30");
        break;
    }
    //similar way
    //switch case is easier
}