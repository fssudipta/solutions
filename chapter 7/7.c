#include<stdio.h>
#include<math.h>

double onlydec(double num)
{
    return num-trunc(num);
}

int main()
{
    double num;
    scanf("%lf", &num);
    printf("%lf", onlydec(num));
    return 0;
}