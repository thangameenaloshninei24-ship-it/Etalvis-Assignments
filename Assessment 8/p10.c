#include<stdio.h>
int disp_2digit_even_sum6(int);
int main()
{
    int x=2,y;
    y=disp_2digit_even_sum6(x);
    printf("%d",y);
}
int disp_2digit_even_sum6(int x)
{
    int z=2,a=0,b=0;
    while(x<10)
    {
        z=2;
        a=0;
    while(z<x)
    {
        if(x%z==0)
        {
            a=1;
            break;
        }
        z++;
    }
    if(a==0)
    {
        b++;
    }
    x++;
}
    return b;
}
