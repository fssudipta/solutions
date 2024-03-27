#include <stdio.h>

long long fibonacci(int n)
{
    if (n <= 1)
    {
        return n;
    }
    else
    {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    printf("Fibonacci number at position %d is %lld\n", n, fibonacci(n));
    return 0;
}
