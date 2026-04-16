#include <stdio.h>

int main()
{
    for (int i = 0; i < 10000 - 1; i++)
    {
        int password;
        scanf("%d", &password);

        if (password == 1999)
        {
            printf("Correct\n");
            break;
        }
        else
        {
            printf("Wrong\n");
        }
    }
    return 0;
}
