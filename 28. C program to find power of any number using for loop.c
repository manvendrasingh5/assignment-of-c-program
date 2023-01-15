#include <stdio.h>

int main()
{
    int base, exponent;
    long long power = 1;
    int i;
    printf("Enter base: ");
    scanf("%d", &base);
    printf("Enter exponent: ");
    scanf("%d", &exponent);
    for(i=1; i<=exponent; i++)
    {
        power = power * base;
    }

    printf("%d ^ %d = %lld", base, exponent, power);

    return 0;
}