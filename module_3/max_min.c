#include <stdio.h>

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    int min;
    int max;

    if (a > b && a > c)
    {
        max = a;

        if (c < b)
        {
            min = c;
        }
        else
        {
            min = b;
        }
    }
    else if (b > a && b > c)
    {
        max = b;
        if (a < c)
        {
            min = a;
        }
        else
        {
            min = c;
        }
    }
    else
    {
        max = c;

        if (a < b)
        {
            min = a;
        }
        else
        {
            min = b;
        }
    }

    printf("%d %d", min, max);

    return 0;
}
