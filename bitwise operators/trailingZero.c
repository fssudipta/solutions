#include <stdio.h>

int main() {
    int x, n;
    scanf("%d", &x);
    for(int i=0; i<32; i++)
    {
        if((x>>1)&1==0)
        n++;
        else break;
    }
    printf("%d", n);
    return 0;
}