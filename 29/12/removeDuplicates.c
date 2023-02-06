#include <stdio.h>
int removeDuplicates(int arr[], int n)
{
    int k = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[k] != arr[i])
        {
            arr[++k] = arr[i];
        }
    }
    return k + 1;
}
int main()
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int k = removeDuplicates(arr, n);
    printf("After removing duplicates, the array has %d unique elements:\n", k);
    for (int i = 0; i < k; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}