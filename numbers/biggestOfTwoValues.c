#include <stdio.h>
int main()
{
    int a, b, c, big;
    printf("enter two integer numbers");
    scanf("%d,%d", &a, &b);
    big = (a > b) ? a : b;
    printf("%d is the biggest", big);

    return 0;
}