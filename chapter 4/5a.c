#include <stdio.h>

int main()
{
    float x;
    int n;
    scanf("%f %d", &x, &n);

    float sum = x, term = x;

    for (int i = 1; i < n; i++)
    {
        int denom = 2 * i * (2 * i + 1);
        term = (term * x * x * (-1)) / denom;
        sum += term;
    }

    printf("%f\n", sum);
    return 0;
}
