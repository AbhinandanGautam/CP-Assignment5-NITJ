int student_array[1009];

void newArray(int n){
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
}

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