#include<stdio.h>
int main()
{
    int n, countpos=0, countneg=0;
    while(1)
    {
        scanf("%d", &n);
        if (n==0)
        break;
        else{
            if(n>0)
            countpos++;
            else countneg++;
        }
    }
    printf("positive numbers: %d \t\t negative numbers: %d", countpos, countneg);
    return 0;
}