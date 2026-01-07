#include<stdio.h>

int main()
{
    int a=1,b,c,n;
    scanf("%d",&n);
    int i=n;
    while(i>9)
    {
        a*=10;
        i/=10;
    }
    b=n%10;
    c=n/a;
    b*=a;
    n/=10;
    n%=(a/10);
    b+=(n*10);
    b+=c;
    printf("%d",b);
}
