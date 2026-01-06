#include <stdio.h>

int main() {
    int n, a, b;
    scanf("%d", &n);
    a = n / 100;        // first two digits
    b = n % 100;        // last two digits
    a = (a % 10) * 10 + (a / 10);  // reverse first two digits
    printf("%d", a * 100 + b);
    
}
