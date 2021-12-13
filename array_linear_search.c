// linear search for array

#include <stdio.h>
struct Array
{
    int A[10];
    int size;
    int length;
};
void Display(struct Array arr)
{
    int i;
    printf("\nElements are\n");
    for (i = 0; i < arr.length; i++)
        printf("%d ", arr.A[i]);
}

void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

// simple linear search

int linearSearch(struct Array arr, int key)
{
    int i;
    for (i = 0; i < arr.length; i++)
    {
        if (key == arr.A[i])
            return i;
    }
    return -1;
}

// improved linear search

//1. transposition
int linearSearchT(struct Array *arr, int key)
{
    int i;
    for (i = 0; i < arr->length; i++)
    {
        if (key == arr->A[i])
        {
            swap(&arr->A[i], &arr->A[i - 1]);
            return i;
        }
    }
    return -1;
}

//2. move to front
int linearSearchM(struct Array *arr, int key)
{
    int i;
    for (i = 0; i < arr->length; i++)
    {
        if (key == arr->A[i])
        {
            swap(&arr->A[i], &arr->A[0]);
            return 0;
        }
    }
    return -1;
}

int main()
{
    struct Array arr1 = {{2, 3, 4, 5, 6}, 10, 5};
    Display(arr1);
    printf("\nComman linear search, Index is:%d\n", linearSearch(arr1, 6));
    Display(arr1);

    printf("\n Transposition, Index is:%d\n", linearSearchT(&arr1, 5));
    Display(arr1);

    printf("\n Move to head, Index is:%d\n", linearSearchM(&arr1, 4));
    Display(arr1);

    return 0;
}
