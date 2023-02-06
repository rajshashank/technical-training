#include <stdio.h>
#include <stdlib.h>
int *add(int *A, int ASize, int *B, int BSize, int *returnSize)
{
    int *C = (int *)malloc((ASize > BSize ? ASize : BSize) * sizeof(int));
    int i = ASize - 1;
    int j = BSize - 1;
    int k = 0;
    int carry = 0;
    while (i >= 0 || j >= 0)
    {
        int a = (i >= 0 ? A[i] : 0);
        int b = (j >= 0 ? B[j] : 0);
        int c = a + b + carry;
        C[k++] = c % 10;
        carry = c / 10;
        i--;
        j--;
    }
    if (carry > 0)
    {
        C[k++] = carry;
    }
    *returnSize = k;
    int *D = (int *)malloc(k * sizeof(int));
    for (i = 0; i < k; i++)
    {
        D[i] = C[k - 1 - i];
    }
    free(C);
    return D;
}
int main()
{
    int A[] = {1, 2, 3};
    int ASize = 3;
    int B[] = {4, 5, 6};
    int BSize = 3;
    int returnSize;
    int *C = add(A, ASize, B, BSize, &returnSize);

    for (int i = 0; i < returnSize; i++)
    {
        printf("%d", C[i]);
    }
    printf("\n");
    free(C);
    return 0;
}