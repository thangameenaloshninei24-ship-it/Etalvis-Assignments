#include <stdio.h>
int main()
{
    int n, firstTwo, lastTwo, t, o, result;
    scanf("%d", &n);
    firstTwo = n / 100;   // first two digits
    lastTwo  = n % 100;   // last two digits
    t = lastTwo / 10;    // tens digit of last two
    o = lastTwo % 10;    // ones digit of last two
    result = firstTwo * 100 + (o * 10 + t);
    printf("%d", result);
}
