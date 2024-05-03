#include <stdio.h>
int main()
{
    int n, flag = 1;
    scanf("%d", &n);
    if (n <= 0)
        printf("invalid input");
    else if (n == 1)
        printf("1 is not prime");
    else
    {
        for (int i = 2; i * i <= n; i++)
        {
            if (n % i == 0)
                flag = 0;
        }
        if (flag)
            printf("%d is prime", n);
        else
            printf("%d is not prime", n);
    }
    return 0;
}