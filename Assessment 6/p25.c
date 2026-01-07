#include<stdio.h>
int main()
 { 
    int i,count=0;
    scanf("%d",&i);
    while(i!=0)
    {
      if((i%10)==2||(i%10)==3||(i%10)==5||(i%10)==7) 
      {
        count ++;
      }
      i/=10;
    }
    printf("%d",count);
    return 0;
}
