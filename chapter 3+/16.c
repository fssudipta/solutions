#include<stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int flag1=0, flag2=0;
    switch(a)
    {
        case -8 ... -4:
        flag1=1;
        break;
        case 10 ... 16:
        flag1=1;
        break;
        default:
        ;
    }
    switch(b)
    {
        case -8 ... -4:
        flag2=1;
        break;
        case 10 ... 16:
        flag2=1;
        break;
        default:
        ;
    }
    if(flag1 && flag2)
    printf("both are in ranges");
    else printf("not in ranges");
    return 0;
}