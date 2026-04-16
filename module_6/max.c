#include <stdio.h>

int main()
{
    int N, max;
    max = 0;
    scanf("%d", &N);

    for (int i = 0; i < N; i++)
    {
        int num;
        scanf("%d", &num);

        if (num > max)
        {
            max = num;
        }
    }

    printf("%d", max);

    return 0;
}
