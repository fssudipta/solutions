//practice with switch range
#include<stdio.h>
int main()
{
    int number;
    scanf("%d", &number);
    switch(number/10)
    {
        case 0 ... 4:
        printf("grade F");
        break;
        case 5:
        printf("grade E");
        break;
        case 6:
        printf("grade D");
        break;
        case 7:
        printf("grade C");
        break;
        case 8:
        printf("grade B");
        break;
        default:
        printf("grade F");
        break;
    }
    return 0;
}