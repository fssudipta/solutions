#include <stdio.h>

int main() {
    int x, n, p;
    scanf("%d %d %d", &x, &n, &p);
    //nth pos theke baame
    for(int i=0; i<n; i++)
    {
        x=x&~(1<<(p+i));
    }
    printf("%d", x);
    return 0;
}