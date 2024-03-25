#include<stdio.h>

int main()
{
    int n;
    float x, sum=1, term=1, denom;
    scanf("%d %f", &n, &x);
    for(int i=1; i<n; i++)
    {
        int denom = 2 * i * (2 * i - 1);
        term = (term * x * x * (-1)) / denom;
        sum += term;
    }
    printf("%f", sum);
    return 0;
}