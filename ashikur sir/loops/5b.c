#include <stdio.h>
int main()
{
    int n, sum = 0;
    printf("enter n: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        sum += i*i;
    }
    printf("sum is %d", sum);
    return 0;
}