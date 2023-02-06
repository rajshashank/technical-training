#include <stdio.h>
int main()
{
    int units;
    float bill;
    printf("Enter the number of units consumed: ");
    scanf("%d", &units);
    if (units <= 100)
    {
        bill = units * 0.60;
    }
    else if (units <= 300)
    {
        bill = 60 + (units - 100) * 0.80;
    }
    else
    {
        bill = 60 + 200 + (units - 300) * 1.50;
    }
    printf("Total bill amount: %.2f\n", bill);
    return 0;
}