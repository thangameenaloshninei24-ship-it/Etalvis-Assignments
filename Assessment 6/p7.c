#include<stdio.h>
int main()
{
    int a,b,i;
    i=11;
    while(i<100)
    {
        if(i%2==1)
        {
            a=i%10;
            b=i/10;
            if (a+b==7)
            {
                printf("%d\n",i);
            }
        }
        i++;
    }
}
