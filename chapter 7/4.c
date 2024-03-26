#include<stdio.h>

int term(int a, int d, int n)
{
    int term= a+(n-1)*d;
    return term;
}

int sum(int a, int d, int n)
{
    int sum= n*(2*a+(n-1)*d)/2;
    return sum;
}

int main()
{
    int a, d, n;
    printf("enter first term, common difference and n(nth term): ");
    scanf("%d %d %d", &a, &d, &n);
    printf("nth term is: %d", term(a,d,n));
    printf("\nsum is: %d", sum(a,d,n));
    return 0;
}