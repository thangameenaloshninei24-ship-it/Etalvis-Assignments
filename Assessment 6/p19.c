#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    int y=x%1000;
    y/=10;
    int i=2;
    while(i<y/2)
    {
        if(y%i==0)
        {
            printf("Notprime");
            return 0;
        }
        i++;
    }
    printf("Prime");
    return 0;
}
