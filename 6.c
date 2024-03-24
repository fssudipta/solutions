#include<stdio.h>
#include<assert.h>

int main()
{
    int a, b, c, p, q, r;
    float x, y;
    scanf("%d %d %d %d %d %d", &a, &b, &c, &p, &q, &r);
    assert(a*q != b*p); 
    x = (float)(c*q - b*r) / (a*q - b*p);
    y = (float)(-c*p + a*r) / (a*q - b*p);
    printf("%f %f", x, y);

    return 0;
}
