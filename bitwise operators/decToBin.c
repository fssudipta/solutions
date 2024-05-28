#include<stdio.h>

int main()
{
    int dec, idx=31;
    int bin[32]={0};
    scanf("%d", &dec);
    while(idx>=0)
    {
        bin[idx]=dec&1;
        idx--;
        dec>>=1;
    }
    for(int i=0; i<32; i++)
    {
        printf("%d", bin[i]);
    }
}