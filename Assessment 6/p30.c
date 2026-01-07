#include<stdio.h>
int main()
{
    int n1,n2;
    scanf("%d",&n1);
    scanf("%d",&n2);
    int s=n1;
    if (n2<n1)
    {
        s=n2;
    }
    int hcf;
    int i=1;
    while(i<=s)
    {
        if(n1%i==0 && n2%i==0)
        {
            hcf=i;
        }
        i++;
    }
    printf("%d",hcf);
    return 0;
}
