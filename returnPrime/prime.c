#include <stdio.h>
#include <math.h>
int countPrimes(int n)
{
    int count = 0;
    for (int i = 2; i < n; i++)
    {
        int root = (int)sqrt(i);
        int is_prime = 1;
        for (int j = 2; j <= root; j++)
        {
            if (i % j == 0)
            {
                is_prime = 0;
                break;
            }
        }
        count += is_prime;
    }
    return count;
}
int main()
{
    int n;
    scanf("%d", &n);
    printf("%d\n", countPrimes(n));
    return 0;
}
