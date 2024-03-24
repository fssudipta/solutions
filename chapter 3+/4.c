#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d", &a, &b, &c);
    int max, max2, max3;
    if(a>b && a>c)
    {
        max=a;
        if(b>c)
        {
            max2=b;
            max3=c;
        }
        else 
        {
            max2=c;
            max3=b;
        }
    }
    else if(b>a && b>c)
    {
        max=b;
        if(a>c)
        {
            max2=a;
            max3=c;
        }
        else 
        {
            max2=c;
            max3=a;
        }
    }
    else if(c>b && c>a)
    {
        max=c;
        if(b>a)
        {
            max2=b;
            max3=a;
        }
        else 
        {
            max2=a;
            max3=b;
        }
    }
    printf("%d %d %d", max3, max2, max);
    return 0;
}