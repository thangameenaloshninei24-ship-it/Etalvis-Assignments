#include<stdio.h>
int disp_rsum(int );
int main()
{
    int x=6,y;
    y=disp_rsum(x);
    printf("%d",y);
}
int disp_rsum(int x)
{
    int z=0;
    while(x>=1)
    {
        z=z+x;
        x--;
    }
    return z;
}
