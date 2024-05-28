#include<stdio.h>
void printbin(int n)
{
    if(n==0)
    return;
    printbin(n>>1);
    (n&1)? printf("1"):printf("0");
}

int main()
{
    int n;
    scanf("%d", &n);
    printbin(n);
    return 0;
}