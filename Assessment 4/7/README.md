#include <stdio.h>

int main()
{
    int i, a, b;
    for(i = 10; i < 100; i++)
    {
        if(i % 2 != 0)          // check odd
        {
            a = i / 10;        // tens digit
            b = i % 10;        // ones digit
            if(a + b == 7)     // sum of digits
            {
                printf("%d\n", i);
            }
        }
    }

 return 0;
}
