#include <stdio.h>
#include <stdlib.h>
int main()
{
    int tri1, tri2, geo1, geo2;
    scanf("%d %d", &tri1, &tri2);
    geo1 = tri1 - 180 * (tri1 / 180);
    geo2 = tri2 - 180 * (tri2 / 180);
    printf("%d %d %d", geo1, geo2, abs(geo1 - geo2));
    return 0;
}