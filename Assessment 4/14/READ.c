#include <stdio.h>

int main()
{
    long long n, rev = 0, digit;

    printf("Enter a number: ");
    scanf("%lld", &n);

    while(n != 0)
    {
        digit = n % 10;           // get last digit
        rev = rev * 10 + digit;  // add digit to reverse
        n = n / 10;              // remove last digit
    }

    printf("Reversed number = %lld", rev);

    return 0;
}
// see to it
