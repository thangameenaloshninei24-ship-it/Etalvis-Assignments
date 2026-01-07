#include<stdio.h>
int main()
{
 int x,a,b,prime=0;
 printf("Enter a number : ");
 scanf("%d",&x);
 a=x%10;
 b=x/10;
 a+=b;
 if(x==2)
 {
    printf("Prime & sum of digits is not 14");
    return 0;
 } 
 int i=2;
 while(i<x)
 {
 if(x%i==0)
 {
   if(a==14)
   printf("Not prime but sum of digits is 14"); 

   if(a!=14)
   printf("Not Prime & Sum of Digits is not 14");
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
    if(a==14)
   printf("Prime & sum of digits is 14"); 

   if(a!=14)
   printf("Prime & sum of digits is not 14");
   return 0;
 }
}
