#include <stdio.h>

int main()
{
    int v, w, a, b;
    printf("Enter the no of vehicles\n");
    scanf("%d", &v);
    printf("Enter the no of wheels\n");
    scanf("%d", &w);
    a = (w - (2 * v)) / 2;
    b = v - a;
    printf("Number of two wheelers = %d\n", b);
    printf("Number of four wheelers = %d\n", a);
    return 0;
}