#include <stdio.h>
void leftRotatebyOne(int arr[], int n)
{
    int temp = arr[0];
    for (int i = 0; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    arr[n - 1] = temp;
}
void leftRotate(int arr[], int d, int n)
{
    for (int i = 0; i < d; i++)
    {
        leftRotatebyOne(arr, n);
    }
}
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}
int main()
{
    int n, d;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the number of steps to rotate left: ");
    scanf("%d", &d);
    leftRotate(arr, d, n);
    printArray(arr, n);
    return 0;
}