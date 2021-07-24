#include <stdio.h>

void Addition(int m, int n, int mat1[m][n], int M, int N, int mat2[M][N])
{
    if (m == M && n == N)
    {
        int ans[m][n];
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                ans[i][j] = mat1[i][j] + mat2[i][j];
            }
        }
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                printf("%d ", ans[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("Addition can't be performed.");
    }
}

void Subtraction(int m, int n, int mat1[m][n], int M, int N, int mat2[M][N])
{
    if (m == M && n == N)
    {
        int ans[m][n];
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                ans[i][j] = mat1[i][j] - mat2[i][j];
            }
        }
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                printf("%d ", ans[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("Subtraction can't be performed.");
    }
}

void sacMul(int m, int n, int mat[m][n], int a)
{
    int ans[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            ans[i][j] = a * mat[i][j];
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", ans[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    printf("Abhinandan Gautam\n");
    printf("20103002\n\n");

    int m, n, M, N;
    printf("Enter value of Rows and Columns of matrix 1: ");
    scanf("%d%d", &m, &n);
    int mat1[m][n];
    printf("Enter elements of matrix 1: ");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &mat1[i][j]);
        }
    }
    printf("Enter value of Rows and Columns of matrix 2: ");
    scanf("%d%d", &M, &N);
    int mat2[M][N];
    printf("Enter elements of matrix 2: ");
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++)
        {
            scanf("%d", &mat2[i][j]);
        }
    }
    printf("\n");
    Addition(m, n, mat1, M, N, mat2);
    printf("\n");
    Subtraction(m, n, mat1, M, N, mat2);
    printf("\n");
    printf("Enter the value of scalar: ");
    int a;
    scanf("%d", &a);
    sacMul(m, n, mat1, a);
    return 0;
}