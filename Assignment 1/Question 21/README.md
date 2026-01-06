#include <stdio.h>

int main()
{
    int n, h, o;
    scanf("%d", &n);
    h = n / 100;  
    o = n % 10;    
    n = n - 5 * (h % 2) * (o % 2);
    printf("%d", n);
    }
