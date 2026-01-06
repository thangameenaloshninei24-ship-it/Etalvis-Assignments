#inclde<stdio.h>
int main(){
int n;
if (n <= 1)
    printf("Not Prime");
else {
    int prime = 1;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            prime = 0;
            break;
        }
    }
    if (prime)
        printf("Prime");
    else
        printf("Not Prime");
}}
