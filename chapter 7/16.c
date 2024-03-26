#include <stdio.h>

int arraySum(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return sum;
}

int arrayMax(int arr[], int size)
{
    int max = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

int arrayMin(int arr[], int size)
{
    int min = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
}

int main()
{
    int arr[] = {4, 2, 8, 1, 6, 3};
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("Sum: %d\n", arraySum(arr, size));
    printf("Maximum: %d\n", arrayMax(arr, size));
    printf("Minimum: %d\n", arrayMin(arr, size));

    return 0;
}
