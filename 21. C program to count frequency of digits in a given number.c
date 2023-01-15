#include <stdio.h>
#define BASE 10

int main()
{
    long long num, n;
    int i, lastDigit;
    int freq[BASE];

    /* Input number from user */
    printf("Enter any number: ");
    scanf("%lld", &num);
    for(i=0; i<BASE; i++)
    {
        freq[i] = 0;
    }
    n = num; 
    while(n != 0)
    {
        lastDigit = n % 10;
        n /= 10;
        freq[lastDigit]++;
    }
    printf("Frequency of each digit in %lld is: \n", num);
    for(i=0; i<BASE; i++)
    {
        printf("Frequency of %d = %d\n", i, freq[i]);
    }

    return 0;
}