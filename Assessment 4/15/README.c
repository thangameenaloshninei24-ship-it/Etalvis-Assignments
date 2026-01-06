#include <stdio.h>

int main() {
    long long n, temp, msb, pow10 = 1;

    scanf("%lld", &n);

    temp = n;
    while (temp >= 10) {
        temp /= 10;
        pow10 *= 10;
    }

    msb = temp;

    if (msb % 2 != 0) {
        n = n - pow10;
    }

    printf("%lld", n);
    return 0;
}
