#include<stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    printf("before swapping: %d %d", a,b);
    a^=b;
    b^=a;
    a^=b;
    printf("\nAfter swapping: %d %d", a,b);
    return 0;
}