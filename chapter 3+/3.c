#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d", &a, &b, &c);
    int max, max2;
    if(a>b && a>c)
    {
        max=a;
        if(b>c)
        max2=b;
        else max2=c;
    }
    else if(b>a && b>c)
    {
        max=b;
        if(a>c)
        max2=a;
        else max2=c;
    }
    else if(c>b && c>a)
    {
        max=c;
        if(b>a)
        max2=b;
        else max2=a;
    }
    printf("%d %d", max, max2);
    return 0;
}