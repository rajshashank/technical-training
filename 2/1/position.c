#include <stdio.h>

int find_first(int *nums, int numsSize, int target)
{
    int start = 0;
    int end = numsSize - 1;
    while (start < end)
    {
        int mid = start + (end - start) / 2;
        if (nums[mid] < target)
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }
    }
    if (nums[start] == target)
    {
        return start;
    }
    else
    {
        return -1;
    }
}
int find_last(int *nums, int numsSize, int target)
{
    int start = 0;
    int end = numsSize - 1;
    while (start < end)
    {
        int mid = start + (end - start + 1) / 2;
        if (nums[mid] > target)
        {
            end = mid - 1;
        }
        else
        {
            start = mid;
        }
    }
    if (nums[end] == target)
    {
        return end;
    }
    else
    {
        return -1;
    }
}
int *searchRange(int *nums, int numsSize, int target, int *returnSize)
{
    int *result = (int *)malloc(2 * sizeof(int));
    result[0] = find_first(nums, numsSize, target);

    result[1] = find_last(nums, numsSize, target);
    *returnSize = 2;
    return result;
}
int main()
{
    int nums[] = {5, 7, 7, 8, 8, 10};
    int numsSize = 6;
    int target = 8;
    int returnSize;
    int *result = searchRange(nums, numsSize, target, &returnSize);
    printf("[%d, %d]\n", result[0], result[1]);
    return 0;
}