#include <stdio.h>

int main()
{
    long long n;
    int count = 0;

    printf("Enter a number: ");
    scanf("%lld", &n);

    if(n == 0)   // special case
        count = 1;
    else
    {
        while(n != 0)
        {
            n = n / 10;   // remove last digit
            count++;
        }
    }

    printf("Total digits = %d", count);

    return 0;
}
