#include <stdio.h>

int student_array[1009];

void display(int *n)
{
    static int i;
    if (i == *n)
    {
        printf("\n");
        int tot = 0;
        for (int i = 0; i < *n; i++)
        {
            tot += student_array[i];
        }
        printf("Total Marks obtained = %d\n", tot);
        printf("average Marks = %d\n", tot / (*n));
        return;
    }
    else
    {
        printf("%d ", student_array[i]);
        i++;
        display(n); // recursion
    }
}

void min_max(int n)
{
    static int i;
    static int max = -1;
    static int min = 101;
    if (i == n)
    {
        printf("Maximum marks: %d\n", max);
        printf("Minimum marks: %d\n", min);
        return;
    }
    else
    {
        if (student_array[i] > max)
        {
            max = student_array[i];
        }
        if (student_array[i] < min)
        {
            min = student_array[i];
        }

        i++;
        min_max(n); // recursion
    }
}

void count(int *n)
{
    static int i, bavg, avg;
    if (i == 0)
    {
        int tot = 0;
        for (int j = 0; j < *n; j++)
        {
            tot += student_array[j];
        }
        avg = tot / (*n);
    }

    if (i == *n)
    {
        printf("No. of students with marks below than average = %d\n", bavg);
    }
    else
    {
        if (student_array[i] < avg)
        {
            bavg = bavg + 1;
        }
        i++;
        count(n); // Recursion
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

    printf("Displaying marks of a student : ");
    display(&n);
    printf("\n");

    min_max(n);
    printf("\n");

    count(&n);

    return 0;
}