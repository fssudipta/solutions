#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int randint(int a, int b)
{
    int x = rand() % (b - a) + a;
    return x;
}

double randfrac(double a, double b)
{
    double x = (double)rand()/RAND_MAX * (b - a) + a;
    return x;
}

int main()
{
    srand(time(NULL));
    int a, b;
    scanf("%d %d", &a, &b);
    printf("random integer between %d and %d: %d", a, b, randint(a, b));
    printf("\nrandom fraction between %d and %d: %lf", a, b, randfrac((double)a,(double)b));
    return 0;
}