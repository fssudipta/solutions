#include <stdio.h>

int main()
{
    short int num;
    scanf("%hi", &num);
    if (num & 1)
        printf("odd");
    else
        printf("even");
    return 0;
}