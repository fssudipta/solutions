#include <stdio.h>

int main()
{
    int v, *p, *pp;
    v = 5;
    p = &v;
    pp = p;
    printf("v=%d\n *p=%d, %p\n *pp=%d, %p", v, *p, p, *pp, pp);
    return 0;
}