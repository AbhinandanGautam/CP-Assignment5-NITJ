#include <stdio.h>

void initMat(int m, int n, int mat[m][n])
{
    printf("Enter elements of matrix: ");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }
}

void printMat(int m, int n, int mat[m][n])
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

void mulMat(int m, int n, int mat1[m][n], int M, int N, int mat2[M][N])
{
    if (n == M)
    {
        int mul[m][N];
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < N; j++)
            {
                mul[i][j] = 0;
                for (int k = 0; k < n; k++)
                {
                    mul[i][j] += mat1[i][k] * mat2[k][j];
                }
            }
        }
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < N; j++)
            {
                printf("%d ", mul[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("Multipication is not possible.");
    }
}

int main()
{
    printf("Abhinandan Gautam\n");
    printf("20103002\n\n");

    int mat1[3][3], mat2[3][3];
    printf("For matrix 1\n");
    initMat(3, 3, mat1);
    printf("\n");
    printf("For matrix 2\n");
    initMat(3, 3, mat2);
    printf("\n");
    printf("matrix 1\n");
    printMat(3, 3, mat1);
    printf("\n");
    printf("matrix 2\n");
    printMat(3, 3, mat2);
    printf("\n");

    printf("New matrix after multiplication\n");
    mulMat(3, 3, mat1, 3, 3, mat2);
    return 0;
}