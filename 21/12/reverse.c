#include <stdio.h>
int reverse_integer(int num)
{
    int reverse = 0;
    while (num > 0)
    {
        int digit = num % 10;
        if (digit != 0 || reverse != 0)
        {
            reverse = reverse * 10 + digit;
        }
        num /= 10;
    }
    return reverse;
}
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int reverse = reverse_integer(num);
    printf("Reverse of %d is %d\n", num, reverse);
    return 0;
}