#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);
    int V[N];

    int neg_sum = 0;
    int pos_sum = 0;

    for (int i = 0; i < N; i++)
    {

        scanf("%d", &V[i]);
    }

    for (int i = 0; i < N; i++)
    {
        if (V[i] > 0)
        {
            pos_sum += V[i];
        }
        else
        {
            neg_sum += V[i];
        }
    }

    printf("%d %d", pos_sum, neg_sum);
    return 0;
}
