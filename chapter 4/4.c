#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int num1 = a, num2 = b;
    int temp;

    do
    {
        temp = b;
        b = a % b;
        a = temp;
    } while (b != 0);

    int gcd = a;
    int lcm = (num1 * num2) / gcd;

    // int n1, n2, i, j, gcd;
    // scanf("%d %d", &n1, &n2);
    // j = (n1 < n2) ? n1 : n2;
    // for (i = 1; i < j; i++)
    // {
    //     if (n1 % i == 0 && n2 % i == 0)
    //         gcd = i;
    // }
    // int lcm = (n1 * n2) / gcd;

    printf("GCD: %d\n", gcd);
    printf("LCM: %d\n", lcm);

    return 0;
}
