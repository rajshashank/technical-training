#include <stdio.h>

int main()
{
    int a, rem;
    printf("Enter a number\n");
    scanf("%d", &a);
    while (a % 10 != 0)
    {
        rem = a % 10;
        printf("%d", rem);
        a /= 10;
    }
    return 0;
}