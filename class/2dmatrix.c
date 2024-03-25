#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

// int add(int a, int b){
//     int result = a + b;
//     return result;
// }

// int* add(int a, int b){
//     int result = a + b;
//     return &result;
// }


// 2D matrix input (DMA), Multiply, free
int ** allocate2DArray(int m, int n){
    int i;
    int** mat=(int **) malloc(m * sizeof(int *));
    assert(mat != NULL);
    // if(mat == NULL) {
    //     printf("Memory not allocated");
    //     exit(1);
    // }

    for (i = 0; i < m; i++)
    {
        *(mat + i) = (int *) malloc(n * sizeof(int));
        assert(*(mat + i) != NULL);
        // if(*(mat + i) == NULL) {
        //     printf("Memory not allocated");
        //     exit(1);
        // }
    }
    return mat;
}

void free2DArray(int **mat, int m, int n) {
    int i;
    if (mat != NULL){
        for (i = 0; i < m; i++){
            if(*(mat + i) != NULL) free(*(mat + i));
        }
        free(mat);
    }
}

int ** takeInput(int m, int n){
    int i, j;
    int **mat = allocate2DArray(m, n);

    for (i = 0; i < m; i++){
        for (j = 0; j < n; j++){
            scanf("%d", *(mat + i) + j); // &mat[i][j]
        }
    }

    return mat;
}

void printArray(int** mat, int m, int n){
    int i, j;

    for (i = 0; i < m; i++){
        for (j = 0; j < n; j++){
            printf("%d\t", *(*(mat + i) + j)); // mat[i][j]
        }
        printf("\n");
    }
}

int ** multiply(int **mat1, int **mat2, int m1, int n1, int m2, int n2){
    assert(n1 == m2);

    int **result = allocate2DArray(m1, n2);

    int i, j, k, t;

    for(i = 0; i < m1; i++){
        for (j = 0; j < n2; j++){
            t = 0;
            for (k = 0; k < n1; k++){
                t += *(*(mat1 + i) + k) * *(*(mat2 + k) + j);
            }
            *(*(result + i) + j) = t;
        }
    }
    return result;
}

int main()
{
    int **mat1 = takeInput(2, 3);
    int **mat2 = takeInput(3, 2);
    int **result = multiply(mat1, mat2, 2, 3, 3, 2);

    printArray(result, 2, 2);

    free2DArray(mat1, 2, 3);
    free2DArray(mat2, 3, 2);
    free2DArray(result, 2, 2);
    // printf("%d", add(2, 5));

    return 0;
}
