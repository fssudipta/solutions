#include <stdio.h>

int main() {
    int x, n;
    scanf("%d", &x);
    for(int i=0; i<32; i++)
    {
        if((x>>i)&1)
        {
            n=i;
            break;
        }
    }
    printf("%d", n);
    return 0;
}