#include <stdio.h>
int main()
{
    int n;
    float sum = 1, term=1;
    scanf("%d", &n);
    for (int i = 2; i <= n; i++)
    {
        term= term/(i - 1);
        sum += term;
    }
    printf("%f", sum);
    return 0;
}