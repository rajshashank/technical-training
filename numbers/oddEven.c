#include <stdio.h>
int main()
{
    int n;
    printf("enter the element");
    scanf("%d", &n);
    n % 2 == 0 ? printf("Entered number is even") : printf("entered number is odd");
    return 0;
}