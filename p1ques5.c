#include <stdio.h>

int student_array[1009];

int search(int key, int size)
{
    int pos, flag = 0;
    for (int i = 0; i < size; i++)
    {
        if (student_array[i] == key)
        {
            pos = i;
            flag = 1;
            break;
        }
    }
    if (flag == 1)
    {
        return pos;
    }
    else
    {
        return -1;
    }
}

int main()
{
    printf("Abhinandan Gautam\n");
    printf("20103002\n\n");
    int n;
    printf("Enter Value of n: ");
    scanf("%d", &n);

    printf("Enter marks of students: \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &student_array[i]);
    }

    printf("Enter the value you want to search: ");
    int val;
    scanf("%d", &val);
    int x = search(val, n);
    if (x == -1)
    {
        printf("Not Found\n");
    }
    else
    {
        printf("Found\n");
        printf("Index of element is %d\n", x);
    }

    return 0;
}