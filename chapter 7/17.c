#include <stdio.h>

void sort(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] < arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}

void indirectsort(int arr[], int size)
{
    int k[size];
    for (int i = 0; i < size; i++)
    {
        k[i] = i;
    }
    for (int i = 0; i < size; i++)
    {
        int maxIndex = i;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[k[j]] > arr[k[maxIndex]])
            {
                maxIndex = j;
            }
        }
        int temp = k[i];
        k[i] = k[maxIndex];
        k[maxIndex] = temp;
    }
    for (int i = 0; i < size; i++)
    {
        printf("%d %d  ", k[i], arr[k[i]]);
    }
}

int main()
{
    int arr[] = {1, 9, 6, 77, 50, 68};
    int size1 = sizeof(arr) / sizeof(arr[0]);
    sort(arr, size1);
    printf("\n");

    int arr2[] = {1, 9, 6, 77, 50, 68, 464};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    indirectsort(arr2, size2);

    return 0;
}
