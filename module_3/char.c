#include <stdio.h>

int main()
{
    char character;
    scanf("%c", &character);

    if (character >= 97)
    {
        printf("%c", character - 32);
    }
    else
    {
        printf("%c", character + 32);
    }

    return 0;
}
