#include<stdio.h>
int main()
{
    int arr[100],arr1[100],rev=0,b,a,c=0;
    for(int i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<5;i++)
     {   rev=0;
        b=arr[i];
        while(b!=0)
        {
           a=b%10;
           rev=(rev*10)+(a);
           b=b/10;
        }
        
        arr1[c]=rev;
        c++;
     }  
     for(int i=0;i<c;i++)
     {
        printf("%d ",arr1[i]);
     }
}
