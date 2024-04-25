#include <stdio.h>

int main()
{
    int a[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47,
               53, 59, 61, 67, 71, 73, 79, 83, 89, 97};
    int n = sizeof(a) / sizeof(a[0]); // Number of primes in the array

    int b[25] = {0};
    int x;
    printf("Enter a number between 1 and 10000: ");
    scanf("%d", &x);

    // Factorize x using the primes in a
    for (int i = 0; i < n; i++)
    {
        while (x % a[i] == 0)
        {
            x /= a[i];
            b[i]++;
        }
    }

    printf("Prime factorization: ");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < b[i]; j++)
        {
            printf("%d ", a[i]);
        }
    }
    return 0;
}
