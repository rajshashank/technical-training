#include <stdio.h>
void print_pattern(int n)
{
    int i, j, k, m = (n * (n + 1)) / 2;
    for (i = 1; i <= n; i++)
    {
        k = 2 * i - 1;
        for (j = 1; j <= k; j++)
        {
            printf("%d*", m--);
        }
        printf("%d", m--);
        for (j = 1; j <= k; j++)
        {
            printf(" %d*", ++m);
        }
        printf(" %d\n", ++m);
    }
    m += 2 * n - 1;
    for (i = 1; i <= n - 1; i++)
    {
        k = 2 * n - 2 * i - 1;
        for (j = 1; j <= k; j++)
        {
            printf("%d*", m--);
        }
        printf("%d", m--);
        for (j = 1; j <= k; j++)
        {
            printf(" %d*", ++m);
        }
        printf(" %d\n", ++m);
    }
}
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    print_pattern(n);
    return 0;
}