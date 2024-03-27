#include <stdio.h>

int recursive(int n)
{
    if (n == 1)
    {
        printf("%d ", n);
        return 1;
    }
    else if (n % 2 == 0)
    {
        printf("%d ", n);
        return 1 + recursive(n / 2);
    }
    else
    {
        printf("%d ", n);
        return 1 + recursive(3 * n + 1);
    }
}

int main()
{
    int n = 22;
    printf("\nReturn value: %d\n", recursive(n));
    return 0;
}
