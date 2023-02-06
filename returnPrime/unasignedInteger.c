#include <stdio.h>
int countOnes(unsigned int n)
{
    int count = 0;
    while (n)
    {
        count += n & 1;
        n >>= 1;
    }
    return count;
}
int main()
{
    unsigned int n;
    scanf("%u", &n);
    printf("%d\n", countOnes(n));
    return 0;
}