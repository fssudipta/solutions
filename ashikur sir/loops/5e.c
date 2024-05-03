#include <stdio.h>
int main()
{
    int n, sum = 0, term = 1;
    printf("enter n: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            term *= 2;
        }
        sum += term;
        term=1;
    }
    printf("sum is %d", sum);
    return 0;
}