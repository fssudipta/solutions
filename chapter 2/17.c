#include <stdio.h>

unsigned setBit(unsigned n, int k)
{
    return n | (1 << k);
}

unsigned resetBit(unsigned n, int k)
{
    return n & ~(1 << k);
}

unsigned flipBit(unsigned n, int k)
{
    return n ^ (1 << k);
}

int main()
{
    unsigned n;
    int k, operation;

    printf("Enter an unsigned number: ");
    scanf("%u", &n);
    printf("Enter the bit position to manipulate (0-based): ");
    scanf("%d", &k);
    printf("Choose the operation - 1 (Set), 2 (Reset), 3 (Flip): ");
    scanf("%d", &operation);

    switch (operation)
    {
    case 1:
        printf("Result after setting the %dth bit: %u\n", k, setBit(n, k));
        break;
    case 2:
        printf("Result after resetting the %dth bit: %u\n", k, resetBit(n, k));
        break;
    case 3:
        printf("Result after flipping the %dth bit: %u\n", k, flipBit(n, k));
        break;
    default:
        printf("Invalid operation selected.\n");
    }

    return 0;
}
