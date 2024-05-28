#include <stdio.h>

int main() {
    int x, n;
    scanf("%d %d", &x, &n);
    printf("%d", ~(1<<n)&x);
    return 0;
}