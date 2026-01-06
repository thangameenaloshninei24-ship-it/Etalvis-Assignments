#include <stdio.h>

int main()
{
    int n, h, t, o, rev;
    scanf("%d", &n);
    h = n / 100;       
    t = (n / 10) % 10; 
    o = n % 10;       
    rev = o * 100 + t * 10 + h;
    printf("%d", rev);
}
