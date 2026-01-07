#include<stdio.h>
int main()
{
    int n1,n2;
    scanf("%d",&n1);
    scanf("%d",&n2);
    int g=n1;
    if (n2>n1)
    {
        g=n2;
    }
    for (int lcm=g;g!=0;lcm+=g)
    {
        if(lcm%n1==0 && lcm%n2==0)
        {
        printf("%d",lcm);
        return 0;
        }
    }
}
