#include <stdio.h>

int main()
{
    int amt, dis, fAmt, disAmt;
    printf("Enter the bill amount\n");
    scanf("%d", &amt);
    if (amt < 5000)
    {
        dis = 0;
    }
    else if (amt >= 5000 & amt <= 10000)
    {
        dis = 10;
    }
    else if (amt >= 10001 & amt <= 50000)
    {
        dis = 20;
    }
    else if (amt >= 50001 & amt <= 100000)
    {
        dis = 30;
    }
    else if (amt > 100001)
    {
        dis = 40;
    }
    fAmt = amt - ((amt / 100) * dis);
    disAmt = ((amt / 100) * dis);
    printf("Bill amount : %d\n", amt);
    printf("Discount(-) : %d\n", disAmt);
    printf("              ********\n");
    printf("              %d\n", fAmt);
    printf("              ********\n");

    return 0;
}