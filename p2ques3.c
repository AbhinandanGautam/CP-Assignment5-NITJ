#include <stdio.h>

void display(int m, int n, int mat[m][n])
{
    for (int i = 0; i < m; i++)
    {
        printf("Roll No. %d: ", i + 1);
        for (int j = 0; j < n; j++)
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

void total(int m, int n, int mat[m][n])
{
    int subtot = 0, stutot = 0, i, j;

    printf("Subject-wise Total\n");
    for (i = 0; i < n; i++)
    {
        subtot = 0;
        for (j = 0; j < m; j++)
        {
            subtot += mat[j][i];
        }
        printf("Total of subject %d = %d\n", i + 1, subtot);
    }
    printf("\n");
    printf("Student-wise Total\n");
    for (i = 0; i < m; i++)
    {
        stutot = 0;
        for (j = 0; j < n; j++)
        {
            stutot += mat[i][j];
        }
        printf("Total of student %d = %d\n", i + 1, stutot);
    }
    printf("\n");
}

void highMark(int m, int n, int mat[m][n])
{
    int maxi = -1, stutot = 0, i, j, rn;
    for (i = 0; i < m; i++)
    {
        stutot = 0;
        for (j = 0; j < n; j++)
        {
            stutot += mat[i][j];
        }
        if (stutot > maxi)
        {
            maxi = stutot;
            rn = i + 1;
        }
    }
    printf("Student who score highest marks is Roll No. %d and marks is %d\n", rn, maxi);
}

int main()
{
    printf("Abhinandan Gautam\n");
    printf("20103002\n\n");

    int stu, sub;
    printf("Enter number of students: ");
    scanf("%d", &stu);
    printf("Enter number of subjects: ");
    scanf("%d", &sub);

    int table[stu][sub];
    printf("Enter marks of student in each subject in order : \n");
    for (int i = 0; i < stu; i++)
    {
        for (int j = 0; j < sub; j++)
        {
            scanf("%d", &table[i][j]);
        }
    }

    display(stu, sub, table);
    printf("\n");

    total(stu, sub, table);
    printf("\n");

    highMark(stu, sub, table);
    printf("\n");

    return 0;
}