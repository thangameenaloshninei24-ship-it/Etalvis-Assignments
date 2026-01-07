#include<stdio.h>
int main()
 { 
    int i,count=0;
    scanf("%d",&i);
    while(i!=0)
    {
      if((i%100)==16||(i%100)==25||(i%100)==36||(i%100)==49||(i%100)==64||(i%100)==81) 
      {
        count ++;
      }
      i/=10;
    }
    printf("%d",count);
    return 0;
}
