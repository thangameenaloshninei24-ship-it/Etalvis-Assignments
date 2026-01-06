#include <stdio.h>

int main()
{
    int n, tens, ones, rev;
    scanf("%d", &n);
    tens = n / 10;  
    ones  = n % 10;  
    rev = ones * 10 + tens;
    printf("%d", rev);
}
