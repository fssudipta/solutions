#include <stdio.h>

int main()
{
    short int num;
    scanf("%hi", &num);
    short int a = num >> 15;
    short b = a & 1;
    if (b)
    {
        printf("neg\n");
        short bit = b ^ 1;
        bit = bit << 15;
        printf("pos is %hi", (bit & num));
    }
    else
        printf("pos\n");
}