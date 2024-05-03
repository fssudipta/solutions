#include<stdio.h>
int main()
{
    int num, res=1;
    scanf("%d", &num);
    while(num)
    {
        int digit=num%10;
        res*=digit;
        num /= 10;
    }
    printf("%d", res);
    return 0;
}