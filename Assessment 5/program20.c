#include <stdio.h>

int main()
{
    int num, i, count = 0, flag;

    for (num = 1; num <= 9; num++)   // check all single digit numbers
    {
        flag = 0;

        if (num <= 1)
            flag = 1;   // not prime

        for (i = 2; i <= num / 2; i++)
        {
            if (num % i == 0)
            {
                flag = 1;   // not prime
                break;
            }
        }

        if (flag == 0)   // prime found
            count++;
    }

    printf("%d", count);
    return 0;
}
