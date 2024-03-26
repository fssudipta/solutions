#include<stdio.h>

int abs(int n)
{
    if(n<0)
    n=n*(-1);
    else n=n;
    return n;
}

int sqr(int n)
{
    return n*n;
}

int cube(int n)
{
    return n*n*n;
}

int main()
{
    int n;
    printf("enter an integer value: ");
    scanf("%d", &n);
    printf("absolute value: %d", abs(n));
    printf("\nsquare: %d", sqr(n));
    printf("\ncube: %d", cube(n));
    return 0;
}