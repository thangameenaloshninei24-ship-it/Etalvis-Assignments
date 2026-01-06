#include <stdio.h>

int main() {
    int i, sum = 0;

    for (i = 10; i <= 99; i++) {
        if (i % 10 == 5) {
            sum += i;
        }
    }

    printf("%d", sum);
    return 0;
}
