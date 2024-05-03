#include <stdio.h>

int main()
{
    int n, first = 0, second = 1, next;
    printf("Enter the number of Fibonacci numbers to generate: ");
    scanf("%d", &n);
    if (n <= 0)
    {
        printf("Please enter a positive integer.\n");
        return 1;
    }
    printf("First %d Fibonacci numbers:\n", n);
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            printf("%d ", first);
            continue;
        }
        if (i == 1)
        {
            printf("%d ", second);
            continue;
        }
        next = first + second;
        first = second;
        second = next;
        printf("%d ", next);
    }
    printf("\n");
    return 0;
}
