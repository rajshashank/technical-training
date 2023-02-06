#include <stdio.h>
#include <math.h>
#define MAX 1000005
bool is_prime(int num)
{
    if (num <= 1)
        return false;
    int root = (int)sqrt(num);
    for (int i = 2; i <= root; i++)
    {
        if (num % i == 0)
            return false;
    }
    return true;
}
int get_digit_sum(int num)
{
    int sum = 0;
    while (num)
    {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}
int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int block_count[MAX];
    memset(block_count, 0, sizeof(block_count));
    int prime_count = 0;
    for (int i = n; i <= m; i++)
    {
        if (is_prime(i))
        {
            int digit_sum = get_digit_sum(i);
            block_count[digit_sum]++;
            prime_count = (block_count[digit_sum] > prime_count) ? block_count[digit_sum] : prime_count;
        }
    }
    int row_count = 0;
    while (prime_count > 0)
    {
        row_count++;
        prime_count -= 2;
    }
    printf("%d\n", row_count);
    return 0;
}