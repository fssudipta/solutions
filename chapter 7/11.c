#include <stdio.h>

void result(int *p, int *q)
{
    int hcf = 1, lcm;
    for (int i = 1; i <= *p && i <= *q; i++)
    {
        if (*p % i == 0 && *q % i == 0)
            hcf = i;
    }
    printf("%d", hcf);
    lcm = (*p) * (*q) / hcf;
    printf("\n%d", lcm);
}

int main()
{
    int n1, n2;
    scanf("%d %d", &n1, &n2);
    result(&n1, &n2);
    return 0;
}
