#include<stdio.h>
int check_last_digit_odd(int,int,int );
int main()
{
    int x,y,z,result;
    printf("Enter a number : ");
    scanf("%d",&x);
    y=x%10;
    z=x;
    result=check_last_digit_odd(x,y,z);
    printf("%d",result);
}
int check_last_digit_odd(int x,int h,int z)
{
    int a,b,c,d;
    if(h%2!=0)
    {
        while(x>10)
        {
            x=x/10;
            a++;
        }
        x=x-1;   
    while(a!=0)
    {
        b=b*10;
        a--;
    }
    c=z%b;;
    d=((((b*x)+c)/10)*10)+h;
    return d;
}
else
{
    return x;
}
}
