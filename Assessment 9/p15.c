#include<stdio.h>
int main()
{
    int arr[100],arr1[100],c=0,a,b,b1,sum=0,b2=0;
    for(int i=0;i<1000;i++)
    {
        scanf("%d",&arr[i]);
        b1=arr[i];
        if(b1==0)
        {
            break;
        }
        c++;
    }
    for(int i=0;i<c;i++)
    {   
        sum=0;
        b=arr[i];
        a=0;
        while(b!=0)
        {
            a=b%10;
            sum=sum+a;
            b=b/10;
        }
        arr1[b2]=sum;
        b2++;
    }
    for(int i=0;i<b2;i++)
    {
        printf("%d  ",arr1[i]);
    }
}
