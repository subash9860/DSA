#include <stdio.h>
struct Array
{
    int A[10];
    int size;
    int length;
};

void display(struct Array arr)
{
    int i;
    printf("\n Elements are\n");
    for (i = 0; i < arr.length; i++)
        printf("%d ", arr.A[i]);
};

// void append(struct Array *arr, int x)
// {
//     if (arr->length < arr->size)
//         arr->A[arr->length++] = x;
// }

void insert(struct Array *arr, int index, int x)
{
    int i;
    if (index >= 0 && index <= arr->length)
        arr->A[i] = arr->A[i - 1];
    arr->A[index] = x;
    arr->length++;
}

int main()
{
    struct Array arr1 = {{2, 3, 4, 5, 6,7},10,6};
    // append(&arr1, 30);

    insert(&arr1, 5,10);
    display(arr1);
    // free(arr1);
    return 0;
}
