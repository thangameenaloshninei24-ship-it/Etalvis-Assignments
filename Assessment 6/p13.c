#include<stdio.h>
int main()
{
 int x,i,y=0;
 printf("Enter a number : ");
 scanf("%d",&x);
 i=x;
 while(i>9)
 {
    y+=i%10;
    y*=10;
    i/=10;
 }
 printf("%d\n",y+i);
}
