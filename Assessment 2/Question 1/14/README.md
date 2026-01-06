#include<stdio.h>
int main(){
int a;
printf("Enter number:");
scanf("%d",&a);
if((a/100)==(a%100)){
  printf("1");
}
else{
 printf("0");
}
}
