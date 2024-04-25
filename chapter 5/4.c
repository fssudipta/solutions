#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);

    int ar1[n], ar2[m];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar1[i]);
    }
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &ar2[i]);
    }

    int new[n + m];
    int j = 0;

    for (int i = 0; i < n; i++)
    {
        new[j++] = ar1[i];
    }

    for (int i = 0; i < m; i++)
    {
        new[j++] = ar2[i];
    }

    printf("new array:\n");
    for (int i = 0; i < n + m; i++)
    {
        printf("%d ", new[i]);
    }

    return 0;
}
