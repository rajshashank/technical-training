#include <stdio.h>

int main()
{
    int in, t;
    printf("Enter the approx weight in grams\n");
    scanf("%d", &in);
    if (in == 0)
        printf("Time Estimated = 0 minutes");
    if (in >= 1 & in <= 2000)
        printf("Time Estimated = 25 minutes");
    if (in >= 2001 & in <= 4000)
        printf("Time Estimated = 35 minutes");
    if (in >= 4001 & in <= 7000)
        printf("Time Estimated = 45 minutes");
    if (in >= 7000)
        printf("machine overload");
    return 0;
}
