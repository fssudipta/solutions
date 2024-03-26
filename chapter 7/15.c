#include <stdio.h>

void insert(int arr[], int size, int i, int x)
{
    for (int j = size; j > i; j--)
    {
        arr[j] = arr[j - 1];
    }
    arr[i] = x;

    for (int j = 0; j <= size; j++)
    {
        printf("%d ", arr[j]);
    }
}

void rmove(int arr[], int size, int i)
{
    int j = 0;
    for (int k = 0; k < size; k++)
    {
        if (k == i)
        {
            continue;
        }
        arr[j++] = arr[k];
    }
    for (int k = 0; k < size - 1; k++)
    {
        printf("%d ", arr[k]);
    }
}

int main()
{
    int arr[5] = {1, 2, 4, 5};
    int size = 4;
    int i = 2, x = 3;
    insert(arr, size, i, x);
    printf("\n");
    int arr2[5] = {1, 2, 4, 5};
    size = 4;
    i = 2, x = 3;
    rmove(arr2, size, i);
    return 0;
}
