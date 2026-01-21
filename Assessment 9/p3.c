#include<stdio.h>
int main()
{
    int arr[100];
    for(int i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    int s=arr[0];
    for(int i=1;i<5;i++)
    {
          if(s>arr[i])
          {
             s=arr[i];
          }
    }
    printf("%d",s);
}
