#include <stdio.h>
#include "myhead.h"

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


int main(){
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
    printf("\n\n\n");

    // ques 2
    newArray(n);
    printf("\n\n\n");

    // ques 3
    int loc, mark;
    printf("Enter position where want to insert: ");
    scanf("%d", &loc);
    printf("Enter marks to be inserted: ");
    scanf("%d", &mark);
    insert_mark(loc, mark, &n);
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
    printf("\n\n\n");

    // ques 4
    bubbleSort(n);
    printf("Enter nth element position: ");
    int pos;
    scanf("%d", &pos);
    printf("nth highest mark from the student_array = %d\n", student_array[pos - 1]);
    printf("\n\n\n");

    // ques 5
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
    printf("\n\n\n");
    
    return 0;
}