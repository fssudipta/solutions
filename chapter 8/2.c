#include <stdio.h>

#define MAX_INPUTS 100

void displayInReverse(int arr[], int n)
{
    if (n < 1)
        return;
    printf("%d\n", arr[n - 1]);
    displayInReverse(arr, n - 1);
}

void inputAndDisplayReverse(int index)
{
    static int numbers[MAX_INPUTS];

    if (index >= MAX_INPUTS)
    {
        displayInReverse(numbers, index);
        return;
    }

    printf("Enter an integer (0 to stop): ");
    scanf("%d", &numbers[index]);

    if (numbers[index] == 0)
    {
        displayInReverse(numbers, index);
        return;
    }

    inputAndDisplayReverse(index + 1);
}

int main()
{
    inputAndDisplayReverse(0);
    return 0;
}
