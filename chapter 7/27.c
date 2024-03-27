#include <stdio.h>

void vectorAdd(int *v1, int *v2, int *result, int n)
{
    for (int i = 0; i < n; i++)
    {
        result[i] = v1[i] + v2[i];
    }
}

void vectorSubtract(int *v1, int *v2, int *result, int n)
{
    for (int i = 0; i < n; i++)
    {
        result[i] = v1[i] - v2[i];
    }
}

int dotProduct(int *v1, int *v2, int n)
{
    int result = 0;
    for (int i = 0; i < n; i++)
    {
        result += v1[i] * v2[i];
    }
    return result;
}

void crossProduct(int *v1, int *v2, int *result)
{
    result[0] = v1[1] * v2[2] - v1[2] * v2[1];
    result[1] = v1[2] * v2[0] - v1[0] * v2[2];
    result[2] = v1[0] * v2[1] - v1[1] * v2[0];
}

int main()
{
    int v1[] = {1, 2, 3};
    int v2[] = {4, 5, 6};
    int n = sizeof(v1) / sizeof(v1[0]);
    int resultAdd[n], resultSub[n], resultCross[3];
    int resultDot;

    vectorAdd(v1, v2, resultAdd, n);
    vectorSubtract(v1, v2, resultSub, n);
    resultDot = dotProduct(v1, v2, n);
    crossProduct(v1, v2, resultCross);

    printf("Addition of vectors: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", resultAdd[i]);
    }
    printf("\n");

    printf("Subtraction of vectors: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", resultSub[i]);
    }
    printf("\n");

    printf("Dot product of vectors: %d\n", resultDot);

    printf("Cross product of vectors: ");
    for (int i = 0; i < 3; i++)
    {
        printf("%d ", resultCross[i]);
    }
    printf("\n");

    return 0;
}
