#include <stdio.h>

void invert(int arr[], int start, int end)
{
    if (start >= end)
    {
        return;
    }
    arr[start] ^= arr[end];
    arr[end] ^= arr[start];
    arr[start] ^= arr[end];
    invert(arr, start + 1, end - 1);
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    for (int i = 0; i < size; ++i)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    invert(arr, 0, size - 1);

    printf("Inverted array: ");
    for (int i = 0; i < size; ++i)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

