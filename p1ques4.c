#include <stdio.h>

int student_array[1009];

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
void bubbleSort(int n)
{
    int i, j;
    int swapped;
    for (i = 0; i < n - 1; i++)
    {
        swapped = 0;
        for (j = 0; j < n - i - 1; j++)
        {
            if (student_array[j] > student_array[j + 1])
            {
                swap(&student_array[j], &student_array[j + 1]);
                swapped = 1;
            }
        }
        if (swapped == 0)
            break;
    }
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

    bubbleSort(n);

    printf("Enter nth element position: ");
    int pos;
    scanf("%d", &pos);
    printf("nth highest mark from the student_array = %d\n", student_array[pos - 1]);

    return 0;
}