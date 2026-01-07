#include <stdio.h>
int main()
{
    int n,i,a,c,l,d = 1,r;
    scanf("%d", &n);
    a = n;
    l = n % 10;
    if(l%2 == 1)
    {
       i=a;
       while(i > 9)
       { 
        d = d * 10;
        i/=10;
       }
       i=i-1;
       c=n%d;
       r=i*d+c;
       printf("%d",r);
    }
    else
    printf("%d",n);
}
