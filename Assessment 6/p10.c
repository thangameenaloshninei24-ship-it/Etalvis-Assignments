#include<stdio.h>
int main()
{
    int i,sum=0;
    i=70;
    while(i<80)
    {
        if(i%2==1)
        {
        sum+=i;
        }
        i++;
    }
    printf("%d",sum);
}
