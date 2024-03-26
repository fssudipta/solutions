#include <stdio.h>

void copyArray(int src[], int dest[], int n)
{
    for (int i = 0; i < n; i++)
    {
        dest[i] = src[i];
    }
}

void copyArrayReverse(int src[], int dest[], int n)
{
    for (int i = 0; i < n; i++)
    {
        dest[i] = src[n - 1 - i];
    }
}

void invertArray(int arr[], int n)
{
    for (int i = 0; i < n / 2; i++)
    {
        int temp = arr[i];
        arr[i] = arr[n - 1 - i];
        arr[n - 1 - i] = temp;
    }
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    int originalArray[] = {1, 2, 3, 4, 5};
    int copiedArray[5];
    int reversedArray[5];
    int n = sizeof(originalArray) / sizeof(originalArray[0]);

    copyArray(originalArray, copiedArray, n);
    printf("Copied Array: ");
    printArray(copiedArray, n);

    copyArrayReverse(originalArray, reversedArray, n);
    printf("Reversed Array: ");
    printArray(reversedArray, n);

    invertArray(originalArray, n);
    printf("Inverted Original Array: ");
    printArray(originalArray, n);

    return 0;
}
