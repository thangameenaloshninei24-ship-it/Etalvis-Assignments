#include<stdio.h>
int disp_sum(int );
int main()
{
    int x=1,y;
    y=disp_sum(x);
    printf("%d",y);
}
int disp_sum(int x)
{
    int z=0;
    while(x<=5)
    {
        z=z+x;
        x++;
    }
    return z;
}
