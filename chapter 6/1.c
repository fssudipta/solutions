#include <stdio.h>

int nthTerm(int a, int d, int n)
{
    if (n == 1)
    {
        return a;
    }
    else
    {
        return d + nthTerm(a, d, n - 1);
    }
}

int sumOfNterms(int a, int d, int n)
{
    if (n == 1)
    {
        return a;
    }
    else
    {
        return nthTerm(a, d, n) + sumOfNterms(a, d, n - 1);
    }
}

int main()
{
    int a = 2; // First term
    int d = 3; // Common difference
    int n = 5; // Number of terms

    printf("The %dth term is: %d\n", n, nthTerm(a, d, n));
    printf("The sum of the first %d terms is: %d\n", n, sumOfNterms(a, d, n));

    return 0;
}
