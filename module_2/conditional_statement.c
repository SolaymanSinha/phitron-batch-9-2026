#include <stdio.h>

int main()
{
    int tk;
    scanf("%d", &tk);

    // if (tk >= 100)
    // {
    //     printf("Burger khabo");
    // }
    // else if (tk >= 50)
    // {
    //     printf("Fuchka Khabo");
    // }
    // else
    // {
    //     printf("Burger khabo na");
    // }

    if (tk >= 5000)
    {
        printf("Cox's bazar jabo\n");

        if (tk >= 10000)
        {
            printf("Saint Martin Jabo\n");
        }
        else
        {
            printf("Saint Martin Jabo Na\n");
        }
    }
    else
    {
        printf("Kothao jabo na\n");
    }

    return 0;
}
