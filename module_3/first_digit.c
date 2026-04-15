#include <stdio.h>

int main()
{
    int num;
    scanf("%d", &num);
    int first_digit = num;

    while (first_digit >= 10)
    {
        first_digit /= 10;
    }

    if (first_digit % 2 == 0)
    {
        printf("EVEN");
    }
    else
    {
        printf("ODD");
    }
    return 0;
}
