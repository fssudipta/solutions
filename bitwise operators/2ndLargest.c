#include<stdio.h>

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b,&c);
    int max= (a>b)?(a>c?a:c):(b>c?b:c);
    int min= (a<b)?(a<c?a:c):(b<c?b:c);
    int sec=a^b^c^max^min;
    printf("%d", sec);
    return 0;
}