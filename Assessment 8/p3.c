#include<stdio.h>
int disp_2digit_ones5(int );
int main()
{
    int x=10,y;
    y=disp_2digit_ones5(x);
    printf("%d",y);
}
int disp_2digit_ones5(int x)
{
    int z,a=0;
    while(x<=99)
    {
        z=x%10;
        if(z==5)
        {
            a=a+x;
        }
        x++;
    }
    return a;
}
