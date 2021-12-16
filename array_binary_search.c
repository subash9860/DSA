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
int BinarySearch(struct Array arr, int key)
{
    int low = 0, high = arr.length - 1, mid;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (arr.A[mid] == key)
            return mid;
        else if (arr.A[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}

int RBinarySearch(struct Array arr, int key, int low, int high)
{
    int mid;
    high = arr.length-1;
    if (low > high)
        return -1;
    mid = (low + high) / 2;
    if (arr.A[mid] == key)
        return mid;
    else if (arr.A[mid] < key)
        return RBinarySearch(arr, key, mid + 1, high);
    else
        return RBinarySearch(arr, key, low, mid - 1);
}

int main()
{
    struct Array arr1 = {{2, 3, 4, 5, 6}, 10, 5};
    Display(arr1);
    printf("\n index:%d", BinarySearch(arr1, 4));
    printf("\n index:%d", RBinarySearch(arr1, 6, 0, arr1.length));
    return 0;
}
