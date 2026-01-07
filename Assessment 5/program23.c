#include<stdio.h>
#include<math.h>
int main(){
   int a,b,n,count=0;
   printf("Enter Number:");
   scanf("%d",&n);
  while(n>0){
      a=n%10;
      b=(int)sqrt(a);
        if((b*b)==a){
             count=count+1;
        }
n=n/10;
}
printf("%d",count);
}
