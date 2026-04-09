#include <stdio.h>

int main()
{
    // printf("Hello\t");
    // printf("Wor\n");
    // printf("ld\n");

    // int num1 = 10;
    // printf("%d", num1);

    // int num1 = 10;
    // num1 = 20;

    // float num2 = 4.57;
    // char c = 'c';

    // printf("%d %.3f %c", num1, num2, c);

    int amount = 10000;
    float debt = 5400.65;
    char currency_sign = '$';

    float remaining = amount - debt;
    printf("%c %.3f", currency_sign, remaining);

    return 0;
}
