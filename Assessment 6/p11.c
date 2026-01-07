#include<stdio.h>
int main()
{
 int x,y=1;
 printf("Enter a number : ");
 scanf("%d",&x);
 int i=x;
 while(i>9)
 {
    y+=1;
    i/=10;
 }
 printf("%d\n",y);
}
