#include<stdio.h>
int main()
{
 int x,prime=0;
 printf("Enter a number : ");
 scanf("%d",&x);
 if(x==2)
 {
    printf("Prime");
    return 0;
 } 
 int i=2;
 while(i<x)
 {
 if(x%i==0)
 {
   printf("Not Prime");
   return 0; 
 }
 if(x%i!=0)
 {
    prime=1;
 }
 i++;
}
 if(prime==1)
 {
 printf("Prime");
 }
}
