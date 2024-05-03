#include <stdio.h>
int main()
{
    int n, sum = 0, term;
    printf("enter n: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
            term = -i;
        else
            term = i;
        sum += term;
    }
    printf("sum is %d", sum);
    return 0;
}