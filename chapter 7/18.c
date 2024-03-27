#include <stdio.h>

void linear(int arr[], int n, int x)
{
    int i = 0;
    while (i < n)
    {
        if (arr[i] == x)
        {
            printf("found at %d \n", i);
            return;
        }
        else
            i++;
    }
    printf("\nnot found");
}

void binary(int arr[], int n, int x)
{
    int l = 0, r = n - 1, m;
    while (l <= r)
    {
        m = (l + r) / 2;
        if (x == arr[m])
            break;
        else if (x < arr[m])
            r = m - 1;
        else
            l = m + 1;
    }
    if (l > r)
        printf("not found");
    else
        printf("found at %d", m);
}

void sort(int arr[], int n)
{
    int inc = 1, dec = 1;
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i+1])
        {
            inc = 0;
        }
        if (arr[i] > arr[i+1])
        {
            dec = 0;
        }
    }
    if (inc || dec)
    {
        printf("sorted\n");
    }
    else
    {
        printf("not sorted\n");
    }
}

int main()
{
    int arr[4] = {1, 5, 7, 9};
    linear(arr, 4, 3);
    printf("\n");
    int arr2[5] = {5, 99, 100, 101, 109};
    binary(arr2, 5, 100);
    return 0;
}
