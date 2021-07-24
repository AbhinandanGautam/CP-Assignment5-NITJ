#include <stdio.h>

int student_array[1009];

void insert_mark(int pos, int marks, int *n)
{
    (*n)++;
    for (int i = *n - 1; i >= pos; i--)
    {
        student_array[i] = student_array[i - 1];
    }
    student_array[pos - 1] = marks;
}

void delete_mark(int marks, int *n)
{
    int pos;
    for (int i = 0; i < *n; i++)
    {
        if (student_array[i] == marks)
        {
            pos = i;
            break;
        }
    }
    for (int i = pos; i < *n - 1; i++)
    {
        student_array[i] = student_array[i + 1];
    }
    (*n)--;
}

int main()
{
    printf("Abhinandan Gautam\n");
    printf("20103002\n\n");
    int n;
    printf("Enter Value of n: ");
    scanf("%d", &n);

    printf("Enter marks of studdents: \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &student_array[i]);
    }
    printf("\n");
    int pos, mark;
    printf("Enter position where want to insert: ");
    scanf("%d", &pos);
    printf("Enter marks to be inserted: ");
    scanf("%d", &mark);
    insert_mark(pos, mark, &n);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", student_array[i]);
    }
    printf("\n");
    printf("\n");
    int delmark;
    printf("Enter marks to be deleted: ");
    scanf("%d", &delmark);
    delete_mark(delmark, &n);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", student_array[i]);
    }
    printf("\n");
    return 0;
}