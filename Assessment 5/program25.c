#include<stdio.h>
int main(){
   int n,count=0;
   printf("Enter Number:");
   scanf("%d",&n);
   for(;n!=0:n/=10){
        if((n%10)==2||(n%10)==3||(n%10)==5||(n%10)==7){
              count++;
        }
      }
   printf("%d",count);
   return 0;
}
