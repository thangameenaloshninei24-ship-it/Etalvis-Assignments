#include<stdio.h>
int main()
{
    int i,sum=0;
    i=15;
    while(i<100)
    {
        sum+=i;
        i+=10;
    }
    printf("%d",sum);
}
