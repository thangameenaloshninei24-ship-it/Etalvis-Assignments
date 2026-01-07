#include<stdio.h>
int main()
 { 
    int i,count=0;
    scanf("%d",&i);
    while(i!=0)
    {
      if((i%10)==0||(i%10)==1||(i%10)==9||(i%10)==4) 
      {
        count ++;
      }
      i/=10;
    }
    printf("%d",count);
    return 0;
}
