#include<stdio.h>
int main()
{
    int arr[100];
    for(int i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    int l=arr[0];
    for(int i=1;i<5;i++)
    {
          if(l<arr[i])
          {
             l=arr[i];
          }
    }
    printf("%d",l);
}
