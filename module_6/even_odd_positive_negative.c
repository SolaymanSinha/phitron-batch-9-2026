#include <stdio.h>

int main()
{
    int even, odd, positive, negative, N;
    even = 0;
    odd = 0;
    positive = 0;
    negative = 0;

    scanf("%d", &N);

    for (int i = 0; i < N; i++)
    {
        int num;
        scanf("%d", &num);

        //     if (num < 0)
        //     {
        //         negative++;

        //         if (num % 2 == 0)
        //         {
        //             even++;
        //         }
        //         else
        //         {
        //             odd++;
        //         }
        //     }
        //     else if =(num > 0)
        //     {
        //         positive++;

        //         if (num % 2 == 0)
        //         {
        //             even++;
        //         }
        //         else
        //         {
        //             odd++;
        //         }
        //     }
        // }

        if (num % 2 == 0)
        {
            even++;

            if (num < 0)
            {
                negative++;
            }
            else if (num > 0)
            {
                positive++;
            }
        }
        else
        {
            odd++;

            if (num < 0)
            {
                negative++;
            }
            else if (num > 0)
            {
                positive++;
            }
        }
    }

    printf("Even: %d\n", even);
    printf("Odd: %d\n", odd);
    printf("Positive: %d\n", positive);
    printf("Negative: %d\n", negative);
    return 0;
}
