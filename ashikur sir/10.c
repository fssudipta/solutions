#include <stdio.h>
#include <math.h>

int countDigits(int n)
{
    int count = 0;
    while (n != 0)
    {
        n /= 10;
        count++;
    }
    return count;
}

int isArmstrong(int n)
{
    int original = n, sum = 0, digits = countDigits(n);
    while (n > 0)
    {
        int digit = n % 10;
        sum += (int)pow(digit, digits);
        n /= 10;
    }
    return sum == original;
}

int main()
{
    int n;
    printf("Enter an integer: ");
    scanf("%d", &n);

    if (isArmstrong(n))
    {
        printf("%d is an Armstrong number.\n", n);
    }
    else
    {
        printf("%d is not an Armstrong number.\n", n);
    }

    return 0;
}
