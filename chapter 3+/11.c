#include <stdio.h>
int main()
{
    char c;
    c = getchar();
    if (c >= 65 && c <= 90)
        putchar(c + 32);
    else if (c >= 97 && c <= 122)
        putchar(c - 32);
    return 0;
}
