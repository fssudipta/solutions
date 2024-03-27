#include <stdio.h>
#include <stdbool.h>

bool binsearch(int arr[], int l, int r, int x)
{
    if (l > r)
        return false;
    int m = (l + r) / 2;
    if (x == arr[m])
        return true;
    else if (x < arr[m])
        binsearch(arr, l, m - 1, x);
    else
        binsearch(arr, m + 1, r, x);
}

int main()
{
    int a[15] = {2, 4, 5, 7, 9, 10, 13, 15, 18, 19, 20, 21, 23, 25, 27};
    int n = 15, x = 10;
    if (binsearch(a, 0, n - 1, x))
        printf("oreeee found");
    else
        printf("dhur not found");
    return 0;
}