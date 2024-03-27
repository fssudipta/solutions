#include <stdio.h>
#include <math.h>

//collected

void helperDisplayLeftToRight(int n, int div)
{
    if (n < 10)
    {
        printf("%d ", n);
        return;
    }
    printf("%d ", n / div);
    helperDisplayLeftToRight((n % div), div / 10);
}

void displayDigitsLeftToRight(int n)
{
    if (n == 0)
    {
        printf("0 ");
        return;
    }
    int div = 1;
    int temp = n;
    while (temp >= 10)
    {
        temp /= 10;
        div *= 10;
    }
    helperDisplayLeftToRight(n, div);
}

void displayDigitsRightToLeft(int n)
{
    if (n < 10)
    {
        printf("%d ", n);
        return;
    }
    printf("%d ", n % 10);
    displayDigitsRightToLeft(n / 10);
}

int main()
{
    int number = 12345;
    printf("Digits from left to right: ");
    displayDigitsLeftToRight(number);
    printf("\n");

    printf("Digits from right to left: ");
    displayDigitsRightToLeft(number);
    printf("\n");

    return 0;
}
