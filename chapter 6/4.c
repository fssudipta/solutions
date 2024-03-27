#include <stdio.h>

int max(int arr[], int n)
{
    if (n == 1)
        return arr[0];
    int maxRest = max(arr + 1, n - 1);
    return (arr[0] > maxRest) ? arr[0] : maxRest;
}

int main()
{
    int arr[] = {10, 7, 45, 90, 23, 3};
    int size = sizeof(arr) / sizeof(arr[0]);

    int maxv = max(arr, size);
    printf("Max element: %d\n", maxv);

    return 0;
}
