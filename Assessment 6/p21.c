#include<stdio.h>

int main()
{
    int x,sum;
    sum =0;
    scanf("%d",&x);
    int i=x;
    while(i!=0)
    {
       if((i%10)%2!=0) 
       {
        sum++;
       }
       i/=10;
    }
    printf("%d",sum);
    return 0;
}
