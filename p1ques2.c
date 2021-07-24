#include <stdio.h>

// const int N = 1e3+2;
int student_array[1000];

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

    // counting odd and even elements in student_array
    int oc = 0, ec = 0;
    for (int i = 0; i < n; i++)
    {
        if (student_array[i] % 2 == 0)
            ec++;
        else
            oc++;
    }

    int odd_marks[oc], even_marks[ec], odd_even_marks[oc + ec];
    // making odd and even array seperately
    int j = 0, k = 0;
    for (int i = 0; i < n; i++)
    {
        if (student_array[i] % 2 == 0)
        {
            even_marks[j] = student_array[i];
            j++;
        }
        else
        {
            odd_marks[k] = student_array[i];
            k++;
        }
    }

    // new array
    for (int i = 0; i < oc + ec; i++)
    {
        if (i < oc)
        {
            odd_even_marks[i] = odd_marks[i];
        }
        else
        {
            odd_even_marks[i] = even_marks[i - oc];
        }
    }
    printf("\n");
    printf("printing elements of new array\n");
    for (int i = 0; i < oc + ec; i++)
    {
        printf("%d ", odd_even_marks[i]);
    }
    printf("\n");

    return 0;
}