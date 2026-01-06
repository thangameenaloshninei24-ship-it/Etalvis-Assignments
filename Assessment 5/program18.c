#include <stdio.h>

int isPrime(int n)
{
    if (n <= 1)
        return 0;

    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

int main()
{
    int n, ones, tens, lastTwo;

    scanf("%d", &n);

    ones = n % 10;          // ones digit
    tens = (n / 10) % 10;   // tens digit

    lastTwo = tens * 10 + ones;   // form two-digit number

    if (isPrime(lastTwo))
        printf("Prime");
    else
        printf("Not Prime");

    return 0;
}
