#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int n;
    scanf("%d", &n);
    int num[n];
    for (int i = 0; i < n; i++)
    {
        num[i] = rand();
        printf("%d\n", num[i]);
    }
    int max = num[0];
    int min = num[0];
    for (int i = 0; i < n; i++)
    {
        if (max < num[i])
            max = num[i];
        if (min > num[i])
            min = num[i];
    }
    printf("\nmax is %d and min is %d", max, min);
    return 0;
}