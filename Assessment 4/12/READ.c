#include <stdio.h>

int main()
{
    long long n;
    int sum = 0, digit;

    printf("Enter a number: ");
    scanf("%lld", &n);

    while(n != 0)
    {
        digit = n % 10;   // get last digit
        sum = sum + digit;
        n = n / 10;      // remove last digit
    }

    printf("Sum of digits = %d", sum);

    return 0;
}
