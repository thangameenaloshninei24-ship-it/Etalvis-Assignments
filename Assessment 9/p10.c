#include<stdio.h>
int main()
{
    int arr[100],arr1[100],c=0,b,flag=1;
    for(int i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<5;i++)
    {   flag=1;
         b=arr[i];
         for(int i=2;i<b;i++)
         {
            if(b%i==0)
            {  
                flag=0;
                break;
            }
         }
         if(flag==1)
         {
            arr1[c]=arr[i];
            c++;
         }

    }
    for(int i=0;i<c;i++)
    {
        printf("%d ",arr1[i]);
    }
}
