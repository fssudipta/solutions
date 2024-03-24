#include <stdio.h>

int main()
{
    int a, b, c, x;
    scanf("%d %d %d", &a, &b, &c);
    scanf("%d", &x);
    if (x < a && x < b && x < c)
    {
        printf("x is smaller than all three numbers a, b, and c.\n");
    }
    else
    {
        printf("x is not smaller than all three numbers a, b, and c.\n");
    }
    if (x < a || x < b || x < c)
    {
        printf("x is smaller than one or more of the three numbers a, b, and c.\n");
    }
    else
    {
        printf("x is not smaller than any of the three numbers a, b, and c.\n");
    }

    return 0;
}
