#include <stdio.h>

int fibonacci(int n)
{
    if (n <= 1)
        return n;

    int prev = 0, curr = 1;
    for (int i = 2; i <= n; i++)
    {
        int next = prev + curr;
        prev = curr;
        curr = next;
    }
    return curr;
}

void list(int a, int b)
{
    int arr[100];
    arr[0] = 0, arr[1] = 1;
    int i;
    for (i = 2; i < 100; i++)
    {
        arr[i] = arr[i - 1] + arr[i - 2];
        if (arr[i] > b)
            break;
    }
    for (int j = 0; j < i; j++)
    {
        if (arr[j] >= a && arr[j] <= b)
        {
            printf("%d ", arr[j]);
        }
    }
}

int main()
{
    int n, a, b;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    int curr = fibonacci(n);
    printf("The %dth Fibonacci number is: %d\n", n, curr);

    printf("enter two more numbers: ");
    scanf("%d %d", &a, &b);
    list(a, b);
    return 0;
}
