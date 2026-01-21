#include<stdio.h>
int disp_interchange_first_last_digit(int,int,int );
int main()
{
    int x,z,c,s;
    printf("Enter a number : ");
    scanf("%d",&x);
    z=x%10;
    c=x;
    s=disp_interchange_first_last_digit(x,z,c);
    printf("%d",s);
}
int disp_interchange_first_last_digit(int x,int z,int c)
{
    int y=0,b,d,a=1;
    while(x>10)
    {
        x=x/10;
        y=(y+1);
    }
    while(y!=0)
    {
        a=a*10;
     y--;
    }
    b=c%a;
    d=(((((a*z)+b))/10)*10)+x;
    return d;
}
