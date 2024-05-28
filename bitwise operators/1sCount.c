#include <stdio.h>

int main() {
    int x, n;
    scanf("%d", &x);
    for(int i=0; i<32; i++)
    {
        if(((x>>i)&1)==1)
        n++;
    }
    printf("zeros: %d ones: %d", 32-n, n);
    return 0;
}