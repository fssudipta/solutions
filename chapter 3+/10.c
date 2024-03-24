#include<stdio.h>
int main()
{
    int time;
    scanf("%d", &time);
    switch(time)
    {
        case 1 ... 2:
        printf("midnight");
        break;
        case 3 ... 6:
        printf("dawn");
        break;
        case 7 ... 11:
        printf("morning");
        break;
        case 12 ... 14:
        printf("noon");
        break;
        case 15 ... 17:
        printf("afternoon");
        break;
        case 18 ... 19:
        printf("evening");
        break;
        default:
        printf("night");
        break;
    }
    return 0;
}