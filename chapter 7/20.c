#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int **allocate(int r, int c)
{
    int **p = (int **)malloc(sizeof(int *) * r);
    assert(p != NULL);
    for (int i = 0; i < r; i++)
    {
        p[i] = (int *)malloc(sizeof(int) * c);
        assert(p[i] != NULL);
    }
    return p;
}

void freearray(int **p, int r)
{
    for (int i = 0; i < r; i++)
    {
        free(p[i]);
    }
    free(p);
}

int main()
{
    int r = 3, c = 4;
    int **arr = allocate(r, c);
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            arr[i][j] = i + j;
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    freearray(arr, r);
    return 0;
}
