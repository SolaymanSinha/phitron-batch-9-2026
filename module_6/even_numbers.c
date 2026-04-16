#include <stdio.h>

int main()
{
    int N;
    int even_numbers = 0;
    scanf("%d", &N);

    for (int i = 1; i <= N; i++)
    {
        if (i % 2 == 0)
        {
            even_numbers++;
            printf("%d\n", i);
        }

        if (i == N && even_numbers == 0)
        {
            printf("%d", -1);
        }
    }
    return 0;
}
